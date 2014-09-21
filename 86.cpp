/************************************************************************/
/*  ����һ������input[] ��������鳤��nΪ������������������Ԫ�طŵ� output[] �������м��λ�ã�
 *  ������鳤��nΪż����������������Ԫ�طŵ� output[] �����м�����λ��ƫ�ҵ��Ǹ�λ���ϣ�Ȼ���ٰ��Ӵ�С��˳��
 *  �����ڵ�һ��λ�õ����ߣ�����һ��һ�ҵ�˳�����δ��ʣ�µ�����
 *  ���磺
 *  input[] = {3, 6, 1, 9, 7}
 *  output[] = {3, 7, 9, 6, 1};
 *  input[] = {3, 6, 1, 9, 7, 8}
 *  output[] = {1, 6, 8, 9, 7, 3}
 *  �����ӿ�   void sort(int input[[, int n, int output[])                 */
/************************************************************************/
/************************************************************************/
/* �ⷨ��
 * �ȶ�input��������Ȼ����������λ��ָ�룬���εݼ��͵����� ��input�����Ԫ�شӸߵ��Ͳ���output����*/
/************************************************************************/
#include <algorithm>
using namespace std;

void sort(int input[], int n, int output[]){
	if(sizeof(output) < n || n < 0){
		return;
	}
	sort(input, input + n);
	
	int leftPos = n / 2 - 1;
	int rightPos = n / 2 + 1;
	output[n / 2] = input[n - 1];
	int curPos = n - 2;
	while(leftPos >= 0 && rightPos <n && curPos >= 0){
		output[leftPos] = input[curPos--];
		output[rightPos] = input[curPos--];
		++rightPos;
		--leftPos;
	}
	if(curPos >= 0){
		output[0] = input[curPos];
	}
}


//int main(){
//	int A[] = {3,6,1,9,7,8};
//	int B[6];
//	sort(A, 6, B);
//	return 0;
//}