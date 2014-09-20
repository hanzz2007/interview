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
/* ����˼·��
		���ȣ�������������򻨷�nlognʱ�䡣
		Ȼ�������Ԫ�ؽ��б��������C = A - B������A��C��Ϊ�����е�Ԫ�أ�BΪҪ��Ĳ
		���C�����鷶Χ�ڣ����������ж��ֲ��ң���˻���ʱ�����Ϊnlogn
		���ԣ������ʱ�临�Ӷ�Ϊnlogn*/
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