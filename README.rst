1:
	在排序数组中，找出给定数字的出现次数比如  [1, 2, 2, 2, 3]  中 2 的出现次数是 3 次。

2:
	一个整数数列，元素取值可能是 0~65535 中的任意一个数，相同数值不会重复出现。0 是例外，可以反复出现。
	请设计一个算法，当你从该数列中随意选取5个数值，判断这5个数值是否连续相邻。
	注意：
	- 5 个数值允许是乱序的。比如：8 7 5 0 6
	- 0 可以通配任意数值。比如：8 7 5 0 6 中的 0 可以通配成 9 或者 4
	- 0 可以多次出现。
	-  复杂度如果是 O(n2)则不得分

3:
	一个整数数列，元素取值可能是 1~N （N 是一个较大的正整数）中的任意一个数，相同数值不会重复出现。
	设计一个算法，找出数列中符合条件的数对的个数，满足数对中两数的和等于 N+1。
	复杂度最好是 O(n)，如果是 O(n2)则不得分。

4:
	实现两个整数的除法，要求不能用除法符号

5:
	一棵排序二叉树，令  f=(最大值+最小值)/2，设计一个算法，找出距离 f 值最近、大于 f 值的结点。
	复杂度如果是 O(n2)则不得分。

6:
	正整数序列 Q 中的每个元素都至少能被正整数 a 和 b 中的一个整除，现给定 a 和 b，
	需要计算出 Q 中的前几项，例如，当 a=3，b=5，N=6 时，序列为 3，5，6，9，10，12
	(1)、设计一个函数 void generate（int a,int b,int N ,int * Q ）计算 Q 的前几项
	(2)、设计测试数据来验证函数程序在各种输入下的正确性。

7:
	有一个由大小写组成的字符串，现在需要对他进行修改，将其中的所有小写字母排在
	大写字母的前面（大写或小写字母之间不要求保持原来次序），如有可能尽量选择时间和空
	间效率高的算法  c 语言函数原型 void proc（char *str）  也可以采用你自己熟悉的语言


8:
	Given a linked list, write a function to reverse every k nodes (where k is an input to the function).

	Example:
	Inputs:  1->2->3->4->5->6->7->8->NULL and k = 3 
	Output:  3->2->1->6->5->4->8->7->NULL. 

	Inputs:   1->2->3->4->5->6->7->80->NULL and k = 5
	Output:  5->4->3->2->1->8->7->6->NULL

9:
	给定任意一个整数，转换为4个36进制的位数

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
	Given two lists sorted in increasing order, create and return a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed.
	For example, let the first linked list be 1->2->3->4->6 and second linked list be 2->4->6->8, then your function should create and return a third list as 2->4->6.                                                   

13:
	Given an expression string exp, write a program to examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[","]” are correct in exp. For example, the program should print true for exp = “[()]{}{[()()]()}” and false for exp = “[(])"

14:
	Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n                                                           


15:
	To find if there is any root to leaf path with specified sum in a binary tree.

16:
	一个正整数集合，求数C使得C= A + B，而且A，B , C 均在集合中，要保证C最大

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
	给你中序和先序，求出二叉树
24:
	Given a binary tree, print out all of its root-to-leaf paths one per line.
	
25:
	Given root of binary search tree and K as input, find K-th smallest element in BST

26:
	Question: Given a binary tree, find out if the tree can be folded or not.

	A tree can be folded if left and right subtrees of the tree are structure wise mirror image of each other. An empty tree is considered as foldable.
27：
	用O(n)的算法，实现对一组无序的字母进行从小到大排序(区分大小写)，相同的字母，小写在大写前    

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
	有一棵树，不一定是二叉树。有n个节点，其编号为0 - n-1.有一个数组A，数组的大小为n。数组的值A[i]表示节点i的父节点的id。根节点的父节点id为-1
	给定数组A，求树的高度。

33:
	Before advent of QWERTY keyboards, texts and numbers were placed on the same key. 
	For example 2 has “ABC” if we wanted to write anything starting with ‘A’ we need to type key 2 once. If we wanted to type ‘B’, press key 2 twice and thrice for typing ‘C’. 
	question:input a digital array output all posibile string

