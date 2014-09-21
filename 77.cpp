/************************************************************************/
/* 写一个二路归并排序算法                                                   */
/************************************************************************/
#include <vector>
using namespace std;

class Solution{
public:
	void BinMergeSort(vector<int> &data){
		MergeSort(data, 0, data.size() - 1);
	}
	void MergeSort(vector<int> &data, int start, int end){
		if(start == end){
			return;
		}
		else{
			int mid = (start + end) / 2;
			MergeSort(data, start, mid);
			MergeSort(data, mid + 1, end);
			Merge(data, start, mid, end);
		}
	}

	void Merge(vector<int> &data, int start, int mid, int end){
		vector<int> leftData;
		vector<int> rightData;
		for(int h = start; h <= end; ++h){
			if(h <= mid){
				leftData.push_back(data[h]);
			}
			else{
				rightData.push_back(data[h]);
			}

		}

		int i = 0;
		int j = 0;
		int k = start;

		while(i < leftData.size() && j < rightData.size()){
			if(leftData[i] <= rightData[j]){
				data[k++] = leftData[i++];
			}
			else{
				data[k++] = rightData[j++];
			}
		}
		while(i < leftData.size()){
			data[k++] = leftData[i++];
		}
		while(j < rightData.size()){
			data[k++] = rightData[j++];
		}
	}
};

//int main(){
//	vector<int> data;
//	int A[] = {7,8,7,3,9,6,3,7,5,6,7,9,4,2,65,96,3,9,5,2,9,5923,5,7,9,2,3,7,59,2,3,9,5,87,2,5,2,3,8,97,9,2,8,5,7,9,82,3,5,2,3,89,7};
//	for(int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
//		data.push_back(A[i]);
//	}
//	Solution solution;
//	solution.BinMergeSort(data);
//	return 0;
//}