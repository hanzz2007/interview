"""
美团笔试题：
	现有实数数组A和B，希望将A和B归并为一个有序数组C，且C中无重复的数，
请写出算法并给出算法复杂
解析：
   首先考虑分治法，但是分治法没法去除重复元素，考虑单独写一个函数，因为数组如果是有序的，那么
   删除数组中的重复元素的时间复杂度应该是n。
"""
import pdb

def my_unique(my_list):
	end_pos = len(my_list)-1
	cur_pos = 0
	temp_array = []
	while cur_pos < end_pos:
		if my_list[cur_pos + 1] != my_list[cur_pos]:
			temp_array.append(my_list[cur_pos])
		cur_pos += 1
	temp_array.append(my_list[-1])
	return temp_array

def merge(my_list, start_pos, split_pos, end_pos):
	index_a = start_pos
	index_b = split_pos+1

	sorted_list = []

	while index_a <= split_pos  and index_b <=  end_pos:
		if my_list[index_a] >  my_list[index_b]:
			sorted_list.append( my_list[index_a])
			index_a += 1
		else:
			sorted_list.append(my_list[index_b])
			index_b += 1

	while index_a <= split_pos:
		sorted_list.append(my_list[index_a])
		index_a += 1
	
	while index_b <= end_pos:
		sorted_list.append(my_list[index_b])
		index_b += 1

	return sorted_list

def merge_sort(my_list, start_pos, end_pos):
	if start_pos == end_pos:
		return 
	else:
		split_point = int((end_pos + start_pos)/2)
		merge_sort(my_list, start_pos, split_point)
		merge_sort(my_list, split_point+1, end_pos)
		return_list = merge(my_list, start_pos, split_point, end_pos)

		cur_pos = start_pos
		for elem in return_list:
			my_list[cur_pos] = elem
			cur_pos += 1
		#test code start
		#print "this is the partly sorted list"
		#for elem in my_list:
		#	print elem
		#print " "
		#test code finish
		return 
def main(array_a, array_b):
	temp_array = []
	temp_array.extend(array_a)
	temp_array.extend(array_b)
	
	merge_sort(temp_array, 0 , len(temp_array)-1)
	print "before unique"
	print temp_array
	temp_array = my_unique(temp_array)

	print temp_array
if __name__ == "__main__":
	list_a = [1,7,5,121,312,1212,131,221,1313,542,1,31,2,654,13,1,31,7676,4,34,1,431,4,314,3,246,14,1,41,574,3,9,6]
	list_b = [1,7,32,42,2424,232,42,42,2,242]

	pdb.set_trace()
	main(list_a,list_b)
