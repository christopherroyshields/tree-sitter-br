((def_statement 
  (library_keyword)? @library
  [
  (numeric_function_definition
  	(function_name) @function_name
    (parameter_list
       [(required_paramter
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
  
  )
  (string_function_definition
  	(function_name) @function_name
    (parameter_list
       [(required_paramter
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
  )
  ]
)
(line)
)