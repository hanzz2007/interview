/************************************************************************/
/* ��Ŀ������ n �����������������С�� k ������������ 1��2��3��4��5��6��7 �� 8 �� 8 �����֣�
 * ����С�� 4 ������Ϊ 1��2��3 �� 4��                                         */
/************************************************************************/

/************************************************************************/
/* �������һ������ά��k��Ԫ�أ�����ÿ��������Ԫ�رȽ�����Ѷ�Ԫ�ء�               */
/************************************************************************/

#include <algorithm>

using namespace std;

const int HEAP_SIZE = 100;
class Solution{
public:
	Solution(){
		size = 0;
	}
	void GetKMin(int A[], int len, int kLen){
		k = kLen;
		for(int i = 0; i < len; ++i){
			InsertElem(A[i]);
		}
	}
private:
	void KeepHeap(int index){
		int leftChild = index << 1;
		int rightChild = index << 1;
		++rightChild;
		int max = heap[index];
		int maxIndex = 1;

		if(leftChild <= size && heap[index] < heap[leftChild]){
			max = heap[leftChild];
			maxIndex = leftChild;
		}
		if(rightChild <= size && max < heap[rightChild]){
			max = heap[rightChild];
			maxIndex = rightChild;
		}

		if(max != heap[index]){
			swap(heap[index], heap[maxIndex]);
			KeepHeap(maxIndex);
		}
	}
	void Build(){
		for(int i = size / 2; i >= 1; --i){
			KeepHeap(i);
		}
	}
	void InsertElem(int elem){
		if(size < k){
			heap[++size] = elem;
			if(size == k){
				Build();
			}
			/*swap(heap[1], heap[size]);
			KeepHeap(1);*/
		}
		else{
			if(elem < heap[1]){
				heap[1] = elem;
				KeepHeap(1);
			}
		}
	}
	int heap[HEAP_SIZE];
	int size;
	int k;
};

//int main(){
//	int A[] = {7,1,8,9,3,2,5,10,11,12,14,21};
//	Solution solution;
//	solution.GetKMin(A, sizeof(A) / sizeof(A[0]), 4);
//	return 0;
//}