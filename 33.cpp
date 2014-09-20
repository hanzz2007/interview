/*
Before advent of QWERTY keyboards, texts and numbers were placed on the same key. 
For example 2 has ��ABC�� if we wanted to write anything starting with ��A�� we need to type key 2 once. If we wanted to type ��B��, press key 2 twice and thrice for typing ��C��. 
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
/* ����˼·��
	���÷��η��������n-1�������������ϣ�Ȼ�����ø���������һ�����ּ�����ĸ�������*/
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
	//��num�����ֶ�Ӧ���ַ������ϣ��򽫵�ǰ�����е��ַ������μ��ϵ�ǰ���ֶ�Ӧ�������ַ���
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