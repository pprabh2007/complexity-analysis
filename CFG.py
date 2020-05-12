class Node:

	def __init__(self):
		self.data = []
		self.children = []

	def printGraph(self):
		print('----------')
		print(self)
		print(self.data)
		print(self.children)

		for x in self.children:
			x.printGraph()


tokens = open('output.txt')

def makeGraph(prev_head):

	new_head = Node()
	prev_head.children.append(new_head)

	line_raw = tokens.readline()
	print(line_raw)

	if_else_counter = False
	change_node = False
	while (line_raw):
		line = line_raw[:-1] if line_raw[-1]=='\n' else line_raw
		line, token, category = line.split('\t')
		
		if(token=='if'):
			if_else_counter = True
		elif(token=='else' and if_else_counter):
			if_else_counter = False
		#elif(token=='for'):
		
		
		if(token==';'):
			change_node = True
		elif(token=='{'):
			makeGraph(new_head)
		elif(token=='}'):
			change_node = False
			break
		elif(change_node):
			temp = Node()
			new_head.children.append(temp)
			new_head = temp
			change_node = False

			new_head.data.append(token)
		else:
			new_head.data.append(token)

		line_raw = tokens.readline()

head = Node()
head.data.append('HEAD')

makeGraph(head)

head.printGraph()