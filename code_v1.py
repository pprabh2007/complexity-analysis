tokens = open('output.txt')
code = open('test.c')
			
index = 0 #index = 0 is reserved for constant
complexity = []
counter = 0	
			
line_raw = tokens.readline()
			
loop_nested = 0
control_variable = None

while line_raw:
			
	line = line_raw[:-1] if line_raw[-1]=='\n' else line_raw
	line, token, category = line.split('\t')
	
	line_raw = tokens.readline()

	if(token=='for'):
		expr_number = 1

		variable_init = None
		variable_limit = None
		variable_jump = None
		variable_range = None
		variable_comparator = None

		complexity.append('+')

		while(line_raw):
			line = line_raw[:-1] if line_raw[-1]=='\n' else line_raw
			line, token, category = line.split('\t')

			line_raw = tokens.readline()

			if(token==')'):
				break

			if(token==';'):
				expr_number = expr_number + 1
			elif(category=='CONSTANT' and expr_number==1):
				variable_init = int(token)
			elif(category=='IDENTIFIER' and expr_number==2):
				variable_limit = token
			elif(category=='CONSTANT' and expr_number==2):
				variable_limit = int(token)
			elif(category=='PUNCTUATOR' and expr_number==2):
				variable_comparator = token
			elif((token=='++' or token=='--') and expr_number==3):
				variable_jump = 1
			elif(category=='CONSTANT' and expr_number==3):
				variable_jump = abs(int(token))

		if(variable_comparator=='<='):
			variable_init = variable_init - 1 
		elif(variable_comparator=='>='):
			variable_init = variable_init + 1

		if(type(variable_limit)==int):
			variable_range = variable_limit - variable_init
			if(variable_comparator=='>' or variable_comparator=='>='):
				variable_range = - variable_range
			complexity.append(variable_range/variable_jump)
		else:
			if(variable_comparator=='>' or variable_comparator=='>='):

				temp = '('+str(variable_init)+'-'+str(variable_limit)+')'
				temp = '('+temp+'/'+str(variable_jump)+')' if variable_jump!=1 else temp
				complexity.append(temp)
			else:
				temp = '('+str(variable_limit)+'-'+str(variable_init)+')'
				temp = 	'('+temp+'/'+str(variable_jump)+')' if variable_jump!=1 else temp
				complexity.append(temp)

		complexity.append('*')
	

	elif(token==';'):
		if(type(complexity[-1])==int):
			complexity[-1] = complexity[-1]+1
		else:
			complexity.append(1)
	elif(token=='{'):
		complexity.append('(')
	elif(token=='}'):
		complexity.append(')')

	
print('\n')
for elem in complexity:
	print(elem, end = '')
print('\n')