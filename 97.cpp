/************************************************************************/
/* 2. 已知字母序列【d, g, e, c, f, b, o, a】，请实现一个函数针对输入的一组字符串
* input[] = {"bed", "dog", "dear", "eye"}，按照字母顺序排序并打印。
* 本例的输出顺序为：dear, dog, eye, bed。 */
/************************************************************************/

#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
bool MySort(const pair<int, string> &a, const pair<int, string> &b){
	return a.first < b.first;
}

class Solution{
public:

	Solution(vector<char> MyDict){
		dict = MyDict;
	}

	void ReOrder(vector<string> &strVector){
		vector<pair<int, string> > strWeight;
		for(int i = 0; i < strVector.size(); ++i){
			int num = 0;
			for(int j = 0; j < strVector[i].size(); ++j){
				vector<char> :: iterator iter = find(dict.begin(), dict.end(), strVector[i][j]);
				if(iter == dict.end()){
					return;
				}
				int pos = iter - dict.begin();
				num +=  pos * pow(float(10), float(strVector.size() - 1 - j) );
			}
			strWeight.push_back(make_pair(num, strVector[i]));
		}
		sort(strWeight.begin(), strWeight.end(), MySort);
		for(int i = 0; i < strWeight.size(); ++i){
			strVector[i] = strWeight[i].second;
		}
	}



private:
	vector<char> dict;
};

//int main(){
//	vector<char> dict;
//	dict.push_back('d');
//	dict.push_back('g');
//	dict.push_back('e');
//	dict.push_back('c');
//	dict.push_back('f');
//	dict.push_back('b');
//	dict.push_back('r');
//	dict.push_back('o');
//	dict.push_back('a');
//	dict.push_back('y');
//
//
//	Solution solution(dict);
//	string a("bed");
//	string b("dog");
//	string c("dear");
//	string d("eye");
//	vector<string> input;
//	input.push_back(a);
//	input.push_back(b);
//	input.push_back(c);
//	input.push_back(d);
//	solution.ReOrder(input);
//
//	return 0;
//}