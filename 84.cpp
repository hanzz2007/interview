/************************************************************************/
/*��Ŀ������һ������ n��������к�Ϊ n �����������С�
�������� 15������ 1+2+3+4+5=4+5+6=7+8=15��������� 3 ���������� 1-5�� 4- 6 �� 7-8��
�������������׵�һ��������*/
/************************************************************************/
/************************************************************************/
/* �ⷨ��
 * ������������ָ�룬һ��ָ���ײ���һ��ָ��β�������sum > n.��ǰ���ײ�ָ�룬���sum < n��ǰ��β��ָ�롣����β��ָ������� n / 2 + 1����ֹ��*/
/************************************************************************/
#include <vector>
#include <map>
using namespace std;

class Solution{
public:
	vector<pair<int, int> > GetSequence(int n){
		vector<pair<int, int> > result;
		int sum = 0;
		int startPos = 1;
		int endPos = startPos;
		for(; sum <= n; ++endPos){
			sum += endPos;
			if(sum == n){
				result.push_back(make_pair(startPos, endPos));
			}
		}
		--endPos;//strange , after it break out the loop, endPos still plus one
		sum -= startPos;
		++startPos;

		while(endPos <  n / 2 + 2){
			if(sum > n){
				sum -= startPos;
				++startPos;
			}
			else{
				if(sum == n){
					result.push_back(make_pair(startPos, endPos));
				}
				++endPos;
				sum += endPos;
			}
		}
		return result;
	}
};

//int main(){
//	Solution solution;
//	solution.GetSequence(130);
//	return 0;
//}