import math
import copy

"""
	Consider the array 3 5 7 6 3. 

	Return the pair of indices that forms the slice where the difference between the maximum and minimum in the slice <= 2. 

	Output: 
	(0,0) (1,1) (2,2) (3,3) (4,4) (5,5) 
	(0,1) (1,2) (1,3) (2,3) 

	Example slices: 3 5, 5 7, 1 3, 2 3.

	this is a google interview question.at here i have to express my respect to this great company, it takee me almost one day to finish it .
    my solution:
		if we iteration the array ,it takes n^2 time consume
		so we take advantage of quick sort, when we range the elem to different position.we check its data with the axis number,and record,
		so,its time consume  equal to quick sort.
		but you should note: when we work with one sub array, we should check if its axis number is less/greater than the data in the another sub array(so ,we should pass in the
		pre_array argument)


"""
class Node(object):
	def __init__(self, number, original_index):
		self.number = number
		self.less_array = []
		self.greater_array = []
		self.self_array = []
		self.original_index = original_index
		self.visited = False

	def add_less_index(self, index):
		self.less_array.append(index)

	def add_greater_index(self, index):
		self.greater_array.append(index)

	def add_self_index(self, index):
		self.self_array.append(index)

	def get_less_array(self):
		return copy.copy(self.less_array)

	def get_self_array(self):
		return copy.copy(self.self_array)
	
	def get_greater_array(self):
		return copy.copy(self.greater_array)

	def set_visited(self):
		self.visited = True
	
	def is_visited(self):
		return self.visited
	
	def get_number(self):
		return self.number
	
	def get_original_index(self):
		return self.original_index

def separation(original_array, array, start_pos, end_pos, base_num, pre_array, relation):
	"""	
	for elem in array:
		print "number:",elem.get_number()
		print "original index:", elem.get_original_index()
		print "greater array:", elem.get_greater_array()
		print "less array:", elem.get_less_array()
	"""		
	#axis_elem[1]:less than axis number, axis_elem[2]: greater than axis number, axis_elem[3]: itself
	if start_pos > end_pos:
		return
	axis_elem = copy.copy(array[end_pos])

	cur_pos = end_pos
	pos_i = start_pos
	pos_j = end_pos -1

	exit_flag = False
	if start_pos == end_pos:
		if array[start_pos].is_visited():
			return 
		else:
			exit_flag = True

	#we should check the data in another array.
	for elem in pre_array:
		if math.fabs(array[cur_pos].get_number() - original_array[elem]) <= base_num:
			if relation == "greater":
				axis_elem.add_greater_index(elem)
			else:
				axis_elem.add_less_index(elem)

	if exit_flag:
		array[cur_pos] = axis_elem
		array[cur_pos].set_visited()
		return
	

	while pos_i <= pos_j:
		#from left to right find the first elem less than axis_elem
		while pos_i <=  pos_j:
			if array[pos_i].is_visited():
				pos_i += 1
				continue

			if array[pos_i].get_number() == axis_elem.get_number():
				axis_elem.add_self_index(array[pos_i].get_original_index())
				array[pos_i].set_visited()
				pos_i += 1
				continue
		
			
			if array[pos_i].get_number() <= axis_elem.get_number():
				if math.fabs(array[pos_i].get_number() - axis_elem.get_number()) <= base_num:
					axis_elem.add_less_index(array[pos_i].get_original_index())
				pos_i += 1
			else:
				if math.fabs(array[pos_i].get_number() -  axis_elem.get_number()) <= base_num:
					axis_elem.add_greater_index(array[pos_i].get_original_index())

				array[cur_pos] = array[pos_i]
				cur_pos = pos_i
				pos_i += 1
				break

		#from rihth to left find the first elem greater than axis_elem
		while pos_i <= pos_j:
			if array[pos_j].is_visited():
				pos_j -= 1
				continue

			if array[pos_j].get_number() == axis_elem.get_number():
				array[pos_j].set_visited()
				pos_j -= 1
				continue

			if array[pos_j].get_number() > axis_elem.get_number():
				if math.fabs(array[pos_j].get_number() - axis_elem.get_number()) <= base_num:
					axis_elem.add_greater_index(array[pos_j].get_original_index())
				pos_j -= 1
			else:
				if math.fabs(array[pos_j].get_number() - axis_elem.get_number()) <= base_num:
					axis_elem.add_less_index(array[pos_j].get_original_index())
				array[cur_pos] = array[pos_j]
				cur_pos = pos_j
				pos_j -= 1
				break
			
	array[cur_pos] = axis_elem
	array[cur_pos].set_visited()
	separation(original_array, array, start_pos, cur_pos -1, base_num, axis_elem.get_greater_array(), "greater")
	separation(original_array, array, cur_pos + 1, end_pos, base_num, axis_elem.get_less_array(), "less")

if __name__ == "__main__":
	import pdb
	pdb.set_trace()
	array = [11,11,11,19,16,17,18,21,22,5,10,12,2,3]
	original_array = tuple(array)
	my_array = []

	for i in xrange(0,len(array)):
		my_array.append(Node(array[i], i))

	separation(original_array, my_array , 0, len(array)-1, 2,[] , None)

	for elem in my_array:
		print "number:",elem.get_number()
		print "original index:", elem.get_original_index()

		print "greater number:"
		greater = elem.get_greater_array()
		for i in greater:
			print original_array[i]

		print "less number:"
		less = elem.get_less_array()
		for i in less:
			print original_array[i]

		print "self number:"
		self_array = elem.get_self_array()
		for i in self_array:
			print original_array[i]
		print "" 

