/************************************************************************/
/*题目：输入一个正数 n，输出所有和为 n 连续正数序列。
例如输入 15，由于 1+2+3+4+5=4+5+6=7+8=15，所以输出 3 个连续序列 1-5、 4- 6 和 7-8。
分析：这是网易的一道面试题*/
/************************************************************************/
/************************************************************************/
/* 解法：
 * 首先设置两个指针，一个指向首部，一个指向尾部，如果sum > n.则前移首部指针，如果sum < n则前移尾部指针。可以尾部指针最多在 n / 2 + 1处终止。*/
/************************************************************************/
#include <vector>
#include <map>
using namespace std;

class Solution{
public:
	vector<pair<int, int> > GetSequence(int n){
		vector<pair<int, int> > result;
		int sum = 0;
		int startPos = 1;
		int endPos = startPos;
		for(; sum <= n; ++endPos){
			sum += endPos;
			if(sum == n){
				result.push_back(make_pair(startPos, endPos));
			}
		}
		--endPos;//strange , after it break out the loop, endPos still plus one
		sum -= startPos;
		++startPos;

		while(endPos <  n / 2 + 2){
			if(sum > n){
				sum -= startPos;
				++startPos;
			}
			else{
				if(sum == n){
					result.push_back(make_pair(startPos, endPos));
				}
				++endPos;
				sum += endPos;
			}
		}
		return result;
	}
};

//int main(){
//	Solution solution;
//	solution.GetSequence(130);
//	return 0;
//}