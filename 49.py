"""
	practise for DP.
	we have an array,find out a continuous subarray that all the number is non-decrease
	this is known as LIS problem
"""

def main(l_data):
	l_elem_sum = []

	for elem_data in l_data:
		cur_max = 1
		pre_elem = elem_data
		for elem_sum in l_elem_sum:
			if elem_data >=  elem_sum[0] and elem_sum[1] >= cur_max:
				cur_max = elem_sum[1] + 1
				pre_elem = elem_sum[0]
		l_elem_sum.append((elem_data, cur_max, pre_elem))

	for elem in l_elem_sum:
		#print elem
		print "elem:", elem[0], "pre_elem:", elem[2], "elem_sum:", elem[1]

if __name__ == "__main__":
	import pdb
	pdb.set_trace()
	main([5,3,4,8,6,7,1,8,9,2,10,11,23])