34：
	Search for an element in an array which has elements who’s values are first increasing and then decreasing. (Use modified binary search)
35:
	5！=5*4*3*2*1 = 120，包含1个0，请问对于100！包含多少个0？
	
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
	这是一道亚马逊的面试题：
	Find if the given expression contains redundant parantheses. 
	ex :if expr = a+(b*c) , print false, if expr = a+((b*c)), print true.
	从题目中可只。不需要考虑表达式符号的优先级。考虑两个栈（stack_a,stack_b)进行操作。
	
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
	现有实数数组A和B，希望将A和B归并为一个有序数组C，且C中无重复的数
	
52:
	Give 2 arrays of size 7 and 3 which are sorted such that the last 3 blocks in first array are empty,
	merge the arrays in a sorted manner in the most efficient way. 
	E.g:- 
		a[7] = [4, 10, 11, 20__, __, __] 
		b[3] = [1,3,7]
		
53:
	从数组从找出若干个数，使得这若干个数的和与M最为接近，描述一个算法，并给出算法的复杂度
	
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
	RGB排序，一个字符串，里面只有三种字符RGB，所有的R都在G的前面，所有的G都在B的前面。
	将给定字符串按照此规律排序。要求不允许用辅助空间，复杂度控制在O(N)。遍历一遍就排好序.
	
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
	构造一颗字典树。并用测试文件进行测试    

66:
	一个 url 指向的页面里面有另一个 url,最终有一个 url 指向之前出现过的 url 或空，这两
	种情形都定义为 null。这样构成一个单链表。给两条这样单链表，判断里面是否存在同
	样的 url。url 以亿级计，资源不足以 hash。           
	
67:
	write an algorithm such that if an element in an M*M matrix is 0.its entire row and column is set to 0
	
68:
	给定有n个数的数组a，其中超过一半的数字为一个定值，在不进行排序，不开设额外数组的情况下，以最高效的算法找出这个数
	函数原型：int find(int *a, int n)
	
69:
	实现单链表的逆转 
	
70:
	用递归颠倒一个栈。例如输入栈{1, 2, 3, 4, 5}，1 在栈顶。
	颠倒之后的栈为{5, 4, 3, 2, 1}，5 处在栈顶。  
	
71:
	给一个二叉树，每个节点都是正或负整数，如何找到一个子树，它所有节点的和最大？  

72:
	求二叉树中距离最远的两个点  
	
73:
	给定一整型数组，若数组中某个下标值大的元素值小于某个下标值比它小的元素值，称这是一个反序。
	即：数组 a[];  对于 i < j  且  a[i] > a[j],则称这是一个反序。
	给定一个数组，要求写一个函数，计算出这个数组里所有反序的个数。
	
74:
	输入一个链表的头结点，从尾到头反过来输出每个结点的值    
	
75：
	给定一个字符串，要求原地移除重复字母   
	
76：
	 一条长廊里依次装有n(1 ≤ n ≤ 65535)盏电灯，从头到尾编号1、2、3、…n-1、n。每盏电灯由一个拉线开关控制。开始，电灯全部关着。
	有n个学生从长廊穿过。第一个学生把号码凡是1的倍数的电灯的开关拉一下；接着第二个学生把号码凡是2的倍数的电灯的开关拉一下；接着
	第三个学生把号码凡是3的倍数的电灯的开关拉一下；如此继续下去，最后第n个学生把号码凡是n的倍数的电灯的开关拉一下。n个学生按此规
	定走完后，长廊里电灯有几盏亮着。
	注：电灯数和学生数一致。
	输入：电灯的数量
	输出：亮着的电灯数量   

77：
	写一个二路归并排序算法   
	
78：
	数组 al[0,mid-1]  和  al[mid,num-1]，都分别有序。将其 merge 成有序数组 al[0,num-1]，
	要求空间复杂度 O(1)   

79：
	given a singly linked list L:(L0, L1, L2,...Ln),write a program to 
	reorder it so that it becomes:(L0,Ln,L1,Ln - 1,...)
	
80：
	给定一个无序链表，要求对其进行归并排序。
	
