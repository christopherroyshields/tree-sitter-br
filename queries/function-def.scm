((line (doc_comment)? @doc)
.
(line (def_statement 
  (library_keyword)? @library
  [
  (numeric_function_definition
  	(function_name) @function_name
    (parameter_list
       [(required_parameter
          (parameter
            [
            (string_array_parameter
              (stringarray) @parameter)
			(number_array_parameter
              (numberarray) @parameter)
			(string_parameter
              (stringreference) @parameter)
            (numeric_parameter
              (numberreference) @parameter)
			]))
         (optional_parameter
          (parameter
            [
            (string_array_parameter
              (stringarray) @parameter)
			(number_array_parameter
              (numberarray) @parameter)
			(string_parameter
              (stringreference) @parameter)
            (numeric_parameter
              (numberreference) @parameter)
			]))])
  
  (numeric_expression)? @expr)
  (string_function_definition
  	(function_name) @function_name
    (parameter_list
       [(required_parameter
          (parameter
            [
            (string_array_parameter
              (stringarray) @parameter)
			(number_array_parameter
              (numberarray) @parameter)
			(string_parameter
              (stringreference) @parameter)
            (numeric_parameter
              (numberreference) @parameter)
			]))
         (optional_parameter
          (parameter
            [
            (string_array_parameter
              (stringarray) @parameter)
			(number_array_parameter
              (numberarray) @parameter)
			(string_parameter
              (stringreference) @parameter)
            (numeric_parameter
              (numberreference) @parameter)
			]))])
  (string_expression)? @expr)
  ]
))) @def
(fnend_statement) @fnend