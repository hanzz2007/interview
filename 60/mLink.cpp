#include <stdio.h>
#include <stdlib.h>
#include "link.h"

const int LENGTH = 10;
const int MAX = 30;
/*
 * question:
 	 Implement an algorithm to delete a node in the middle of a single linked list, my constraint condition is :you can oly assess the given node
   solution:
     copy the node behind the given node to the given node.thus we do not need to know the pre node.
	 but in practise ,i do not supporse this method ,it cost too much timing consumption.
 */
//int main(){
//	Init();
//	char *charArray[LENGTH];
//
//	for(uint i = 0; i < LENGTH; ++i){
//		charArray[i] = (char *)malloc(sizeof(char) * MAX);
//		if(!charArray[i]){
//			return -1;
//		}
//		printf("请输入第%d数据\n", LENGTH-i-1);
//		gets(charArray[i]);
//		AppendNode(charArray[i]);
//	}
//
//
//	int delPos = 0;
//	printf("请输入删除点的位置\n");
//	scanf("%d", &delPos);
//
//	DelNodeByPos(delPos);
//	PrintNode();
//
//	return 0;
//}
