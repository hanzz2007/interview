#pragma once
typedef int DATA;
typedef unsigned int uint;

void InitHeap(DATA dataArray[], uint length);
void AdjastHeap(DATA dataArray[], uint length, uint startPos);
void UpdateHeap(DATA dataArray[], uint length);
void MySwap(DATA &first, DATA &second);
//uint getMinData(DATA dataArray[], uint length, DATA &data);