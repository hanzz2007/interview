1:
	�����������У��ҳ��������ֵĳ��ִ�������  [1, 2, 2, 2, 3]  �� 2 �ĳ��ִ����� 3 �Ρ�

2:
	һ���������У�Ԫ��ȡֵ������ 0~65535 �е�����һ��������ͬ��ֵ�����ظ����֡�0 �����⣬���Է������֡�
	�����һ���㷨������Ӹ�����������ѡȡ5����ֵ���ж���5����ֵ�Ƿ��������ڡ�
	ע�⣺
	- 5 ����ֵ����������ġ����磺8 7 5 0 6
	- 0 ����ͨ��������ֵ�����磺8 7 5 0 6 �е� 0 ����ͨ��� 9 ���� 4
	- 0 ���Զ�γ��֡�
	-  ���Ӷ������ O(n2)�򲻵÷�

3:
	һ���������У�Ԫ��ȡֵ������ 1~N ��N ��һ���ϴ�����������е�����һ��������ͬ��ֵ�����ظ����֡�
	���һ���㷨���ҳ������з������������Եĸ��������������������ĺ͵��� N+1��
	���Ӷ������ O(n)������� O(n2)�򲻵÷֡�

4:
	ʵ�����������ĳ�����Ҫ�����ó�������

5:
	һ���������������  f=(���ֵ+��Сֵ)/2�����һ���㷨���ҳ����� f ֵ��������� f ֵ�Ľ�㡣
	���Ӷ������ O(n2)�򲻵÷֡�

6:
	���������� Q �е�ÿ��Ԫ�ض������ܱ������� a �� b �е�һ���������ָ��� a �� b��
	��Ҫ����� Q �е�ǰ������磬�� a=3��b=5��N=6 ʱ������Ϊ 3��5��6��9��10��12
	(1)�����һ������ void generate��int a,int b,int N ,int * Q ������ Q ��ǰ����
	(2)����Ʋ�����������֤���������ڸ��������µ���ȷ�ԡ�

7:
	��һ���ɴ�Сд��ɵ��ַ�����������Ҫ���������޸ģ������е�����Сд��ĸ����
	��д��ĸ��ǰ�棨��д��Сд��ĸ֮�䲻Ҫ�󱣳�ԭ�����򣩣����п��ܾ���ѡ��ʱ��Ϳ�
	��Ч�ʸߵ��㷨  c ���Ժ���ԭ�� void proc��char *str��  Ҳ���Բ������Լ���Ϥ������


8:
	Given a linked list, write a function to reverse every k nodes (where k is an input to the function).

	Example:
	Inputs:  1->2->3->4->5->6->7->8->NULL and k = 3 
	Output:  3->2->1->6->5->4->8->7->NULL. 

	Inputs:   1->2->3->4->5->6->7->80->NULL and k = 5
	Output:  5->4->3->2->1->8->7->6->NULL

9:
	��������һ��������ת��Ϊ4��36���Ƶ�λ��

10:
	Write a function to print spiral order traversal of a tree.

11:
	Write a function to connect all the adjacent nodes at the same level in a binary tree. Structure of the given Binary Tree 
	pNode is like following.

	struct pNode{
		int data;
		struct pNode* pLeft;
		struct pNode* pRight;
		struct pNode* pNextRight;  
	}
	Initially, all the pNextRight pointers point to garbage values. Your function should set these pointers to point next pRight for each pNode.

12:
	Given two lists sorted in increasing order, create and return a new list representing the intersection of the two lists. The new list should be made with its own memory �� the original lists should not be changed.
	For example, let the first linked list be 1->2->3->4->6 and second linked list be 2->4->6->8, then your function should create and return a third list as 2->4->6.                                                   

13:
	Given an expression string exp, write a program to examine whether the pairs and the orders of ��{��,��}��,��(��,��)��,��[","]�� are correct in exp. For example, the program should print true for exp = ��[()]{}{[()()]()}�� and false for exp = ��[(])"

