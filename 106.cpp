/************************************************************************/
/* 字符串移动（字符串为*号和 26 个字母的任意组合，把*号都移动到最左侧，把
字母移到最右侧并保持相对顺序不变），要求时间和空间复杂度最小                      */
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