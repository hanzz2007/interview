#coding = utf-8
“”“
这是一道亚马逊的面试题：
	Find if the given expression contains redundant parantheses. 
	ex :if expr = a+(b*c) , print false, if expr = a+((b*c)), print true.
从题目中可只。不需要考虑表达式符号的优先级。考虑两个栈（stack_a,stack_b)进行操作。
”“”

class MyStack(object):
	def __init__(self):
		self.stack = []
	def push_elem(self, elem):
		if not self.stack:
			self.stack.append([])
		self.stack[-1].append(elem)
	def add_level(self):
			self.stack.append([])
	def remove_level(self):
			self.stack.pop(len(self.stack)-1)
	def is_empty(self):
			if self.stack and self.stack[-1]:
				return False
			return True
def main(expr):
	stack_a = MyStack()
	stack_b = MyStack()
	for elem in expr:
		if elem == "(":
			stack_a.add_level()
			stack_a.push_elem(elem)
			stack_b.add_level()
		elif elem == ")":
			if stack_b.is_empty() and not stack_a.is_empty():
				return True
			stack_a.remove_level()
			stack_b.remove_level()
		else:
			if stack_a.stack:
				stack_b.push_elem(elem)
	return False

if __name__ == "__main__":
	import pdb
	pdb.set_trace()
	print main("((1+3+(3+4)))+((2*4)+3)")
