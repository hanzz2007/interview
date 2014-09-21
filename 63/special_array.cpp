#include <vector>
#include <algorithm>
#include "special_array.h"

bool CheckSetAvail(std::vector<DATA> &myArray, uint pos, DATA data){
	if(std::find(myArray.begin(), myArray.end(), data) == myArray.end()){
		if(pos + data +1 < myArray.size() && myArray[pos + data + 1] == -1){
			myArray[pos] = data;
			myArray[pos + data + 1] = data;
			return true;
		}
	}
	return false;
}
void ResetArray(std::vector<DATA> &myArray, uint pos, DATA data){
	myArray[pos] = -1;
	myArray[pos + data + 1] = -1;
}
bool ArrayFull(std::vector<DATA> &myArray){
	for(uint i = 0; i < myArray.size(); ++i){
		if(myArray[i] == -1){
			return false;
		}
	}
	return true;
}

bool SetData(std::vector<DATA>  &myArray, const std::vector<uint> &availArray, uint pos){
	if(myArray[pos] == -1){
		for(uint i = 0; i < availArray.size(); ++i){
			if(CheckSetAvail(myArray, pos, availArray[i])){
				if(ArrayFull(myArray)){
					return true;
				}
				if(!SetData(myArray, availArray, pos + 1)){
					ResetArray(myArray, pos, availArray[i]);
				}else{
					return true;
				}
			}
		}
		return false;
	}
	else{
		return SetData(myArray, availArray, pos + 1);
	}
}

