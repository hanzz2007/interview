#pragma once
#include <vector>

typedef int DATA;
typedef unsigned int uint;
typedef std::vector<DATA> STACK;
typedef std::vector<DATA> ::iterator STACKITER;

static STACK gStackA;
static STACK gStackB;
static STACKITER gStackIter;
 

void InitStack();
bool PushData(DATA data);
bool PopData(DATA &data);
static void MoveData(STACK &source, STACK &dest, STACKITER curIter);