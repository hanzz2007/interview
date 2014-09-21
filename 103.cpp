/************************************************************************/
/* 两个字符串A、B。从A中剔除存在于B中的字符。比如A=“hello world”,B="er"，
 * 那么剔除之后A变为"hllowold"。空间复杂度要求是O(1)，时间复杂度越优越好。*/
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