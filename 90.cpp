/************************************************************************/
/* 删除模式串中出现的字符，如“welcome  to  asted”,模式串为“aeiou”
   那么得到的字符串为“wlcm  t std"，要求性能最优                                */
/************************************************************************/
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool MySort(const pair<char, int> &a, const pair<char, int> &b){
	return a.first < b.first;
}
bool MySort2(const pair<char, int> &a, const pair<char, int> &b){
	return a.second < b.second;
}

class Solution{
public:
	string DelChar(string &strA,string &strB){
		vector< pair<char, int> >record;
		vector< pair<char, int> >resultPair;

		for(int i = 0; i <strA.size(); ++i){
			record.push_back(make_pair(strA[i], i));
		}
		sort(record.begin(), record.end(), MySort);
		sort(strB.begin(), strB.end());
		string result;
		int i = 0, j = 0;
		while(i < record.size() && j < strB.size()){
			if(record[i].first < strB[j]){
				resultPair.push_back(record[i]);
				++i;
			}
			else{
				if(record[i].first > strB[j]){
					++j;
				}
				else{
					while(record[i].first == strB[j]){
						++i;
					}
					++j;
				}
			}
		}
		while(i < record.size()){
			resultPair.push_back(record[i]);
			++i;
		}
		sort(resultPair.begin(), resultPair.end(), MySort2);
		for(int i = 0; i < resultPair.size(); ++i){
			result.push_back(resultPair[i].first);
		}
		return result;
	}
};

//int main(){
//	string A("welcome to asted");
//	string B("aeiou");
//	Solution solution;
//	solution.DelChar(A, B);
//	return 0;
//}