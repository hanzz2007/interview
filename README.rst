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
	Write a function to connect all the adjacent nodes at the same level in a binary tree. Structure of the given Binary Tree pNode is like following.

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
