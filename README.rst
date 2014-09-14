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
	Write a function to connect all the adjacent nodes at the same level in a binary tree. Structure of the given Binary Tree node is like following.

	struct node{
		int data;
		struct node* pLeft;
		struct node* pRight;
		struct node* pNextRight;  
	}
	Initially, all the pNextRight pointers point to garbage values. Your function should set these pointers to point next pRight for each node.

	Example

	Input Tree
	A
	/ \
	B   C
	/ \   \
	D   E   F


	Output Tree
	A--->NULL
	/ \
	B-->C-->NULL
	/ \   \
	D-->E-->F-->NULL

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