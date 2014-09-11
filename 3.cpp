/************************************************************************/
/* 
һ���������У�Ԫ��ȡֵ������ 1~N ��N ��һ���ϴ�����������е�����һ��������ͬ��ֵ�����ظ����֡�
���һ���㷨���ҳ������з������������Եĸ��������������������ĺ͵��� N+1��
���Ӷ������ O(n)������� O(n2)�򲻵÷֡�
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