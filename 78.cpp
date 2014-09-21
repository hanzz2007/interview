/************************************************************************/
/* ���� al[0,mid-1]  ��  al[mid,num-1]�����ֱ����򡣽��� merge ���������� al[0,num-1]��
   Ҫ��ռ临�Ӷ� O(1)                                                     */
/************************************************************************/

class Solution{
public:
	void Merge(int Array[], int len, int mid){
		int i = 0, j = mid;
		//int endI = mid;

		while(i < j && j < len){
			if(Array[i] > Array[j]){
				int temp = Array[j];
				for(int k = j; k > i; --k){
					Array[k] = Array[k - 1];
				}
				Array[i] = temp;
				++j;
				++i;
			}
			else{
				++i;
			}
		}
	}
};

//int main(){
//	int A[] = {3,6,9,1,2,10};
//	Solution solution;
//	solution.Merge(A, sizeof(A) / sizeof(A[0]), sizeof(A) / (sizeof(A[0]) * 2));
//	return 0;
//}