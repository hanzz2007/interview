"""
	Print all paths of a binary tree from root to leaf. 
	Later, extend the solution to work with graphs, careful attention to cycles which you should print as paths as well (without printing visited nodes twice).
"""

"""
	a tree is a special kind of graph. a binary tree has two children nodes.but a graph has many children.
	the title want us print the path from root to leaf,so we need to use preorder visite method
"""

class Node(object):
	def __init__(self, elem):
		self.elem = elem
		self.children = []
		self.visited = False
		self.parent = None

	def child_len(self):
		return len(self.children)

	def set_parent(self, parent):
		self.parent = parent

	def add_child(self, elem):
		child_node = Node(elem)
		child_node.set_parent(self)
		self.children.append(child_node)
		

class BinaryTree(object):
	def __init__(self, l_nodes):
		self.root = None
		all_nodes = []

		for elem in l_nodes:
			if not self.root:
				self.root = Node(elem)
				self.cur_node = self.root
			else:
				if elem:
					self.cur_node.add_child(elem)
					all_nodes.append(self.cur_node.children[-1])
				else:
					self.cur_node.add_child(None)

				if self.cur_node.child_len() == 2:
					self.cur_node = all_nodes.pop(0)

	def print_tree(self):
		def print_node(node):
			print "node:", node.elem
			if node.parent:
				print "parent:", node.parent.elem
			else:
				print "no parent"
		
		my_node = self.root
		node_list = []
		for elem in self.root.children:
			node_list.append(elem)

		while node_list:
			node = node_list.pop(0)
			print_node(node)
			for elem in node.children:
				node_list.append(elem)


def leaf_check(my_node):
	if not my_node.children:
		return True


	for elem in my_node.children:
		if elem.elem != None:
			return False	
			
	return True

def pre_visit(my_node, path_record, children_record, leaf_check):
	if my_node.elem != None and not my_node.visited:

		path_record.append(my_node)
		if leaf_check(my_node):
			children_record.append(my_node)

		my_node.visited = True
		for child in my_node.children:
			pre_visit(child, path_record, children_record, leaf_check)
	else:
		return


def print_path(path_record, children_record):
	for elem in children_record:
		for node in path_record:
			print node.elem
			if node ==  elem.parent:
				print elem.elem
				print ""
				break
"""
	for a graph ,you just write your own leaf_check function.a graph node has many children node.
"""
if __name__ == "__main__":
	import pdb
	pdb.set_trace()
	path_record = []
	children_record = []
	my_tree = BinaryTree([1,2,3,4,0,0,0,5,6,7,8])
	#my_tree.print_tree()
	pre_visit(my_tree.root, path_record, children_record, leaf_check)
	"""
	for elem in path_record:
		if elem.parent:
			print "elem",elem.elem,"parent",elem.parent.elem
		else:
			print "elem", elem.elem,"no parent"

	print "children"
	for elem in children_record:
		print elem.elem
	"""
	print_path(path_record, children_record)
