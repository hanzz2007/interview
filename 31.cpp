/************************************************************************/
/* 
Given an unsorted array and a number n, find if there exists a pair of elements in the array whose difference is n.

Examples:
Input: arr[] = {5, 20, 3, 2, 50, 80}, n = 78
Output: Pair Found: (2, 80)

Input: arr[] = {90, 70, 20, 80, 50}, n = 45
Output: No Such Pair                                                                     */
/************************************************************************/


/************************************************************************/
/* 解题思路：
		首先，对数组进行排序花费nlogn时间。
		然后对数组元素进行遍历，如果C = A - B（其中A和C均为数组中的元素，B为要查的差）
		如果C在数组范围内，则对数组进行二分查找，因此花费时间最差为nlogn
		所以，整体的时间复杂度为nlogn*/
/************************************************************************/
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void GetPair(const vector<int> &data,int k, pair<int, int> &result){
	vector<int> dataVec = data;
	sort(dataVec.begin(), dataVec.end());
	for(int i = 0; i < dataVec.size(); ++i){
		int minuend = dataVec[i] - k;
		if(minuend <= dataVec.back() && dataVec[0] <= minuend){
			auto iterPair = equal_range(dataVec.begin(), dataVec.end(), minuend);
			if(iterPair.first != iterPair.second){
				result.first = dataVec[i];
				result.second = *iterPair.first;
				return;
			}
		}
	}
}

//int main(){
//	int n[] = {5, 20, 3, 2, 50, 80};
//	vector<int> data;
//	for(int i = 0; i < sizeof(n) / sizeof(n[0]); ++i){
//		data.push_back(n[i]);
//	}
//
//	pair<int, int> result;
//	GetPair(data, 78, result);
//	return 0;
//}