14:
	Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n                                                           


15:
	To find if there is any root to leaf path with specified sum in a binary tree.

16:
	һ�����������ϣ�����Cʹ��C= A + B������A��B , C ���ڼ����У�Ҫ��֤C���

17:
	There is a binary tree of size N. All nodes are numbered between 1-N(inclusive).
	There is a N*N integer matrix Arr[N][N], all elements are initialized to zero.
	So for all the nodes A and B, put Arr[A][B] = 1 if A is an ancestor of B (NOT just the immediate ancestor).

18:
	Size() function recursively calculates the size of a tree.write a function to calculate the size of a tree

19:
	Two trees are identical when they have same data and arrangement of data is also same.write a fucntion to check if two trees are indetical

20:
	Write a C Program to Find the Maximum Depth or Height of a Tree
21:
	Write a C program to Delete a Tree 
22:
	Write an Efficient Function to Convert a Binary Tree into its Mirror Tree
23:
	If you are given two traversal sequences, can you construct the binary tree?
	����������������������
24:
	Given a binary tree, print out all of its root-to-leaf paths one per line.
	
25:
	Given root of binary search tree and K as input, find K-th smallest element in BST

26:
	Question: Given a binary tree, find out if the tree can be folded or not.

	A tree can be folded if left and right subtrees of the tree are structure wise mirror image of each other. An empty tree is considered as foldable.
27��
	��O(n)���㷨��ʵ�ֶ�һ���������ĸ���д�С��������(���ִ�Сд)����ͬ����ĸ��Сд�ڴ�дǰ    

28:
	Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest.

	Examples:

	Input:  arr[] = {10, 5, 3, 4, 3, 5, 6}
	Output: 5 [5 is the first element that repeats]

	Input:  arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
	Output: 6 [6 is the first element that repeats]

29:
	Given an array of n distinct integers sorted in ascending order, write a function that returns a Fixed Point in the array, if there is any Fixed Point present in array, else returns -1. Fixed Point in an array is an index i such that arr[i] is equal to i. Note that integers in array can be negative.
	Examples:
	Input: arr[] = {-10, -5, 0, 3, 7}
	Output: 3  // arr[3] == 3 

	Input: arr[] = {0, 2, 5, 8, 17}
	Output: 0  // arr[0] == 0 


	Input: arr[] = {-10, -5, 3, 4, 7, 9}
	Output: -1  // No Fixed Point


30:
	Given an array, print the Next Greater Element (NGE) for every element. 
	The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.

31:
	Given an unsorted array and a number n, find if there exists a pair of elements in the array whose difference is n.

	Examples:
	Input: arr[] = {5, 20, 3, 2, 50, 80}, n = 78
	Output: Pair Found: (2, 80)

	Input: arr[] = {90, 70, 20, 80, 50}, n = 45
	Output: No Such Pair

32:
	��һ��������һ���Ƕ���������n���ڵ㣬����Ϊ0 - n-1.��һ������A������Ĵ�СΪn�������ֵA[i]��ʾ�ڵ�i�ĸ��ڵ��id�����ڵ�ĸ��ڵ�idΪ-1
	��������A�������ĸ߶ȡ�

33:
	Before advent of QWERTY keyboards, texts and numbers were placed on the same key. 
	For example 2 has ��ABC�� if we wanted to write anything starting with ��A�� we need to type key 2 once. If we wanted to type ��B��, press key 2 twice and thrice for typing ��C��. 
	question:input a digital array output all posibile string

34��
	Search for an element in an array which has elements who��s values are first increasing and then decreasing. (Use modified binary search)
35:
	5��=5*4*3*2*1 = 120������1��0�����ʶ���100���������ٸ�0��
	
