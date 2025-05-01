;; literals
(string) @string
(number) @number

;; variables
(stringidentifier) @variable
(numberidentifier) @variable

;; comment
(doc_comment) @comment
(comment) @comment
(multiline_comment) @comment

;; functions
(numeric_system_function (function_name) @function.builtin)
(string_system_function (function_name) @function.builtin)
((function_name) @function.builtin
  (#match? @function.builtin "[aA][iI][dD][xX]"))
((function_name) @function.builtin
  (#match? @function.builtin "[dD][iI][dD][xX]"))
(_ (function_name)  @function)

(_ operator: (_) @operator)