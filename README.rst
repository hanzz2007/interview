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