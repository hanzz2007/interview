/************************************************************************/
/* 找出数组中唯一的重复元素，1-1000放在含有1001个元素的数组中，只有唯一的一个元素值重复，
 * 其它均只出现一次．每个数组元素只能访问一次，设计一个算法，将它找出来；不用辅助存储空间，能否设计一个算法实现？*/
/************************************************************************/
#include <iostream>
using namespace std;

class Solution{
public:
	int getRepeatElem(int A[], int n){
		long sum = 0;
		for(int i = 0; i < n; ++i){
			sum += A[i];
		}
		return sum - 500500;
	}
};

//int main(){
//	int sum = 0;
//	int A[1001];
//	for(int i = 1; i <= 1000; ++i){
//		A[i - 1] = i;
//	}
//	A[1000] = 99;
//	A[98] = 77;
//
//	Solution solution;
//	cout << solution.getRepeatElem(A, 1001);
//	return 0;
//}