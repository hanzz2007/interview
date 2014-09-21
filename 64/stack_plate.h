#pragma once
#include <vector>

typedef int DATA;
typedef unsigned int uint;
typedef std::vector<DATA> * STACK_POINT;

class StackPlate{
public:
	StackPlate(uint maxNum);
	void PushData(DATA data);
	DATA PopData();
	bool StackPlate :: PopAtIndex(DATA &data, uint index);
	void PrintData();
private:
	std::vector< STACK_POINT > stackPlate;
	uint maxNum;
};