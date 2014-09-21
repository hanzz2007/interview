#include "list.h"

void InitList(DATA dataArray[], uint length, std::list<DATA> &List){
	for(uint i = 0; i < length; ++i){
		List.push_back(dataArray[i]);
	}
}

bool GetData(const std::list<DATA> &List, uint pos, DATA &data){
	std::list<DATA>::const_iterator iter = List.begin();
	if(pos > List.size()){
		return false;
	}
	for(uint i = 0; i < pos ;++i){
		++iter;
	}
	data = *iter;
	return true;
}

void PrintList(const std::list<DATA> &List){
	std::list<DATA> :: const_iterator conIter = List.begin();
	printf("list data:\n");
	for(;conIter != List.end(); ++conIter){
		printf("%d\t", *conIter);
	}
	printf("\n");
}