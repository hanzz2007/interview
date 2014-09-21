/************************************************************************/
/* 输入一个字符串，输出该字符串中对称的子字符串的最大长度。
比如输入字符串“google”，由于该字符串里最长的对称子字符串是“goog”，因此输出 4。
分析：可能很多人都写过判断一个字符串是不是对称的函数，这个题目可以看成是该函数的
加强版。                                                                */
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
				//i 要回退一个位置，所以要多减去1
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