/************************************************************************/
/* 
一个整数数列，元素取值可能是 1~N （N 是一个较大的正整数）中的任意一个数，相同数值不会重复出现。
设计一个算法，找出数列中符合条件的数对的个数，满足数对中两数的和等于 N+1。
复杂度最好是 O(n)，如果是 O(n2)则不得分。
*/
/************************************************************************/
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
#define N 100


void Search(const vector<int> &data, vector<int> &result){
	set<int> recordSet;
	int nMidElem = N / 2;

	for(auto elem : data){
		int nSearchVal = elem > nMidElem ? elem : N + 1- elem;
		auto iter = recordSet.find(nSearchVal);
		if(iter == recordSet.end()){
			recordSet.insert(nSearchVal);
		}
		else{
			recordSet.erase(iter);
			result.push_back(elem);
		}
	}
}
//int main(){
//	vector<int> data;
//	data.push_back(30);
//	data.push_back(40);
//	data.push_back(50);
//	data.push_back(61);
//	data.push_back(71);
//	data.push_back(81);
//	data.push_back(91);
//	vector<int> result;
//
//	Search(data, result);
//
//	return 0;
//}