/************************************************************************/
/* 有字符串如“ABCD, AABCD, XB, BCAD, DOT, TDO, ZZZ, ABCDA, BCDAA, BDCA,
 * 要将其中由相同字符组成的词归在一起。如果没有和其他相同字符组成的词则划掉，比如上诉的结果如下：
 组1：ABCD, BCAD, BDCA 组2：AABCD, ABCDA, BCDAA 组3：DOT,TDO*/
/************************************************************************/
#include <vector>
#include <string>
#include <map>
#include <algorithm>
 using namespace std;

class Solution{
public:
	vector<vector<string> > StringGroup(const vector<string> &strs){
		map<string, vector<string>> stringRecord;
		vector<vector<string> > result;

		for(int i = 0; i < strs.size(); ++i){
			string str = strs[i];
			sort(str.begin(), str.end());
			if(stringRecord.find(str) == stringRecord.end()){
				vector<string> container;
				stringRecord[str] = container;
				stringRecord[str].push_back(strs[i]);
			}
			else{
				stringRecord[str].push_back(strs[i]);
			}
		}
		for(map<string, vector<string> > :: iterator iter = stringRecord.begin(); iter != stringRecord.end(); ++iter){
			if(iter->second.size() > 1){
				result.push_back(iter->second);
			}
		}
		return result;
	}
};

//int main(){
//	Solution solution;
//	vector<string> strs;
//
//	strs.push_back("ABCD");
//	strs.push_back("AABCD");
//	strs.push_back("XB");
//	strs.push_back("BCAD");
//	strs.push_back("DOT");
//	strs.push_back("TDO");
//	strs.push_back("ZZZ");
//	strs.push_back("ABCDA");
//	strs.push_back("BCDAA");
//	strs.push_back("BDCA");
//	solution.StringGroup(strs);
//	return 0;
//}