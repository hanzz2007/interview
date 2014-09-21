"""
	SUM OF PREVIOUS SMALLER NUMBERS IN ARRAY efficiently. For every given element in the array you should return the sum of previous smaller values you encountered in the array . example : arr = {2, 5,1,9, 3} 
	for a[0] i.e. 2 , sum = 0, a[1] i.e. 5, sum = 2, similarly for a[4], i.e. 3 , sum = 2+1 = 3.
"""

class MyArray(object):
	"""
		if a is bigger than b,then the sum[a] = sum[b] + b
		but we need to handler with repeated numbers,so,we put repeated number into a dict.
	"""
	def __init__(self, array):
		self.array = []
		self.numbers = {}
		for elem in array:
			my_sum  = 0
			if elem in self.numbers:
				self.numbers[elem] += 1
			
			if self.array:
				for i in xrange(len(self.array)-1, -1, -1):
					if elem > self.array[i][0]:
							#this is used for repeat numbers
							num = self.numbers[self.array[i][0]]
							if num > 1:
								my_sum += self.array[i][0] * (num -1)
								self.numbers[self.array[i][0]] = 0
							
							if i-1 != -1 and self.array[i-1][0] < self.array[i][0]:
								my_sum += self.array[i][0]
								my_sum += self.array[i][1]
								break
							else:
								my_sum += self.array[i][0]

			if elem not in self.numbers:		
				self.numbers[elem] = 1
				self.array.append((elem,my_sum))
			
	def get_result(self):
		for elem in self.array:
			print "elem:", elem[0], "sum:", elem[1]


if __name__ == "__main__":
	import pdb
	array_len  = int(raw_input("please input array len"))
	my_array = list()
	for i in xrange(array_len):
		my_array.append(int(raw_input("")))

	pdb.set_trace()
	my_array = MyArray(my_array)

	my_array.get_result()
		
