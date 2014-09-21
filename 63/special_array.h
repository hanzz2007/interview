#pragma once
#include <vector>
 
typedef unsigned int uint;
typedef int DATA;

bool CheckSetAvail(std::vector<DATA> &myArray, uint pos, DATA data);
void ResetArray(std::vector<DATA> &myArray, uint pos, DATA data);
bool ArrayFull(std::vector<DATA> &myArray);
bool SetData(std::vector<DATA>  &myArray, const std::vector<uint> &availArray, uint pos);