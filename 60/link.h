#ifndef MYLINK
#define MYLINK
#include <stdio.h>
typedef unsigned int uint;

typedef struct NODE{
	char * data;
	struct NODE * pNext;
}NODE, *NODEP;

static NODE gHeadNode; 
static uint gLinkLength;

void Init();
bool AppendNode(char * data);
NODE *GetNodeByPos(uint pos);
bool DelNodeByPos(uint pos);
void PrintNode();

#endif