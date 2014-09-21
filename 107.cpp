/************************************************************************/
/* 给定字符串，以及一个字典，判断字符串能否拆分为字典张红的单词，例如：
 * 字典为：{hello, world}, 字符串为hellohelloworld,则可以拆分为hello, hello, world*/
/************************************************************************/
#include <string>
#include <set>
#include <map>
using namespace std;

class Solution{
public:
	bool IsSplit(string &str, set<string> dict){
		for(set<string> ::iterator iter = dict.begin(); iter != dict.end(); ++iter){
			if(record.find(iter->size()) == record.end()){
				set<string> temp;
				temp.insert(*iter);
				record[iter->size()] = temp;
			}
			else{
				record[iter->size()].insert(*iter);
			}
		}
		return Split(str);
	}

private:
	map<int, set<string> > record;

	bool Split(string &str){
		if(str.empty()){
			return true;
		}
		for(map<int, set<string> >::iterator iter = record.begin(); iter != record.end(); ++iter){
			if(iter->first <= str.size()){
				string subStr = str.substr(0, iter->first);
				if(iter->second.find(subStr) != iter->second.end()){
					string leftStr = str.substr(iter->first, str.size() - iter->first);
					if(Split(leftStr)){
						return true;
					}
				}
			}
		}
		return false;
	}
};

//
//int main(){
//	string str("hellowordhelloworld");
//	set<string> dict;
//	dict.insert("hello");
//	dict.insert("world");
//	Solution solution;
//	solution.IsSplit(str, dict);
//	return 0;
//}