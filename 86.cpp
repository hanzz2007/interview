/************************************************************************/
/*  给定一个数组input[] ，如果数组长度n为奇数，则将数组中最大的元素放到 output[] 数组最中间的位置，
 *  如果数组长度n为偶数，则将数组中最大的元素放到 output[] 数组中间两个位置偏右的那个位置上，然后再按从大到小的顺序，
 *  依次在第一个位置的两边，按照一左一右的顺序，依次存放剩下的数。
 *  例如：
 *  input[] = {3, 6, 1, 9, 7}
 *  output[] = {3, 7, 9, 6, 1};
 *  input[] = {3, 6, 1, 9, 7, 8}
 *  output[] = {1, 6, 8, 9, 7, 3}
 *  函数接口   void sort(int input[[, int n, int output[])                 */
/************************************************************************/
/************************************************************************/
/* 解法：
 * 先对input进行排序，然后设置两个位置指针，依次递减和递增， 对input数组的元素从高到低插入output数组*/
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