36:
	SUM OF PREVIOUS SMALLER NUMBERS IN ARRAY efficiently. For every given element in the array you should return the sum of previous smaller values you encountered in the array . example : arr = {2, 5,1,9, 3} 
	for a[0] i.e. 2 , sum = 0, a[1] i.e. 5, sum = 2, similarly for a[4], i.e. 3 , sum = 2+1 = 3.
	
37:
	 write a method to replace all spaces in a string with '%20' 
	 
38:
     Implement an algorithm to determine if a string has all unique characters. What is you can noy use addtional data structure?
	 
39:
		Write a business_days_from_now() method, which takes as an input a number of business days, and returns a Date object which is that many business days from now. For this, a business day is only a weekday and not a weekend. 

		for example: 

			Today is Wednesday the 8th. 
			business_days_from_now(5) 

			Current Date: Jan 8, 2013 Wednesday 

			Output: 
			Wednesday the 15th

40:
	There is an array {1,2,3,4,5,6,7,8} 
	Divide the array in two subarrays such that the difference between sum of the elements of individual subarrays is minimum. 

	lets say u divide the arrays in a1 and a2. 
	Then sum of elements of a1 - sum of elements of a2 should be minimum if u divide the array in other way possible.
	
41:
	question:
	Given a circular linked list, implement an algorithm which returns node at the begining of the loop.
	example input a->b->c->d->e->c(c is the same of the previous c)
		output c
		
42:
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
	
43:
	question:
      Implement an algorithm to find the nth less elem.
	  
44:
	Consider the array 3 5 7 6 3. 

	Return the pair of indices that forms the slice where the difference between the maximum and minimum in the slice <= 2. 

	Output: 
	(0,0) (1,1) (2,2) (3,3) (4,4) (5,5) 
	(0,1) (1,2) (1,3) (2,3) 

	Example slices: 3 5, 5 7, 1 3, 2 3.

	this is a google interview question.at here i have to express my respect to this great company, it takee me almost one day to finish it .

45:
	����һ������ѷ�������⣺
	Find if the given expression contains redundant parantheses. 
	ex :if expr = a+(b*c) , print false, if expr = a+((b*c)), print true.
	����Ŀ�п�ֻ������Ҫ���Ǳ��ʽ���ŵ����ȼ�����������ջ��stack_a,stack_b)���в�����
	
46:
	Assume you have a method is_sub which check if one word is a substring of another.Given two strings.s1 and s2.
    write code to check if s2 is a rotation of s1,my requestion is :you can only use call to is_sub.
    (ie:"waterbottle" is a rotation of "erbottlewat")
	
47:
	design a stack , in addition to push and pop,also has a function with return the minimum element.
 	 all function should finish in 0(1) time.
	 
48:
	 use two stack to implement a queue
	 
49:
	we have an array,find out a continuous subarray that all the number is non-decrease
	this is known as LIS problem

50:
	You are given a lot of cuboid boxes with different length, breadth and height. You need to find the maximum subset which can fit into each other. 
	For example: 
	If Box A has LBH as 7 8 9 
	If Box B has LBH as 5 6 8 
	If Box C has LBH as 5 8 7 
	If Box D has LBH as 4 4 4 
	then answer is A,B,D 
	A box can fit into another only and only if all dimensions of that is less than the bigger box. Also Rotation of boxes is not possible.

51:
	����ʵ������A��B��ϣ����A��B�鲢Ϊһ����������C����C�����ظ�����
	
52:
	Give 2 arrays of size 7 and 3 which are sorted such that the last 3 blocks in first array are empty,
	merge the arrays in a sorted manner in the most efficient way. 
	E.g:- 
		a[7] = [4, 10, 11, 20__, __, __] 
		b[3] = [1,3,7]
		
53:
	��������ҳ����ɸ�����ʹ�������ɸ����ĺ���M��Ϊ�ӽ�������һ���㷨���������㷨�ĸ��Ӷ�
	
54:
	*give you two string ,you should see if first can change to second by one step.
	*the operation includes: insert, change, remove
	
