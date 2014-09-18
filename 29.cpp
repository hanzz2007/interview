/************************************************************************/
/*
Given an array of n distinct integers sorted in ascending order, 
write a function that returns a Fixed Point in the array, if there is any Fixed Point present in array, else returns -1. Fixed Point in an array is an index i such that arr[i] is equal to i. Note that integers in array can be negative.

Examples:

Input: arr[] = {-10, -5, 0, 3, 7}
Output: 3  // arr[3] == 3 

Input: arr[] = {0, 2, 5, 8, 17}
Output: 0  // arr[0] == 0 


Input: arr[] = {-10, -5, 3, 4, 7, 9}
Output: -1  // No Fixed Point                                                                     */
/************************************************************************/

/************************************************************************/
/* 采用二分查找法，首先，根据特性，如果A[i] > i则特殊指针只能在前面，如果A[i] < i则特殊指针只能在后面，因此可以用二分进行收缩*/
/************************************************************************/
#include <vector>
using namespace std;
static int BinSearch(const vector<int> &data, int begin, int end){
	if(begin == end){
		return data[begin] == begin ? begin : -1;
	}
	int mid = (begin + end) / 2;
	if(data[mid] > mid){
		return BinSearch(data, begin, mid - 1);
	}
	else if(data[mid] < mid){
		return BinSearch(data, mid + 1, end);
	}
	else{
		return mid;
	}
}
int GetSpecialIndex(const vector<int> &data){
	return BinSearch(data, 0, data.size() - 1);
}

//int main(){
//	int n[] = {-10, -5, 3, 4, 7, 9};
//	vector<int> data;
//	for(int i = 0; i < sizeof(n) / sizeof(n[0]); ++i){
//		data.push_back(n[i]);
//	}
//	int k = GetSpecialIndex(data);
//	return 0;
//}