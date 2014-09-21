/************************************************************************/
/*编写程序，在原字符串中把尾部m个字符移动到字符串的头部.
  要求：长度为n字符串操作时间复杂度为O(n),空间复杂度为O(1)。
  如：原字符串为”Ilovebaofeng”，m=7，输出结果：”baofengIlove”。                */
/************************************************************************/
#include <string>
using namespace std;

class Solution{
public:
	void TransformString(string &str, int m){
		if(str.size() % m){
			int i = str.size() - m;
			char ch = str[i];
			for(int k  = 0; k < str.size(); ++k){
				i = (i + m) % str.size();
				char temp = str[i];
				str[i] = ch;
				ch = temp;
			}
		}
		else{
			for(int i = str.size() - m; i < str.size(); ++i){
				int j = (i + m) % str.size();
				char ch = str[i];
				while(j != i){
					char temp = str[j];
					str[j] = ch;
					ch = temp;
					j = (j + m) % str.size();
				}
				str[j] = ch;
			}
		}
	}
};

//int main(){
//	string str("nihaolintong");
//	Solution solution;
//	solution.TransformString(str, 1);
//	return 0;
//}