55:
	print the following data
	(a),(b),(c),(d),(e)........(z)
	(a,b),(a,c),(a,d),(a,e)......(a,z),(b,c),(b,d).....(b,z),(c,d).....(y,z)
	(a,b,c),(a,b,d)....(a,b,z),(a,c,d)....(x,y,z)
	....
	(a,b,c,d,.....x,y,z)
	problem of wangyi
	
56:
	Print all paths of a binary tree from root to leaf. 
	Later, extend the solution to work with graphs, careful attention to cycles which you should print as paths as well (without printing visited nodes twice).
	
57:
	Assume that a binary tree is drawn over a Cartesian coordinate system (with X & Y axis) 
	where the leftmost node is placed at point (0,0). So, we need to traverse the nodes 
	and print in following manner: For e.g., for this tree 
	a 
	b c 
	d e f g 
	Output should be: 
	d,0,0 
	b,1,1 
	e,2,0 
	a,3,2 
	f,4,0 
	c,5,1 
	g,6,0
	
58:
	Given a number in an array form, Come up with an algorithm to push all the zeros to the end.
	Expectation : O(n) solution
	
59:
	RGB����һ���ַ���������ֻ�������ַ�RGB�����е�R����G��ǰ�棬���е�G����B��ǰ�档
	�������ַ������մ˹�������Ҫ�������ø����ռ䣬���Ӷȿ�����O(N)������һ����ź���.
	
60:
	Implement an algorithm to delete a node in the middle of a single linked list, my constraint condition is :you can oly assess the given node
	
61:
	Write a function accepting a string with numbers and letters that reverses the letters of the string but leave numbers in the same position. 
	Example input: str1ngw1thnumb3rs 
	Example output: srb1mun1htwgn3rts
	
62:
	given an image represented by an N*N matrix, where each pixel in the image is 4 bytes.write an  method to rotate the image by 90 degrees.can you do this in place? rotate the image clockwise
	
63:
	question:
	write a program to give an array such that: 
	1. the data value is from 1 to n 
	2. the length of it is 2*n 
	3. the two elements with same value keep the same number distance. 
	for example, when n = 3, the length of array is 6, the array should be like:
	2, 3, 1, 2, 1, 3.
	there are two elements between "2" pair, and three elements between "3" pair and one element between "1" pair
	
64:
	question:
	Imagine a (literal) stack of plates. if the stack get too high, it might topple,therefore ,in real life, we would likely 
	start a new stack when the previous stack exceeds some threshold, Implement a data structure, SetOfStack the mimics this. 
	SetOfStacks should be composed of several stacks, and should create a new stack once the previous one exceed capacity. 
	SetOfStacks.push and SetOfStack.pop should behave identically to a single stack.
	what is more, you should implement a function popAt(int index). which performs a pop operation on a specific substack.
	
65:
	����һ���ֵ��������ò����ļ����в���    

66:
	һ�� url ָ���ҳ����������һ�� url,������һ�� url ָ��֮ǰ���ֹ��� url ��գ�����
	�����ζ�����Ϊ null����������һ�������������������������ж������Ƿ����ͬ
	���� url��url ���ڼ��ƣ���Դ������ hash��           
	
67:
	write an algorithm such that if an element in an M*M matrix is 0.its entire row and column is set to 0
	
68:
	������n����������a�����г���һ�������Ϊһ����ֵ���ڲ��������򣬲�����������������£������Ч���㷨�ҳ������
	����ԭ�ͣ�int find(int *a, int n)
	
69:
	ʵ�ֵ��������ת 
	
70:
	�õݹ�ߵ�һ��ջ����������ջ{1, 2, 3, 4, 5}��1 ��ջ����
	�ߵ�֮���ջΪ{5, 4, 3, 2, 1}��5 ����ջ����  
	
71:
	��һ����������ÿ���ڵ㶼����������������ҵ�һ�������������нڵ�ĺ����  

