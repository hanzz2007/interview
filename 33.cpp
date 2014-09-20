/*
Before advent of QWERTY keyboards, texts and numbers were placed on the same key. 
For example 2 has “ABC” if we wanted to write anything starting with ‘A’ we need to type key 2 once. If we wanted to type ‘B’, press key 2 twice and thrice for typing ‘C’. 
question:input a digital array output all posibile string
*/
/************************************************************************/
/* 2:abc
   3:def
   4:ghi
   5:jkl
   6:mno
   7:pqrs
   8:tuv
   9:wxyz
*/
/************************************************************************/
/************************************************************************/
/* 解题思路：
	采用分治法，先求出n-1个数组的所有组合，然后再用该组合与最后一个数字键的字母进行组合*/
/************************************************************************/
#include <vector>
#include <string>
using namespace std;

static vector<vector<string>> gDigitMapChar;
static void InitEvn(){
	vector<string> strVec;
	gDigitMapChar.resize(10);
	char ch = 'a';
	for(int i = 2; i < 10; ++i){
		int charNum = 3;
		if(i == 7 || i == 9){
			charNum = 4;
		}
		for(int j = 0; j < charNum; ++j){
			string temp;
			temp += ch++;
			strVec.push_back(temp);
		}
		gDigitMapChar[i] = strVec;
		strVec.clear();
	}
}

static void Combination(vector<string> &strVec, int num){
	if(strVec.empty()){
		strVec = gDigitMapChar[num];
		return;
	}

	vector<string> strVec2;
	//第num个数字对应的字符串集合，则将当前容器中的字符串依次加上当前数字对应的所有字符。
	for(int i = 0; i < gDigitMapChar[num].size(); ++i){
		for(int j = 0; j < strVec.size(); ++j){
			strVec2.push_back(strVec[j] + gDigitMapChar[num][i]);
		}
	}
	strVec = strVec2;
}

vector<string> GetCombination(const vector<int> &digits){
	vector<string> strVec;
	InitEvn();
	for(auto elem : digits){
		Combination(strVec, elem);
	}
	return strVec;
}

//int main(){
//	int n[] = {2,3,4};
//	vector<int> digits;
//	for(int i = 0; i < sizeof(n) / sizeof(n[0]); ++i){
//		digits.push_back(n[i]);
//	}
//
//	GetCombination(digits);
//	return 0;
//}