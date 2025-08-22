declare module 'tree-sitter-cli/dsl' {
  type AliasRule = { type: 'ALIAS'; named: boolean; content: Rule; value: string };
  type BlankRule = { type: 'BLANK' };
  type ChoiceRule = { type: 'CHOICE'; members: Rule[] };
  type FieldRule = { type: 'FIELD'; name: string; content: Rule };
  type ImmediateTokenRule = { type: 'IMMEDIATE_TOKEN'; content: Rule };
  type PatternRule = { type: 'PATTERN'; value: string };
  type PrecDynamicRule = { type: 'PREC_DYNAMIC'; content: Rule; value: number };
  type PrecLeftRule = { type: 'PREC_LEFT'; content: Rule; value: number };
  type PrecRightRule = { type: 'PREC_RIGHT'; content: Rule; value: number };
  type PrecRule = { type: 'PREC'; content: Rule; value: number };
  type Repeat1Rule = { type: 'REPEAT1'; content: Rule };
  type RepeatRule = { type: 'REPEAT'; content: Rule };
  type SeqRule = { type: 'SEQ'; members: Rule[] };
  type StringRule = { type: 'STRING'; value: string };
  type SymbolRule<Name extends string> = { type: 'SYMBOL'; name: Name };
  type TokenRule = { type: 'TOKEN'; content: Rule };

  type Rule =
    | AliasRule
    | BlankRule
    | ChoiceRule
    | FieldRule
    | ImmediateTokenRule
    | PatternRule
    | PrecDynamicRule
    | PrecLeftRule
    | PrecRightRule
    | PrecRule
    | Repeat1Rule
    | RepeatRule
    | SeqRule
    | StringRule
    | SymbolRule<string>
    | TokenRule;

  type RuleOrLiteral = Rule | RegExp | string;

  type GrammarSymbols<RuleName extends string> = {
    [name in RuleName]: SymbolRule<name>;
  } &
    Record<string, SymbolRule<string>>;

  type RuleBuilder<RuleName extends string> = (
    $: GrammarSymbols<RuleName>,
    previous: Rule,
  ) => RuleOrLiteral;

  type RuleBuilders<
    RuleName extends string,
    BaseGrammarRuleName extends string
  > = {
      [name in RuleName]: RuleBuilder<RuleName | BaseGrammarRuleName>;
    };

  interface Grammar<
    RuleName extends string,
    BaseGrammarRuleName extends string = never,
    Rules extends RuleBuilders<RuleName, BaseGrammarRuleName> = RuleBuilders<
      RuleName,
      BaseGrammarRuleName
    >
  > {
    name: string;
    rules: Rules;
    precedences?: (
      $: GrammarSymbols<RuleName | BaseGrammarRuleName>,
      previous: Rule[][],
    ) => RuleOrLiteral[][],
    conflicts?: (
      $: GrammarSymbols<RuleName | BaseGrammarRuleName>,
      previous: Rule[][],
    ) => RuleOrLiteral[][];
    externals?: (
      $: Record<string, SymbolRule<string>>,
      previous: Rule[],
    ) => RuleOrLiteral[];
    extras?: (
      $: GrammarSymbols<RuleName | BaseGrammarRuleName>,
    ) => RuleOrLiteral[];
    inline?: (
      $: GrammarSymbols<RuleName | BaseGrammarRuleName>,
      previous: Rule[],
    ) => RuleOrLiteral[];
    supertypes?: (
      $: GrammarSymbols<RuleName | BaseGrammarRuleName>,
      previous: Rule[],
    ) => RuleOrLiteral[];
    word?: ($: GrammarSymbols<RuleName | BaseGrammarRuleName>) => RuleOrLiteral;
  }

  type GrammarSchema<RuleName extends string> = {
    [K in keyof Grammar<RuleName>]: K extends 'rules'
    ? Record<RuleName, Rule>
    : Grammar<RuleName>[K];
  };

  export function alias(rule: RuleOrLiteral, name: string): AliasRule;
  export function alias(
    rule: RuleOrLiteral,
    symbol: SymbolRule<string>,
  ): AliasRule;
  export function blank(): BlankRule;
  export function field(name: string, rule: RuleOrLiteral): FieldRule;
  export function choice(...options: RuleOrLiteral[]): ChoiceRule;
  export function optional(rule: RuleOrLiteral): ChoiceRule;
  export const prec: {
    (value: String | number, rule: RuleOrLiteral): PrecRule;
    left(rule: RuleOrLiteral): PrecLeftRule;
    left(value: String | number, rule: RuleOrLiteral): PrecLeftRule;
    right(rule: RuleOrLiteral): PrecRightRule;
    right(value: String | number, rule: RuleOrLiteral): PrecRightRule;
    dynamic(value: String | number, rule: RuleOrLiteral): PrecDynamicRule;
  };
  export function repeat(rule: RuleOrLiteral): RepeatRule;
  export function repeat1(rule: RuleOrLiteral): Repeat1Rule;
  export function seq(...rules: RuleOrLiteral[]): SeqRule;
  export function sym<Name extends string>(name: Name): SymbolRule<Name>;
  export const token: {
    (rule: RuleOrLiteral): TokenRule;
    immediate(rule: RuleOrLiteral): ImmediateTokenRule;
  };
  export function grammar<RuleName extends string>(
    options: Grammar<RuleName>,
  ): GrammarSchema<RuleName>;
  export function grammar<
    BaseGrammarRuleName extends string,
    RuleName extends string
  >(
    baseGrammar: GrammarSchema<BaseGrammarRuleName>,
    options: Grammar<RuleName, BaseGrammarRuleName>,
  ): GrammarSchema<RuleName | BaseGrammarRuleName>;
}