72:
	��������о�����Զ��������  
	
73:
	����һ�������飬��������ĳ���±�ֵ���Ԫ��ֵС��ĳ���±�ֵ����С��Ԫ��ֵ��������һ������
	�������� a[];  ���� i < j  ��  a[i] > a[j],�������һ������
	����һ�����飬Ҫ��дһ�������������������������з���ĸ�����
	
74:
	����һ�������ͷ��㣬��β��ͷ���������ÿ������ֵ    
	
75��
	����һ���ַ�����Ҫ��ԭ���Ƴ��ظ���ĸ   
	
76��
	 һ������������װ��n(1 �� n �� 65535)յ��ƣ���ͷ��β���1��2��3����n-1��n��ÿյ�����һ�����߿��ؿ��ơ���ʼ�����ȫ�����š�
	��n��ѧ���ӳ��ȴ�������һ��ѧ���Ѻ��뷲��1�ı����ĵ�ƵĿ�����һ�£����ŵڶ���ѧ���Ѻ��뷲��2�ı����ĵ�ƵĿ�����һ�£�����
	������ѧ���Ѻ��뷲��3�ı����ĵ�ƵĿ�����һ�£���˼�����ȥ������n��ѧ���Ѻ��뷲��n�ı����ĵ�ƵĿ�����һ�¡�n��ѧ�����˹�
	������󣬳��������м�յ���š�
	ע���������ѧ����һ�¡�
	���룺��Ƶ�����
	��������ŵĵ������   

77��
	дһ����·�鲢�����㷨   
	
78��
	���� al[0,mid-1]  ��  al[mid,num-1]�����ֱ����򡣽��� merge ���������� al[0,num-1]��
	Ҫ��ռ临�Ӷ� O(1)   

79��
	given a singly linked list L:(L0, L1, L2,...Ln),write a program to 
	reorder it so that it becomes:(L0,Ln,L1,Ln - 1,...)
	
80��
	����һ����������Ҫ�������й鲢����
	
81��
	��֪����A��B��Ԫ�طֱ��ò���ͷ���ĵ�����洢������difference()������⼯��A��B�Ĳ��
	������������ڼ���A�ĵ������С�
	���磬������A={5,10,20,15,25,30}������B={5,15,35,25}����ɼ����A={10,20,30}��*/
	
82��
	����һ������Ҫ��������һ���ظ�����
	���磺 {1��2��3��4��2��3��1},���1
	
83��
	����һ����n�����а���1��2��3��4��4�����֣�дһ�����������n��ĳ���仯������������n�е����֣���ʹ���ܹ���7����
	
84��
	��Ŀ������һ������ n��������к�Ϊ n �����������С�
	�������� 15������ 1+2+3+4+5=4+5+6=7+8=15��������� 3 ���������� 1-5�� 4- 6 �� 7-8��
	
85��
	����һ��int���飬ͨ���任ʹ�����ȫΪ�����ұ�ȫΪż��  
	
