/************************************************************************/
/* �ַ����ƶ����ַ���Ϊ*�ź� 26 ����ĸ��������ϣ���*�Ŷ��ƶ�������࣬��
��ĸ�Ƶ����Ҳಢ�������˳�򲻱䣩��Ҫ��ʱ��Ϳռ临�Ӷ���С                      */
/************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
public:
	void ReorderString(string &str){
		int j = str.size() - 1;
		for(;j >= 0; --j){
			if(str[j] == '*'){
				break;
			}
		}
		for(int i = j; i >= 0; --i){
			if(str[i] != '*'){
				if(j != i){
					swap(str[i], str[j]);
					if(j - 1 != i){
						--j;
					}
					else{
						j = i;
					}
				}
			}
		}
	}
};

//int main(){
//	string str("d**a***f**afa***");
//	Solution solution;
//	solution.ReorderString(str);
//	return 0;
//}