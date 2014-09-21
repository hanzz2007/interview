#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include "link.h"

const int LENGTH = 10;
const int MAX = 30;
/*

question:
	Given a circular linked list, implement an algorithm which returns node at the
begining of the loop.
example input a->b->c->d->e->c(c is the same of the previous c)
	output c
	
solution:
	put each node address into a hash table(i think maybe two node value are same but they are not
	idential so, i put their address into hash table.then go through the link, chech each node in the hash table )
*/

//int main(){
//	 Init();
//	 char *charArray[LENGTH];
//	 for(uint i = 0; i < LENGTH; ++i){
//		 charArray[i] = (char *)malloc(sizeof(char) * MAX);
//		 if(!charArray[i]){
//			 return -1;
//		 }
//		 printf("��������%d����\n", LENGTH-i-1);
//		 gets(charArray[i]);
//		 AppendNode(charArray[i]);
//	 }
//	 int circlePos = 0;
//	 printf("������ѭ������λ��\n");
//	 scanf("%d", &circlePos);
//
//	 //�����������Ҳ���
//	 NODE * pLastNode = GetLast();
//	 if(!pLastNode){
//		 return -1;
//	 }
//	 NODE* pCircleNode = GetNodeByPos(circlePos);
//	 if(!pCircleNode){
//		 return -1;
//	 }
//	 pLastNode->pNext = pCircleNode;
//
//	 NODE * p = GetCircleNode();
//	 if(p){
//		 printf("ѭ���ڵ�ֵΪ:%s\n", p->data);
//	 }
//	return 0;
//}
