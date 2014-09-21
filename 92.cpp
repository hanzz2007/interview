/************************************************************************/
/* һ���������У�Ԫ��ȡֵ������ 0~65535 �е�����һ��������ͬ��ֵ�����ظ����֡�
	0 �����⣬���Է������֡�
	�����һ���㷨������Ӹ�����������ѡȡ 5 ����ֵ���ж��� 5 ����ֵ�Ƿ��������ڡ�
	ע�⣺
		- 5 ����ֵ����������ġ����磺  8 7 5 0 6
		- 0 ����ͨ��������ֵ�����磺8 7 5 0 6  �е� 0 ����ͨ��� 9 ���� 4
		- 0 ���Զ�γ��֡�
		- ���Ӷ������ O(n2)�򲻵÷�                                         */
/************************************************************************/

/************************************************************************/
/*�ⷨ��
 *���ȣ����Ե�֪�������������еģ���������һ��map��¼�����ֺ���Ե�λ�á�
 *Ȼ��������sequence�����ÿ��Ԫ�ز�������data�е�λ�á�
 *�ȼ���������λ�������ڣ����ǽ������ڣ���Ԫ�صĵľ��룬 �ٽ��������ĸ������бȽϣ��Ӷ��ж��Ƿ���������*/
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