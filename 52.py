'''
	Give 2 arrays of size 7 and 3 which are sorted such that the last 3 blocks in first array are empty,
	merge the arrays in a sorted manner in the most efficient way. 
	E.g:- 
		a[7] = [4, 10, 11, 20__, __, __] 
		b[3] = [1,3,7]
'''
def merge_func(array_a, array_b):
	cur_a = 0
	cur_b = len(array_b) - 1
	pos = len(array_a) - 1

	for i in xrange(len(array_a)-1, -1, -1):
		if array_a[i] != None:
			cur_a = i
			break

	while cur_a >= 0 and cur_b >= 0:
		if array_a[cur_a] > array_b[cur_b]:
			array_a[pos] = array_a[cur_a]
			cur_a -= 1
		else:
			array_a[pos] = array_b[cur_b]
			cur_b -= 1
		pos -= 1
	
	if cur_a >= 0:
		for i in xrange(cur_a, -1, -1):
			array_a[pos] = array_a[i]
			pos -= 1
	else:
		for i in xrange(cur_b, -1, -1):
			array_a[pos] = array_b[i]
			pos -= 1
	print array_a

if __name__ == "__main__":
	import pdb
	pdb.set_trace()

	merge_func([4,5,6,7,8,9,10,11,20,None,None,None],[1,3,7])
