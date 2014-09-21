"""
	Given a number N, find the smallest even number E such that E > N and digits in N and E are same. 
	Print NONE otherwise. 
	Sample: 
	Input 
	N = 34722641 
	Output 
	E = 34724126 
	Input 
	N = 8234961 
	Output 
	E = 8236194 (instead of 8236149) 
	Java solution
	this is yahoo interview question

	my solution:
		we divie the number into two parts, then we get full permutation of the latter part, and check if it is the smallest big even number ,if it is then we concatenate them, if it is not ,we re divive the number (the latter part is
increased 1 .
"""
import itertools


def get_full_permutation(data):
	"""
		input is a list
	"""
	data_list = itertools.product(data, repeat=len(data))	
	data_set = data[:]
	data_set.sort()
	permutation_array = []
	for elem in data_list:
		temp_set = list(elem)
		temp_set.sort()
		if temp_set == data_set and elem not in permutation_array:
			permutation_array.append(list(elem))
	return permutation_array

def list_to_long(my_list):
	my_num = 0
	cur_index = 1
	for i in xrange(len(my_list)-1, -1, -1):
		my_num += cur_index* int(my_list[i])
		cur_index *= 10
	return my_num

def number_to_list(number):
	my_list = list(str(number))
	return my_list



def check(data):
	even_dict = {}
	data_number = long(data)
	cur_number = 0

	for i in xrange(len(data)):
		if not int(data[i]) % 2 and data[i] not in even_dict:
			even_dict[data[i]] = i
	
	for key in even_dict:
		temp_list = []
		temp_list.extend(data[:even_dict[key]])
		temp_list.extend(data[even_dict[key]+1:])
		full_permutation = get_full_permutation(temp_list)
		for elem in full_permutation:
			elem.append(key)
			num = list_to_long(elem)
			if data_number < num:
				if not cur_number or cur_number > num:
					cur_number = num

	if not cur_number:
		return None
	else:
		return str(cur_number)

def main(number):
	my_number = str(number)
	for i in xrange(len(my_number)-2, -1 , -1):
		result = check(my_number[i:len(my_number)])
		if result:
			data = my_number[:i] + result
			data = long(data)
			print data
			break


if __name__ == "__main__":
	import pdb
	pdb.set_trace()
	number = long(raw_input("please input a number"))
#	check('2541')
	main(number)
