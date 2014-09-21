#include <iostream>
#include "special_array.h"

using namespace std;
/*
 *
*question:
	write a program to give an array such that: 
	1. the data value is from 1 to n 
	2. the length of it is 2*n 
	3. the two elements with same value keep the same number distance. 
	for example, when n = 3, the length of array is 6, the array should be like:
	2, 3, 1, 2, 1, 3.
	there are two elements between "2" pair, and three elements between "3" pair and one element between "1" pair
  my solution:
    repeat check each position with 0~n data,if this position is available with data i then check the next position,else reset 
	this position.
	if the data array are full ,return ture.
 */
//int main(){
//	uint n;
//	cin >> n;
//	std::vector<DATA> myArray;
//	std::vector<uint> availArray;
//
//	for(uint i = 0; i < n; ++i){
//		availArray.push_back(i+1);
//	}
//	for(uint i = 0; i < 2*n; ++i){
//		myArray.push_back(-1);
//	}
//
//	SetData(myArray, availArray, 0);
//	for(uint i = 0; i < myArray.size(); ++i){
//		cout << i <<"  "<< myArray[i];
//	}
//	return 0;
//}