86��
	����һ������input[] ��������鳤��nΪ������������������Ԫ�طŵ� output[] �������м��λ�ã�
	������鳤��nΪż����������������Ԫ�طŵ� output[] �����м�����λ��ƫ�ҵ��Ǹ�λ���ϣ�Ȼ���ٰ��Ӵ�С��˳��
	�����ڵ�һ��λ�õ����ߣ�����һ��һ�ҵ�˳�����δ��ʣ�µ�����
	���磺
	input[] = {3, 6, 1, 9, 7}
	output[] = {3, 7, 9, 6, 1};
	input[] = {3, 6, 1, 9, 7, 8}
	output[] = {1, 6, 8, 9, 7, 3}
	�����ӿ�   void sort(int input[[, int n, int output[])              
	
87��
	��һ�� int  ������������������������ڵ��������������С�ڵ����Ҳ���������
	
88��
	��Ŀ����һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת������һ��
    �ź���������һ����ת�������ת�������СԪ��   
	
89:
	�ҳ�������Ψһ���ظ�Ԫ�أ�1-1000���ں���1001��Ԫ�ص������У�ֻ��Ψһ��һ��Ԫ��ֵ�ظ���
	������ֻ����һ�Σ�ÿ������Ԫ��ֻ�ܷ���һ�Σ����һ���㷨�������ҳ��������ø����洢�ռ䣬�ܷ����һ���㷨ʵ�֣�
	
90:
	ɾ��ģʽ���г��ֵ��ַ����硰welcome  to  asted��,ģʽ��Ϊ��aeiou��
	��ô�õ����ַ���Ϊ��wlcm  t std"��Ҫ���������� 
	
91:
	��һ��int�����飬ÿ�������ڵ���֮��Ĳ�ֵ����1����-1.���ڸ���һ������Ҫ�����������������е�λ��
	
92:
	 һ���������У�Ԫ��ȡֵ������ 0~65535 �е�����һ��������ͬ��ֵ�����ظ����֡�
	0 �����⣬���Է������֡�
	�����һ���㷨������Ӹ�����������ѡȡ 5 ����ֵ���ж��� 5 ����ֵ�Ƿ��������ڡ�
	ע�⣺
		- 5 ����ֵ����������ġ����磺  8 7 5 0 6
		- 0 ����ͨ��������ֵ�����磺8 7 5 0 6  �е� 0 ����ͨ��� 9 ���� 4
		- 0 ���Զ�γ��֡�
		- ���Ӷ������ O(n2)�򲻵÷�     
		
93:
	��Ŀ������ n �����������������С�� k ������������ 1��2��3��4��5��6��7 �� 8 �� 8 �����֣�
	����С�� 4 ������Ϊ 1��2��3 �� 4��   
	
94:
	����һ�ö������������������ڵ�Ĺ�ͬ����  
	
95:
	��һ�����������Ķ��׾���(Ԫ�غ����).��:
	1 2 0 3 4
	2 3 4 5 1
	1 1 5 3 0
	��������:
	4 5
	5 3
	
96:
	��һ���Ѿ���������飨���򣩣������п�����������������0����������Ԫ�صľ���ֵ��С������
	Ҫ�󣬲�����˳��Ƚϵķ��������Ӷ���ҪС��O��n����   
	
97:
	��֪��ĸ���С�d, g, e, c, f, b, o, a������ʵ��һ��������������һ���ַ���
	input[] = {"bed", "dog", "dear", "eye"}��������ĸ˳�����򲢴�ӡ��
	���������˳��Ϊ��dear, dog, eye, bed
	
98:
	�������ų���С���������顢�㷨����
	��Ŀ������һ�����������飬���������������ų�һ������������ų���������������С��һ����
	������������{32,   321}����������������ųɵ���С���� 32132��
	��������������㷨����֤�����㷨��  
	
99:
	����һ��һ�̵������ַ���A, B.����A��B�̣����ڣ�Ҫ���ж�B�Ƿ�������ַ���A�У������ִ�Сд��
	�������㷨����Ƹ��ӶȺʹ洢���Ӷ�
	�磺��������������ַ�����string A��ABCDEFGHLMNOPQRS  string B:DCGSRQPOM.
	�ش���true����Ϊstring B�������ĸstringAȫ����
	
100��
	�ַ������������㡣����һ���ַ���������0~9�����ֺ� + - * /()���������-��������Ų����������������£�
	���룺1+2*(3-4)
	�����-1.     
	
101��
	���ַ����硰ABCD, AABCD, XB, BCAD, DOT, TDO, ZZZ, ABCDA, BCDAA, BDCA,
	Ҫ����������ͬ�ַ���ɵĴʹ���һ�����û�к�������ͬ�ַ���ɵĴ��򻮵����������ߵĽ�����£�
	��1��ABCD, BCAD, BDCA ��2��AABCD, ABCDA, BCDAA ��3��DOT,TDO
	
102��
	��д������ԭ�ַ����а�β��m���ַ��ƶ����ַ�����ͷ��.
	Ҫ�󣺳���Ϊn�ַ�������ʱ�临�Ӷ�ΪO(n),�ռ临�Ӷ�ΪO(1)��
	�磺ԭ�ַ���Ϊ��Ilovebaofeng����m=7������������baofengIlove����  
	
103��
	�����ַ���A��B����A���޳�������B�е��ַ�������A=��hello world��,B="er"��
	��ô�޳�֮��A��Ϊ"hllowold"���ռ临�Ӷ�Ҫ����O(1)��ʱ�临�Ӷ�Խ��Խ��
	
104��
	дһ������,����ԭ���� int continumax(char *outputstr,char *intputstr)
	���ܣ�
	���ַ������ҳ�����������ִ�������������ĳ��ȷ��أ�
	�����������ִ���������һ���������� outputstr ��ָ�ڴ档
	���磺"abcd12345ed125ss123456789" ���׵�ַ���� intputstr �󣬺��������� 9�� 
	outputstr ��ָ��ֵΪ 123456789   
	
105��
	ͨ����������һ��Сд��ĸ(a~z)��ɵ��ַ��������дһ���ַ���ѹ�����򣬽��ַ�����������ϯ���ظ���ĸ����ѹ���������ѹ�������
	������
	ѹ������
	1����ѹ�������ظ����ֵ��ַ��������ַ���"abcbc"�����������ظ��ַ���ѹ������ַ�������"abcbc"��
	2��ѹ���ֶεĸ�ʽΪ"�ַ��ظ��Ĵ���+�ַ�"�����磺�ַ���"xxxyyyyyyz"ѹ����ͳ�Ϊ"3x6yz"��
	Ҫ��ʵ�ֺ����� 
	void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr);
	����pInputStr�� 
	�����ַ���lInputLen��  �����ַ�������
	��� pOutputStr��  ����ַ������ռ��Ѿ����ٺã��������ַ����ȳ���
	ע�⣺ֻ��Ҫ��ɸú��������㷨���м䲻��Ҫ���κ�IO���������
	ʾ�� 
	���룺��cccddecc��   �������3c2de2c��
	���룺��adef��     �������adef��
	���룺��pppppppp�� �������8p��  
	
106��
	�ַ����ƶ����ַ���Ϊ*�ź� 26 ����ĸ��������ϣ���*�Ŷ��ƶ�������࣬��
	��ĸ�Ƶ����Ҳಢ�������˳�򲻱䣩��Ҫ��ʱ��Ϳռ临�Ӷ���С
	
107��
	�����ַ������Լ�һ���ֵ䣬�ж��ַ����ܷ���Ϊ�ֵ��ź�ĵ��ʣ����磺
	�ֵ�Ϊ��{hello, world}, �ַ���Ϊhellohelloworld,����Բ��Ϊhello, hello, world
	
108��
	����һ���ַ�����������ַ����жԳƵ����ַ�������󳤶ȡ�
	���������ַ�����google�������ڸ��ַ�������ĶԳ����ַ����ǡ�goog���������� 4��
	���������ܺܶ��˶�д���ж�һ���ַ����ǲ��ǶԳƵĺ����������Ŀ���Կ����Ǹú�����
	��ǿ�档   
	
109��
	һ���ַ����飬������ַ�������a-z��A-Z��0-9.����Ҫ��������������Ҫ��
	* ����Сд�ַ�������ǰ�棬
	* ���д�д�ַ������м䣬
	* �������ַ�����󣬶��Ҹ������ڲ��ֱ�����
	
110��
	��26 ��Сд��ĸ��ɵ��ַ���str����str �в����������ͬ�ַ��������Ӵ����� abcacfrar��Ϊacfr