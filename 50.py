"""
	You are given a lot of cuboid boxes with different length, breadth and height. You need to find the maximum subset which can fit into each other. 
	For example: 
	If Box A has LBH as 7 8 9 
	If Box B has LBH as 5 6 8 
	If Box C has LBH as 5 8 7 
	If Box D has LBH as 4 4 4 
	then answer is A,B,D 
	A box can fit into another only and only if all dimensions of that is less than the bigger box. Also Rotation of boxes is not possible.

	solution:
		we can put all the fit boxs into a container, if a box does not belongs to any containers,then we add a new container,this container merge box from the other container.
		what is more,we should store all the box in sorted list.so we can add a box very quickly
	
"""

class Box(object):
	def __init__(self, length, breadth, height):
		self.length = length
		self.breadth = breadth
		self.height = height

	def is_fit(self, box):
		if self.length < box.length and self.breadth < box.breadth and self.height < box.height:
			return True, "be_included"
		elif self.length > box.length and self.breadth > box.breadth and self.height > box.height:
			return True, "include"
		return False, "none"

	def print_self(self):
		print "length:", self.length
		print "breadth:", self.breadth
		print "height:", self.height

class Container(object):
	def __init__(self, box):
		self.container = [box]
	def add_box(self, box):
		for i in xrange(len(self.container)):
			result = self.container[i].is_fit(box)
			if result[0] == True:
				if result[1] == "be_included":
					self.container.insert(i, box)
					return True
			else:
				return False
		self.container.append(box)
		return True

	def merge_container(self, another_container):
		for i in xrange(len(another_container.container)-1, -1, -1):
			if not self.add_box(another_container.container[i]):
				break
			
				
		
	def print_result(self):
		for elem in self.container:
			print "elem:"
			elem.print_self()
	
	
def main(box_list):
	container_list = []
	for box in box_list:
		if not container_list:
			container_list.append(Container(box))
		else:
			add_flag  =  False
			for elem in container_list:
				add_flag = elem.add_box(box)

			if not add_flag:
				my_container = Container(box)

				for elem in container_list:
					my_container.merge_container(elem)

				container_list.append(my_container)

	for elem in container_list:
		print ""
		elem.print_result()



if __name__ == "__main__":
	import pdb
	pdb.set_trace()
	box_list = [Box(7,8,9),Box(5,6,8),Box(2,3,4),Box(4,5,6),Box(1,1,1),Box(6,6,6),Box(7,7,7),Box(5,8,7),Box(4,4,4,)]
	main(box_list)
