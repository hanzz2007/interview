#pragma once
//#include <iostream>
#include <list>
#include "heap.h"

void InitList(DATA dataArray[], uint length, std::list<DATA> &List);

bool GetData(const std::list<DATA> &List, uint pos, DATA &data);

void PrintList(const std::list<DATA> &List);
