#pragma once
#include <vector>

typedef int DATA;
typedef unsigned int uint;

typedef struct OBJ{
	DATA mData;
	uint mNextMin;
}OBJ;

static std::vector<OBJ>  gStack;
static std::vector<OBJ> ::const_iterator gMinIter;

void Init();
bool PushData(DATA data);
bool PopData(DATA &data);
DATA GetMin();

void PrintData();