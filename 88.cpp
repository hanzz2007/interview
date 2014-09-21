/************************************************************************/
/* ��Ŀ����һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת������һ��
   �ź���������һ����ת�������ת�������СԪ��                                 */
/************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

class Solution{
public:
	int GetMinElem(const vector<int> &data){
		int mid = (data.size() - 1) / 2;
		return MinElem(data, 0, mid, data.size() - 1);
	}
private:
	int MinElem(const vector<int> &data, int begin, int mid, int end){
		if(end - begin == 1){
			return data[begin] < data[end] ? data[begin] : data[end];
		}
		
		if(data[begin] <= data[mid]){
			int nextMid = (end + mid) / 2;
			return MinElem(data, mid, nextMid, end);
		}
		else{
			int nextMid = (mid + begin) / 2;
			return MinElem(data, begin, nextMid, mid);
		}
	}
};

//int main(){
//	int A[] = {2,3, 4, 5, 6,7,8,9,1};
//	vector<int> input;
//	for(int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
//		input.push_back(A[i]);
//	}
//	Solution solution;
//	cout << solution.GetMinElem(input);
//	return 0;
//}