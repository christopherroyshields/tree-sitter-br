# Performance Analysis: mat_numeric_array_expression

## Overview
The `mat_numeric_array_expression` rule in grammar.js exhibits slow parse speed due to several structural issues that cause excessive backtracking and ambiguity in the parser.

## Current Rule Structure

```javascript
mat_numeric_array_expression: $ => seq(
  alias($.numberreference, $.numberarray),
  optional(
    seq(
      "(",
      choice(
        $.mat_size,
        $.mat_range
      ),
      ")"
    )
  ),
  optional($.mat_assignment_numeric)
),
```

## Identified Performance Bottlenecks

### 1. Deep Recursion through `numeric_expression`
The rule uses `numeric_expression` in multiple places:
- In `mat_size`: `commaSep1($.numeric_expression)` 
- In `mat_range`: `seq($.numeric_expression, ":", $.numeric_expression)`
- In `mat_assignment_numeric`: `seq("(", $.numeric_expression, ")")`

`numeric_expression` is a choice of 5 different expression types:
- `numeric_function_assignment`
- `numeric_forced_assignment_expression`
- `numeric_unary_expression`
- `numeric_binary_expression`
- `numeric_primary_expression`

Each of these can be recursive, creating exponential backtracking possibilities.

### 2. Complex `mat_assignment_numeric` Rule
The `mat_assignment_numeric` has 3 main choice branches with deeply nested optional sequences:

**Branch 1**: Array with optional range and optional arithmetic operation
```javascript
seq(
  alias($.numberreference, $.numberarray),
  optional(seq("(", $.mat_range, ")")),
  optional(seq(
    choice("+", "-"),
    alias($.numberreference, $.numberarray),
    optional(seq("(", $.mat_range, ")"))
  ))
)
```

**Branch 2**: Parenthesized expression with optional arithmetic operation
```javascript
seq(
  "(", $.numeric_expression, ")",
  optional(seq(
    choice("+", "-", "*", "/"),
    alias($.numberreference, $.numberarray),
    optional(seq("(", $.mat_range, ")"))
  ))
)
```

**Branch 3**: System function call with array argument
```javascript
seq(
  alias(token(choice(...NUMERIC_ARRAY_SYSTEM_FUNCTIONS)), $.function_name),
  "(",
  choice(
    alias($.numberreference, $.numberarray),
    alias($.string_name, $.stringarray),
  ),
  optional(seq("(", $.mat_range, ")")),
  ")"
)
```

### 3. Multiple Optional Sequences
The rule has nested optionals that create multiple parsing paths:
- Top level: optional mat_size/mat_range
- Second level: optional mat_assignment_numeric
- Within mat_assignment_numeric: multiple nested optionals

This creates at least 4 possible parsing paths just at the top level, multiplied by the complexity within each branch.

### 4. commaSep1 in mat_size
`commaSep1($.numeric_expression)` expands to:
```javascript
seq(rule, repeat(seq(',', rule)))
```
With complex numeric expressions, this can lead to exponential backtracking on comma-separated lists.

## Proposed Optimizations

### Option 1: Simplify `mat_size` (Lower Impact)
Limit mat_size to simpler expressions to reduce recursion depth:

```javascript
mat_size: $ => seq(
  $.numeric_primary_expression,
  repeat(seq(',', $.numeric_primary_expression))
),
```

**Pros:**
- Reduces parsing complexity for array dimensions
- Maintains compatibility with most use cases

**Cons:**
- Limits expressiveness for complex array size calculations
- May break edge cases where complex expressions are used for dimensions

### Option 2: Add Precedence to Reduce Ambiguity (Medium Impact)
Add precedence to help the parser make decisions faster:

```javascript
mat_numeric_array_expression: $ => prec.left(1, seq(
  alias($.numberreference, $.numberarray),
  optional(seq("(", choice($.mat_size, $.mat_range), ")")),
  optional($.mat_assignment_numeric)
)),
```

**Pros:**
- Non-breaking change to the grammar structure
- Helps parser resolve ambiguities faster
- Easy to implement and test

**Cons:**
- May not fully resolve all performance issues
- Limited improvement for deeply recursive cases

### Option 3: Restructure `mat_assignment_numeric` (High Impact)
Break down the complex choice into simpler, more deterministic patterns:

```javascript
mat_assignment_numeric: $ => seq(
  field("operator", $.assignment_op),
  choice(
    $.mat_array_assignment,
    $.mat_expression_assignment,
    $.mat_function_assignment
  )
),

mat_array_assignment: $ => seq(
  alias($.numberreference, $.numberarray),
  optional(seq("(", $.mat_range, ")")),
  optional($.mat_array_operation)
),

mat_array_operation: $ => seq(
  choice("+", "-"),
  alias($.numberreference, $.numberarray),
  optional(seq("(", $.mat_range, ")"))
),

mat_expression_assignment: $ => seq(
  "(", $.numeric_expression, ")",
  optional(seq(
    choice("+", "-", "*", "/"),
    alias($.numberreference, $.numberarray),
    optional(seq("(", $.mat_range, ")"))
  ))
),

mat_function_assignment: $ => seq(
  alias(token(choice(...NUMERIC_ARRAY_SYSTEM_FUNCTIONS)), $.function_name),
  "(",
  choice(
    alias($.numberreference, $.numberarray),
    alias($.string_name, $.stringarray),
  ),
  optional(seq("(", $.mat_range, ")")),
  ")"
),
```

**Pros:**
- More deterministic parsing paths
- Easier to debug and maintain
- Better performance due to reduced choice complexity

**Cons:**
- Changes the parse tree structure
- Requires updating test cases
- More extensive changes to the grammar

## Impact Analysis

### Affected Rules
1. **Direct dependencies:**
   - `mat_statement` - Uses `mat_numeric_array_expression` directly
   
2. **Test corpus impact:**
   - `test/corpus/statements.txt` - Contains MAT statement tests
   - `test/corpus/expressions.txt` - Contains array expression tests

3. **Language features affected:**
   - MAT array operations
   - Array assignments with ranges
   - Array arithmetic operations
   - System function calls on arrays (AIDX, DIDX)

### Example Code Patterns Affected
```basic
MAT A(10)                    ! Array declaration
MAT A=B                      ! Simple assignment
MAT A=B(1:5)                ! Range assignment
MAT A(1:10)=B(5:15)         ! Range to range
MAT A=B+C                   ! Array arithmetic
MAT A=(5)                   ! Scalar to array
MAT A=AIDX(B(1:10))        ! System function
```

## Recommendation

1. **Start with Option 2** (add precedence) as it's the least invasive change
2. Measure performance improvement using tree-sitter's built-in benchmarking
3. If performance is still inadequate, implement Option 3 (restructure) for better long-term maintainability
4. Consider implementing Option 1 in conjunction with other changes if array size expressions are rarely complex in practice

## Testing Strategy

1. Run existing test corpus to ensure no regressions
2. Add performance benchmarks for complex MAT expressions
3. Test with real-world BR code samples
4. Verify parse tree structure remains compatible or document breaking changes