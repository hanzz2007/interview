/*************
由26 个小写字母组成的字符串str，在str 中查找最长不含相同字符的连续子串。如 abcacfrar，为acfr
**************/
#include <map>
#include <string>
#include <iostream>
using namespace std;

class Solution{
public:
	Solution(){
		for(int i = 0; i < 26; ++i){
			m_recordMap[i + 'a'] = -1;
		}
	}
	string solution(const string &str){
		int startPos = 0;
		int endPos = 0;
		int maxLen = 0;
		int maxStartPos = 0;
		int maxEndPos = 0;

		for(;endPos < str.size(); ++endPos){
			if(m_recordMap[ str[endPos] ] == -1){
				m_recordMap[ str[endPos] ] = endPos;
 			}
			else{
				int orglEndPos = endPos - 1;//因为endpos多算了一个，所以先回退
				if(orglEndPos - startPos + 1> maxLen){
					maxStartPos = startPos;
					maxEndPos = orglEndPos;
					maxLen = orglEndPos - startPos + 1;
				}
				startPos = m_recordMap[ str[endPos] ] + 1;
				m_recordMap[ str[endPos] ] = endPos;
 			}
		}
		return str.substr(maxStartPos, maxEndPos - maxStartPos + 1);
	}
private:
	map<char, int> m_recordMap;
};
//int main(){
//	string testStr = "abcacfrar";
//	Solution s;
//	cout << s.solution(testStr);
//	return 0;
//}
/********
解题思路：
	按照贪心的思路，不断的从头到尾搜索整个字符串，如果发现有更长的非重复子串则更新记录。
	用map来记录当前搜索子串中的字符
********/