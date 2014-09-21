#Given a number in an array form, Come up with an algorithm to push all the zeros to the end.
#Expectation : O(n) solution

#firstly,I think we can put all number in the array into another array,then filter all the zeros.
#but its place cost too much
#then ,I think we can filter the zero in original array.

g_numbers = 0

def filter_zero(array):
	global g_numbers
	def my_filter(my_array, start_pos):
		global g_numbers
		for i in xrange(start_pos, len(my_array)-2):
			if my_array[i+1] == 0:
				g_numbers += 1
				my_filter(my_array, i+1)
			my_array[i] = my_array[i+1]


	for i in xrange(len(array)):
		if array[i] == 0:
			g_numbers = 1
			my_filter(array, i)
			break

	for i in xrange(len(array)-1, g_numbers+2, -1):
		array[i] = 0

	

if __name__ == "__main__":
	import pdb
	pdb.set_trace()
	my_array = [1,0,3,0,2,3,1,0,0,0,0,0,0,0,12,0,0,4,5,0,6,7,0,9,0,0,0]

	print "before:",my_array
	filter_zero(my_array)
	print my_array

