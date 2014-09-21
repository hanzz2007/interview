#ifndef MYLINK
#define MYLINK
#include <stdio.h>
typedef unsigned int uint;

typedef struct NODE{
	char * data;
	uint hashVal;
	struct NODE * pNext;
}NODE, *NODEP;

static NODE gHeadNode; 
static uint gLinkLength;

void Init();
bool AppendNode(char * data);
NODE * GetLast();
NODE* GetCircleNode();
NODE *GetNodeByPos(uint pos);
NODE * GetNodeByVal(char *data);


#endif