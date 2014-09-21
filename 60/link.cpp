#include "link.h"
#include <cstring>
#include <stdlib.h>

void Init(){
	gHeadNode.data = NULL;
	gHeadNode.pNext = NULL;
}

bool AppendNode(char * data){
	NODE * pNode = (NODE *)malloc(sizeof(NODE));
	if( !pNode ){
		return false;
	}
	pNode->data = data;
	pNode->pNext = gHeadNode.pNext;
	gHeadNode.pNext = pNode;
	gLinkLength++;
	return true;
}

 

NODE *GetNodeByPos(uint pos){
	NODE * p = &gHeadNode;
	if(pos >= gLinkLength){
		return NULL;
	}

	for(uint i = 0; i <= pos; ++i){
		p = p->pNext;
	}
	return p;
}

 

bool DelNodeByPos(uint pos){
	NODE * pDelNode  = GetNodeByPos(pos);
	if(!pDelNode){
		return false;
	}

	if(pDelNode->pNext == NULL){
		free(pDelNode);
		return true;
	}
	NODE * pTemp = pDelNode->pNext;
	*pDelNode = *(pDelNode->pNext);
	free(pTemp);
	return true;
}

void PrintNode(){
	for(uint i = 0; i < gLinkLength; ++i){
		NODE *p =  GetNodeByPos(i);
		if(!p){
			return;
		}
		printf("第 %d 个点的值为:   %s\n", i , p->data);
	}
}