#include "heap.h"

const uint MAX = 1000;


void MySwap(DATA &first, DATA &second){
	DATA temp = first;
	first = second;
	second = temp;
}
void AdjastHeap(DATA dataArray[], uint length, uint startPos){
	uint leftChild = startPos * 2 + 1;
	uint rightChild = startPos * 2 + 2;
	uint nonLeafNode = (int)length / 2 -1;
	uint maxNode = startPos;

	if(leftChild < length && dataArray[maxNode] <= dataArray[leftChild]){
		maxNode = leftChild;
	}
	if(rightChild < length && dataArray[maxNode] <= dataArray[rightChild]){
		maxNode = rightChild;
	}
	if(maxNode != startPos){
		MySwap(dataArray[startPos], dataArray[maxNode]);
	}

	if(leftChild <= nonLeafNode){
		AdjastHeap(dataArray, length, leftChild);
	}
	if(rightChild <= nonLeafNode){
		AdjastHeap(dataArray, length, rightChild);
	}
}

void InitHeap(DATA dataArray[], uint length){
	int startPos = (int)length / 2 - 1;
	for(int i = startPos ; i >= 0 ; --i){
		AdjastHeap(dataArray, length, i);
	}
}

void UpdateHeap(DATA dataArray[], uint length){
	InitHeap(dataArray, length);
}

/*
uint getMinData(DATA dataArray[], uint length, DATA &data){
	uint startPos = length / 2 - 1;
	data =dataArray[startPos];
	uint index = startPos;

	for(uint i = startPos ; i < length ; ++i){
		if(data > dataArray[i]){
			data = dataArray[i];
			index = i;
		}
	}
	return index;
}
}*/
