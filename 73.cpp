/************************************************************************/
/*
 给定一整型数组，若数组中某个下标值大的元素值小于某个下标值比它小的元素值，称这是一个反序。
 即：数组 a[];  对于 i < j  且  a[i] > a[j],则称这是一个反序。
 给定一个数组，要求写一个函数，计算出这个数组里所有反序的个数。
*/
/************************************************************************/
#include <vector>
using namespace std;

class Solution{
public:
	Solution(){
		number = 0;
	}
	void ReversePair(int Array[], int n){
		Split(Array, 0, n - 1);
	}
private:
	int number;
	void Split(int Array[], int start, int end){
		if(start == end){
			return;
		}
		int mid = int ((start + end) / 2);
		Split(Array, start, mid);
		Split(Array, mid + 1, end);
		Merge(Array, start, mid, end);
	}
	void Merge(int Array[], int start, int mid, int end){
		vector<int> tempArray;
		int i = start, j = mid + 1;
		while(i <= mid && j <= end){
			if(Array[i] <= Array[j]){
				tempArray.push_back(Array[i]);
				++i;
			}
			else{
				tempArray.push_back(Array[j]);
				number += mid - i + 1;
				++j;
				
			}
		}
		while(i <= mid){
			tempArray.push_back(Array[i]);
			++i;
		}
		while(j <= end){
			tempArray.push_back(Array[j]);
			++j;
		}
		for(int i = start; i <= end; ++i){
			Array[i] = tempArray[i - start];
		}
	}
};
//
//int main(){
//	Solution solution;
//	int A[] = {7,6,5,4,3,2,1};
//	solution.ReversePair(A, sizeof(A) / sizeof(A[0]));
//	return 0;
//}