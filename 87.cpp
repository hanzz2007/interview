/************************************************************************/
/* 在一个 int  数组里查找这样的数，它大于等于左侧所有数，小于等于右侧所有数。         */
/************************************************************************/
#include <vector>

using namespace std;
class Solution{
public:
	vector<int> GetSpecialNumber(const vector<int> &data){
		vector<int> recordArray;
		recordArray.resize(data.size());
		for(int i = 0; i < recordArray.size(); ++i){
			recordArray[i] = 0;
		}
		int min = data[0];
		recordArray[0] = 1;
		for(int i = 1; i < data.size(); ++i){
			if(data[i] >= min){
				recordArray[i] = 1;
				min = data[i];
			}
		}
		int max = data.back();
		for(int j = data.size() - 2; j >= 0; --j){
			if(data[j] > max){
				max = data[j];
				recordArray[j] = 0;
			}
		}
		vector<int> result;
		for(int i = 0; i < recordArray.size(); ++i){
			if(recordArray[i]){
				result.push_back(data[i]);
			}
		}
		return result;
	}
};

//int main(){
//	Solution solution;
//	vector<int> data;
//	int A[] = {1, 2, 4, 3, 5, 7, 6};
//	for(int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
//		data.push_back(A[i]);
//	}
//	solution.GetSpecialNumber(data);
//
//	return 0;
//}