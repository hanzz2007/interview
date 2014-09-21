"""
	Write a function accepting a string with numbers and letters that reverses the letters of the string but leave numbers in the same position. 

	Example input: str1ngw1thnumb3rs 
	Example output: srb1mun1htwgn3rts
"""

class MyQueue(object):
	def __init__(self, my_str):
		self.queue = list(my_str)
		self.back_queue = []
		self.back_queue_len  = 0
		self.__handler()

	def __handler(self):
		"""	
		 we firstly get all non-digit words. put them into another list(back_queue)
		 with its postion.then replace the words in queue with position in back_queue
		"""


		for i in xrange(len(self.queue)):
			if not self.__check_digit(self.queue[i]):
				self.back_queue.append(i)

		self.back_queue_len = len(self.back_queue)-1

		for i in xrange(int(len(self.back_queue)/2)):
			self.__exchange(self.back_queue[i], self.back_queue[self.back_queue_len-i])

	def __exchange(self, index_a, index_b):
		temp = self.queue[index_a]
		self.queue[index_a] = self.queue[index_b]
		self.queue[index_b] = temp

	def __check_digit(self, elem):
		return elem in ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

	def get_result(self):
		return "".join(self.queue)

if __name__ == "__main__":
	#import pdb
	#pdb.set_trace()
	my_str = "ni2qadaefadf8d67a67da6d86a7ed7a87f89ea7f7a9f79ae79f8e79a87f345"
	print "before:",my_str
	my_queue = MyQueue(my_str)

	print "after:", my_queue.get_result()
