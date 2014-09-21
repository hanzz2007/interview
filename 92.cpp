/************************************************************************/
/* 一个整数数列，元素取值可能是 0~65535 中的任意一个数，相同数值不会重复出现。
	0 是例外，可以反复出现。
	请设计一个算法，当你从该数列中随意选取 5 个数值，判断这 5 个数值是否连续相邻。
	注意：
		- 5 个数值允许是乱序的。比如：  8 7 5 0 6
		- 0 可以通配任意数值。比如：8 7 5 0 6  中的 0 可以通配成 9 或者 4
		- 0 可以多次出现。
		- 复杂度如果是 O(n2)则不得分                                         */
/************************************************************************/

/************************************************************************/
/*解法：
 *首先：可以得知数字是无序排列的，所以先用一个map记录下数字和相对的位置。
 *然后对输入的sequence相对于每个元素查找其在data中的位置。
 *先计算所有在位置上相邻（不是紧密相邻）的元素的的距离， 再将距离和零的个数进行比较，从而判断是否满足条件*/
/************************************************************************/
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
 
 

class Solution{
	public:
		bool CheckData(vector<int> &data, vector<int> &sequence){
			
			map<int, int> record;
			for(int i = 0;i < data.size(); ++i){
				record[ data[i] ] =  i;
			}
			vector<int> numberPosRecord;
			int zeroNumber = 0;
			for(int i = 0; i < sequence.size(); ++i){
				if(sequence[i] == 0){
					++zeroNumber;
				}
				else{
					map<int, int> :: iterator iter = record.find(sequence[i]);
					if(iter == record.end()){
						return false;
					}
					numberPosRecord.push_back(iter->second);
				}
			}
			sort(numberPosRecord.begin(), numberPosRecord.end());
			int distance = 0;
			for(int i = 1; i < numberPosRecord.size(); ++i){
				distance += numberPosRecord[i] - numberPosRecord[i - 1] - 1;
			}
			if(distance <= zeroNumber){
				return true;
			}
			else{
				return false;
			}
		}
};

//int main(){
//	int A[] = {9,1,4,3,6,7,5,8};
//	int B[] = {7,0,1,3,4};
//	vector<int> number;
//	vector<int> sequence;
//	for(int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
//		number.push_back(A[i]);
//	}
//	for(int i = 0; i < sizeof(B) / sizeof(B[0]); ++i){
//		sequence.push_back(B[i]);
//	}
//
//	Solution solution;
//	solution.CheckData(number, sequence);
//
//	return 0;
//}