81：
	已知集合A和B的元素分别用不含头结点的单链表存储，函数difference()用于求解集合A与B的差集，
	并将结果保存在集合A的单链表中。
	例如，若集合A={5,10,20,15,25,30}，集合B={5,15,35,25}，完成计算后A={10,20,30}。*/
	
82：
	给定一组数，要求输出最后一个重复的数
	例如： {1，2，3，4，2，3，1},输出1
	
83：
	给出一个数n，其中包含1，2，3，4这4个数字，写一个函数，输出n的某个变化数（重新排列n中的数字），使它能够被7整除
	
84：
	题目：输入一个正数 n，输出所有和为 n 连续正数序列。
	例如输入 15，由于 1+2+3+4+5=4+5+6=7+8=15，所以输出 3 个连续序列 1-5、 4- 6 和 7-8。
	
85：
	给出一个int数组，通过变换使得左边全为奇数右边全为偶数  
	
86：
	给定一个数组input[] ，如果数组长度n为奇数，则将数组中最大的元素放到 output[] 数组最中间的位置，
	如果数组长度n为偶数，则将数组中最大的元素放到 output[] 数组中间两个位置偏右的那个位置上，然后再按从大到小的顺序，
	依次在第一个位置的两边，按照一左一右的顺序，依次存放剩下的数。
	例如：
	input[] = {3, 6, 1, 9, 7}
	output[] = {3, 7, 9, 6, 1};
	input[] = {3, 6, 1, 9, 7, 8}
	output[] = {1, 6, 8, 9, 7, 3}
	函数接口   void sort(int input[[, int n, int output[])              
	
87：
	在一个 int  数组里查找这样的数，它大于等于左侧所有数，小于等于右侧所有数。
	
88：
	题目：把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。输入一个
    排好序的数组的一个旋转，输出旋转数组的最小元素   
	
89:
	找出数组中唯一的重复元素，1-1000放在含有1001个元素的数组中，只有唯一的一个元素值重复，
	其它均只出现一次．每个数组元素只能访问一次，设计一个算法，将它找出来；不用辅助存储空间，能否设计一个算法实现？
	
90:
	删除模式串中出现的字符，如“welcome  to  asted”,模式串为“aeiou”
	那么得到的字符串为“wlcm  t std"，要求性能最优 
	
91:
	有一个int型数组，每两个相邻的数之间的差值不是1就是-1.现在给定一个数，要求查找这个数在数组中的位置
	
92:
	 一个整数数列，元素取值可能是 0~65535 中的任意一个数，相同数值不会重复出现。
	0 是例外，可以反复出现。
	请设计一个算法，当你从该数列中随意选取 5 个数值，判断这 5 个数值是否连续相邻。
	注意：
		- 5 个数值允许是乱序的。比如：  8 7 5 0 6
		- 0 可以通配任意数值。比如：8 7 5 0 6  中的 0 可以通配成 9 或者 4
		- 0 可以多次出现。
		- 复杂度如果是 O(n2)则不得分     
		
93:
	题目：输入 n 个整数，输出其中最小的 k 个。例如输入 1，2，3，4，5，6，7 和 8 这 8 个数字，
	则最小的 4 个数字为 1，2，3 和 4。   
	
94:
	给定一棵二叉树。求树中两个节点的共同祖先  
	
95:
	求一个矩阵中最大的二阶矩阵(元素和最大).如:
	1 2 0 3 4
	2 3 4 5 1
	1 1 5 3 0
	中最大的是:
	4 5
	5 3
	
96:
	有一个已经排序的数组（升序），数组中可能有正数、负数或0，求数组中元素的绝对值最小的数，
	要求，不能用顺序比较的方法（复杂度需要小于O（n））   
	
97:
	已知字母序列【d, g, e, c, f, b, o, a】，请实现一个函数针对输入的一组字符串
	input[] = {"bed", "dog", "dear", "eye"}，按照字母顺序排序并打印。
	本例的输出顺序为：dear, dog, eye, bed
	
98:
	把数组排成最小的数（数组、算法）。
	题目：输入一个正整数数组，将它们连接起来排成一个数，输出能排出的所有数字中最小的一个。
	例如输入数组{32,   321}，则输出这两个能排成的最小数字 32132。
	请给出解决问题的算法，并证明该算法。  
	
99:
	给定一长一短的两个字符串A, B.假设A长B短，现在，要你判断B是否包含在字符串A中（不区分大小写）
	并给出算法的设计复杂度和存储复杂度
	如：如果是下面两个字符串：string A：ABCDEFGHLMNOPQRS  string B:DCGSRQPOM.
	回答是true，因为string B里面的字母stringA全都有
	
100：
	字符串的四则运算。给出一个字符串，包含0~9的数字和 + - * /()的运算符，-仅代表减号不代表负数。举例如下：
	输入：1+2*(3-4)
	输出：-1.     
	
101：
	有字符串如“ABCD, AABCD, XB, BCAD, DOT, TDO, ZZZ, ABCDA, BCDAA, BDCA,
	要将其中由相同字符组成的词归在一起。如果没有和其他相同字符组成的词则划掉，比如上诉的结果如下：
	组1：ABCD, BCAD, BDCA 组2：AABCD, ABCDA, BCDAA 组3：DOT,TDO
	
102：
	编写程序，在原字符串中把尾部m个字符移动到字符串的头部.
	要求：长度为n字符串操作时间复杂度为O(n),空间复杂度为O(1)。
	如：原字符串为”Ilovebaofeng”，m=7，输出结果：”baofengIlove”。  
	
103：
	两个字符串A、B。从A中剔除存在于B中的字符。比如A=“hello world”,B="er"，
	那么剔除之后A变为"hllowold"。空间复杂度要求是O(1)，时间复杂度越优越好
	
104：
	写一个函数,它的原形是 int continumax(char *outputstr,char *intputstr)
	功能：
	在字符串中找出连续最长的数字串，并把这个串的长度返回，
	并把这个最长数字串付给其中一个函数参数 outputstr 所指内存。
	例如："abcd12345ed125ss123456789" 的首地址传给 intputstr 后，函数将返回 9， 
	outputstr 所指的值为 123456789   
	
105：
	通过键盘输入一串小写字母(a~z)组成的字符串。请编写一个字符串压缩程序，将字符串中连续出席的重复字母进行压缩，并输出压缩后的字
	符串。
	压缩规则：
	1、仅压缩连续重复出现的字符。比如字符串"abcbc"由于无连续重复字符，压缩后的字符串还是"abcbc"。
	2、压缩字段的格式为"字符重复的次数+字符"。例如：字符串"xxxyyyyyyz"压缩后就成为"3x6yz"。
	要求实现函数： 
	void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr);
	输入pInputStr： 
	输入字符串lInputLen：  输入字符串长度
	输出 pOutputStr：  输出字符串，空间已经开辟好，与输入字符串等长；
	注意：只需要完成该函数功能算法，中间不需要有任何IO的输入输出
	示例 
	输入：“cccddecc”   输出：“3c2de2c”
	输入：“adef”     输出：“adef”
	输入：“pppppppp” 输出：“8p”  
	
106：
	字符串移动（字符串为*号和 26 个字母的任意组合，把*号都移动到最左侧，把
	字母移到最右侧并保持相对顺序不变），要求时间和空间复杂度最小
	
107：
	给定字符串，以及一个字典，判断字符串能否拆分为字典张红的单词，例如：
	字典为：{hello, world}, 字符串为hellohelloworld,则可以拆分为hello, hello, world
	
108：
	输入一个字符串，输出该字符串中对称的子字符串的最大长度。
	比如输入字符串“google”，由于该字符串里最长的对称子字符串是“goog”，因此输出 4。
	分析：可能很多人都写过判断一个字符串是不是对称的函数，这个题目可以看成是该函数的
	加强版。   
	
109：
	一个字符数组，里面的字符可能是a-z、A-Z、0-9.现在要求对数组进行排序，要求
	* 所有小写字符放在最前面，
	* 所有大写字符放在中间，
	* 所有数字放在最后，而且各部分内部分别有序
	
110：
	由26 个小写字母组成的字符串str，在str 中查找最长不含相同字符的连续子串。如 abcacfrar，为acfr