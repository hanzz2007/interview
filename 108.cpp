/************************************************************************/
/* ����һ���ַ�����������ַ����жԳƵ����ַ�������󳤶ȡ�
���������ַ�����google�������ڸ��ַ�������ĶԳ����ַ����ǡ�goog���������� 4��
���������ܺܶ��˶�д���ж�һ���ַ����ǲ��ǶԳƵĺ����������Ŀ���Կ����Ǹú�����
��ǿ�档                                                                */
/************************************************************************/
#include<string>
using namespace std;

class Solution{
public:
	int GetLongestStr(const string &str){
		int min = 0;
		int pos = 0;
		for(int i = 1; i < str.size(); ++i){

			if(str[i] == str[pos]){
				--pos;
				if(pos < 0){
					if(i + 1 > min){
						min = i + 1;
					}
					pos = i;
				}
			}
			else{
				//i Ҫ����һ��λ�ã�����Ҫ���ȥ1
				if(i - pos - 1 > min){
					min = i - pos - 1;
				}
				if(str[i - 1] == str[i]){
					pos = i - 2;
				}
				else{
					pos = i;
				}
			}
		}
		return min;
	}
};

//int main(){
//	string str("agoogeagoogale");
//	Solution solution;
//	solution.GetLongestStr(str);
//	return 0;
//}