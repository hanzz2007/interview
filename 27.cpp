/************************************************************************/
/* 用O(n)的算法，实现对一组无序的字母进行从小到大排序(区分大小写)，相同的字母，小写在大写前       */
/************************************************************************/

#include <vector>
#include <string>
using namespace std;
//因为元素的变化范围已知，而且要求时间复杂度为n，所以采用桶排序。
string Sort(const string &str){
	//将字符串映射为数字，根据排列规律可知：小写对应的是2 *n， 大写是2 * n - 1.
	//然后再将数字转换为字符即可
	char *s = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	vector<int> bucketVec;
	bucketVec.resize(52);
	for(int i = 0; i < 52; ++i){
		bucketVec[i] = 0;
	}
	for(int i = 0; i < str.size(); ++i){
		if(str[i] >= 'a' && str[i] <= 'z'){
			++bucketVec[(str[i] - 'a') * 2];
		}
		if(str[i] >= 'A' && str[i] <= 'Z'){
			++bucketVec[(str[i] - 'A') * 2 - 1];
		}
	}
	string result;
	for(int i = 0; i < bucketVec.size(); ++i){
		for(int j = 0; j < bucketVec[i]; ++j){
			result.push_back(s[i]);
		}
	}
	return result;
 }

int main(){
	string s = "aandhdasJKHJHGHlkkjlfa";
	string s2 = Sort(s);
	return 0;
}