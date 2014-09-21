/************************************************************************/
/* Q1：给出一个int数组，通过变换使得左边全为奇数右边全为偶数                       */
/************************************************************************/

#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	void TransformArray(vector<int> &dataArray){
		int i = 0, j = dataArray.size() - 1;
		while(i < j){
			while(dataArray[i] % 2 != 0){
				++i;
			}
			while(dataArray[j] % 2 == 0){
				--j;
			}
			if(i < j){
				//dataArray.swap(i , j);
				swap(dataArray[i], dataArray[j]);
			}
		}
	}
};
//int main(){
//	vector<int> dataArray;
//	int A[] = {1,2,3,4,5,6,7,8,9,10};
//	for(int i = 0; i < 10; ++i){
//		dataArray.push_back(A[i]);
//	}
//	Solution solution;
//	solution.TransformArray(dataArray);
//	return 0;
//}