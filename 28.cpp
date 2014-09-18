/************************************************************************/
/* 
Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest.

Examples:

Input:  arr[] = {10, 5, 3, 4, 3, 5, 6}
Output: 5 [5 is the first element that repeats]

Input:  arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
Output: 6 [6 is the first element that repeats]                                                                     */
/************************************************************************/


/*
采用二叉查找树，或者是哈希表，将已经搜索到的元素存入，每来一个元素，先进行查找，如果找到，则更新index，满足index最小
*/

#include <map>
#include <vector>
using namespace std;
int FirstRepeatVal(const vector<int> &data){
	map<int, int> record;
	
	pair<int, int> result;
	result.second = -1;

	for(int i= 0; i < data.size(); ++i){
		auto iter = record.find(data[i]);
		if(iter == record.end()){
			record[data[i]] = i;
		}
		else{
			if(result.second > iter->second || result.second == -1){
				result = *iter;
			}
		}
	}
	return result.first;
}

//int main(){
//	vector<int> data;
//	int n[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
//	for(int i = 0; i < sizeof(n) / sizeof(n[0]); ++i){
//		data.push_back(n[i]);
//	}
//	int k = FirstRepeatVal(data);
//
//	return 0;
//}