/************************************************************************/
/* �����ַ���A��B����A���޳�������B�е��ַ�������A=��hello world��,B="er"��
 * ��ô�޳�֮��A��Ϊ"hllowold"���ռ临�Ӷ�Ҫ����O(1)��ʱ�临�Ӷ�Խ��Խ�á�*/
/************************************************************************/
#include <string>
#include <bitset>

using namespace std;

class Solution{
public:
	void DelCommanChar(string &str1, const string &str2){
		bitset<128> record;
		for(int i = 0; i < str1.size(); ++i){
			record.set(int(str1[i]));
		}
		for(int i = 0; i < str2.size(); ++i){
			record.reset(int(str2[i]));
		}
		for(int i = 0; i < str1.size();){
			if(!record.test( int(str1[i]) )){
				str1.erase(i, 1);
			}
			else{
				++i;
			}
		}
	}
};
//int main(){
//	string str1("nihaolintong");
//	string str2("nidaetada");
//	Solution solution;
//	solution.DelCommanChar(str1, str2);
//	return 0;
//}