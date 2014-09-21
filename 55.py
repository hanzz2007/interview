"""
	print the following data
	(a),(b),(c),(d),(e)........(z)
	(a,b),(a,c),(a,d),(a,e)......(a,z),(b,c),(b,d).....(b,z),(c,d).....(y,z)
	(a,b,c),(a,b,d)....(a,b,z),(a,c,d)....(x,y,z)
	....
	(a,b,c,d,.....x,y,z)
	problem of wangyi
"""

g_alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

def print_result(result_list):
	with open("output","w+") as my_output:
		for elem in result_list:
			for i in elem:
				my_output.write(g_alphabet[i]+" ")
			my_output.write("\n")
			

def inc_unit(my_unit):
	def my_inc(temp_unit, my_unit, cur_pos):
		if temp_unit[cur_pos] + 1 <= my_unit[cur_pos]:
			temp_unit[cur_pos] += 1
			for i in xrange(cur_pos+1, len(temp_unit)):
				temp_unit[i] = temp_unit[cur_pos] + i - cur_pos
			return 
		if cur_pos == 0:
			return
		my_inc(temp_unit, my_unit, cur_pos-1) 

	result_list = []
	temp_unit = [i for i in xrange(len(my_unit))]
	result_list.append(temp_unit[:])
	#result_list.append(my_unit[:])
	while temp_unit !=  my_unit:
		cur_pos = len(my_unit)-1
		my_inc(temp_unit, my_unit, cur_pos)
		result_list.append(temp_unit[:])
	print_result(result_list)
	return result_list

def main():
	import pdb
	pdb.set_trace()
	for i in xrange(1, len(g_alphabet)):
	#each unit length
		my_unit = []
		for j in xrange(0,i):
		#init the unit
			my_unit.insert(0,len(g_alphabet)-j-1)
		inc_unit(my_unit)

if __name__ == "__main__":
	main()
