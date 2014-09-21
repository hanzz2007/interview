/************************************************************************/
/* 有一个已经排序的数组（升序），数组中可能有正数、负数或0，求数组中元素的绝对值最小的数，
 * 要求，不能用顺序比较的方法（复杂度需要小于O（n））                             */
/************************************************************************/
#include <vector>
using namespace std;
class Solution{
public:
	int GetAbsoluteMin(const vector<int> &data){
		if(data[0] >= 0){
			return data[0];
		}
		else{
			if(data.back() <= 0){
				return data.back();
			}
			else{
				return MidSearch(data, 0, data.size() - 1);
			}
		}
	}
private:
	int MidSearch(const vector<int> &data, int start, int end){
		if(end - start == 1){
			if(abs(data[end]) < abs(start)){
				return data[end];
			}
			else{
				return data[start];
			}
		}
		else{
			int mid = (end + start) / 2;
			if(data[mid] < 0){
				return MidSearch(data, mid, end);
			}
			else{
				return MidSearch(data, start , mid);
			}
		}
	}
};

//int main(){
//	vector<int> data;
//	int A[] = {-2,2,3,4,5};
//	for(int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
//		data.push_back(A[i]);
//	}
//	Solution solution;
//	solution.GetAbsoluteMin(data);
//	return 0;
//}