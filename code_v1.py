tokens = open('output.txt')
code = open('test.c')
			
index = 0 #index = 0 is reserved for constant
complexity = [0]
counter = 0	
			
line_raw = tokens.readline()
			
while line_raw:
			
	line = line_raw[:-1] if line_raw[-1]=='\n' else line_raw
	line, token, category = line.split('\t')
	
	if(token=='for'):
		complexity.append('(')

	elif(token==';'):
		if(type(complexity[-1])==int):
			complexity[-1] = complexity[-1]+1
		else:
			complexity.append(1)

	line_raw = tokens.readline()


print(complexity)