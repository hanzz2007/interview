#include <stdio.h>
#include <stdlib.h>
#include "stack_plate.h"


using namespace std;

 
StackPlate :: StackPlate(uint myMaxNum){
	maxNum = myMaxNum;
	stackPlate.push_back(new(vector<DATA>));
}

void StackPlate :: PushData(DATA data){
	STACK_POINT myStack = stackPlate.back();
	if(myStack->size() >= maxNum){
		stackPlate.push_back(new(vector<DATA>));
		myStack = stackPlate.back();
	}
	myStack->push_back(data);
}

DATA StackPlate :: PopData(){
	DATA data;
	if(PopAtIndex(data, stackPlate.size() - 1)){
		return data;
	}
	exit(-1);
}

bool StackPlate :: PopAtIndex(DATA &data, uint index){
	if(index < stackPlate.size()){
		STACK_POINT myStack = stackPlate.at(index);
		data = myStack->back();
		myStack->pop_back();
		if(myStack->empty()){
			delete(myStack);
			//stackPlate.pop_back();
			vector< STACK_POINT >::iterator stackIter = stackPlate.begin() + index;
			stackPlate.erase(stackIter);
		}
		return true;
	}
	return false;
}

void StackPlate :: PrintData(){
	for(uint i = 0; i < stackPlate.size(); ++i){
		printf("the %d stack data are:\n", i);
		STACK_POINT tempPoint = stackPlate[i];
		for(uint j = 0 ; j < tempPoint->size(); ++j){
			printf("%d  ", tempPoint->at(j));
		}
		printf("\n");
	}
}
 
 