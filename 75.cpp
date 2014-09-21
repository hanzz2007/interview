/************************************************************************/
/* ����һ���ַ�����Ҫ��ԭ���Ƴ��ظ���ĸ                                        */
/************************************************************************/
#include <vector>
#include <set>
using namespace std;

class Solution{
public:
	void RemoveRepeatChar(string &str){
		set<char> charRecord;
		for(int i = 0; i < str.size();){
			if(charRecord.find(str[i]) == charRecord.end()){
				charRecord.insert(str[i]);
				++i;
			}
			else{
				str.erase(str.begin() + i);
			}
		}
	}
};

//int main(){
//	Solution solution;
//	string str("aaabbcdabcdeadc");
//	solution.RemoveRepeatChar(str);
//	return 0;
//}