/************************************************************************/
/*       给定一长一短的两个字符串A, B.假设A长B短，现在，要你判断B是否包含在字符串A中（不区分大小写）
 *       并给出算法的设计复杂度和存储复杂度
 *       比如：如果是下面两个字符串：string A：ABCDEFGHLMNOPQRS
 *       string B:DCGSRQPOM.回答是true，因为string B里面的字母stringA全都有*/
/************************************************************************/
#include <set>
#include <string>

using namespace std;

class Solution{
public:
	bool IsSubstring(const string &stringA, const string &stringB){
		set<char> record;
		for(int i = 0; i < stringA.size(); ++i){
			record.insert(tolower(stringA[i]));
		}
		for(int i = 0; i < stringB.size(); ++i){
			if(record.find(tolower(stringB[i])) == record.end()){
				return false;
			}
		}
		return true;
	}
};

//int main(){
//	Solution solution;
//	string strA("ABCDEF");
//	string strB("cdf");
//	solution.IsSubstring(strA, strB);
//	return 0;
//}