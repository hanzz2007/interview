"""
	There is an array {1,2,3,4,5,6,7,8} 
	Divide the array in two subarrays such that the difference between sum of the elements of individual subarrays is minimum. 

	lets say u divide the arrays in a1 and a2. 
	Then sum of elements of a1 - sum of elements of a2 should be minimum if u divide the array in other way possible.

	solution:
		we have the restriction condition that sub_array a  + sum_array b = sum(array)
		so we can get that if we want  to find the minimum of abs( a - b), then we can find the minimum of abs(sum(array) - 2*b)
		the minimum of abs(sum(array) - 2b) == 0 -> b = sum(array)/2
		so we need to find the most closest of b 

		so ,we can change the question into that :
		we want to find a sub array that sum of they is the most similiary of given number X
		
"""
import math

def search(array, num):
	if len(array) == 1:
		return (array[0], [array[0]])


	result_a = search(array[0:len(array)-1], num)
	result_b = search(array[0:len(array)-1], math.fabs(num - array[-1]))

	sum_a =  math.fabs(result_a[0] - num)
	sum_b = math.fabs(result_b[0] + array[-1]- num)

#	return result_a if sum_a < sum_b else (result_b[0]+array[-1] , result_b[1].append(array[-1]))

	if sum_a < sum_b:
		return result_a
	else:
		new_list = result_b[1][:]
		new_list.append(array[-1])
		return (result_b[0]+ array[-1], new_list)

def find_split(array):
	my_sum = sum(array)
	main(array, int(my_sum / 2))


def main(array, num):
	result = search(array, num)
	print result[0]
	print result[1]


if __name__ == "__main__":
	import pdb
	pdb.set_trace()
	#main([5,3,4,8,6,7], 21)
	
	my_array = [1,2,3,4,5,6,7,12,13,21,22,32,13]
	print sum(my_array)
	my_array.sort()
	find_split(my_array)
