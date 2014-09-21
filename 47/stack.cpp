#include <stdio.h>
#include "stack.h"

void Init(){
	gStack.clear();
}

bool PushData(DATA data){
	OBJ temp;
	temp.mData = data;
	if(gStack.empty()){
		temp.mNextMin = 0;
		gStack.push_back(temp);
		gMinIter = gStack.begin();
	}
	else{
		temp.mNextMin = gMinIter - gStack.begin();
		uint curIndex = gMinIter - gStack.begin();
		gStack.push_back(temp);
		gMinIter = gStack.begin() + curIndex;
		if(data < gMinIter->mData){
			gMinIter = gStack.end()-1;
		}
	}
	return true;
}

bool PopData(DATA &data){
	if(!gStack.empty()){
		OBJ temp;
		temp = gStack.back();
		data = temp.mData;
		gStack.pop_back();
		gMinIter = temp.mNextMin + gStack.begin();
		return true;
	}
	return false;
}

DATA GetMin(){
	if(!gStack.empty()){
		return gMinIter->mData;
	}
}

void PrintData(){
	for(uint i = 0; i < gStack.size(); ++i){
		printf("%d   ", gStack[i]);
		if(i % 7 == 0 && i != 0){
			printf("\n");
		}
	}
	printf("\n");
}