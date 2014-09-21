#include "link.h"
#include "hash.h"
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
	pNode->hashVal = CalHash(data);
	pNode->pNext = gHeadNode.pNext;
	gHeadNode.pNext = pNode;
	gLinkLength++;
	return true;
}


NODE * GetNodeByVal(char *data){
	NODE * p = gHeadNode.pNext;
	for(uint i = 1; i <= gLinkLength; ++i){
		if(!strcmp(data, p->data)){
			return p;
		}
		p = p->pNext;
	}
	return NULL;
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

NODE* GetCircleNode(){
	NODE * p = gHeadNode.pNext;
	for(uint i = 1; i <= gLinkLength; ++i){
		AddElem(p, p->hashVal);
		if(p->pNext && CheckNode(p->pNext, p->pNext->hashVal)){
			Destroy();
			return p->pNext;
		}
		p = p->pNext;
	}

	Destroy();
	return NULL;

}

NODE * GetLast(){
	NODE * p = &gHeadNode;
	for(uint i = 0 ; i < gLinkLength; ++i){
		p = p->pNext;
	}
	return p;
}