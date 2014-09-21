/************************************************************************/
/* RGB����һ���ַ���������ֻ�������ַ�RGB�����е�R����G��ǰ�棬���е�G����B��ǰ�档
* �������ַ������մ˹�������Ҫ�������ø����ռ䣬���Ӷȿ�����O(N)������һ����ź���*/
/************************************************************************/
#include <string>
#include <algorithm>
using namespace std;
class Solution{
public:
	void ReRange(string &str){
		int pointR = 0, pointG = str.size() - 1, pointB = str.size() - 1;
		while(pointR < pointG){
			while(str[pointR] == 'R' && pointR < str.size()){
				++pointR;
			}
			while(str[pointG] != 'R' && pointG >= 0){
				if(str[pointG] == 'B' && pointG != str.size() - 1){
					//swap
					if(str[pointB] == 'B'){
						swap(str[pointG], str[pointB - 1]);
						--pointB;
					}
					else{
						swap(str[pointG], str[pointB]);
					}
				}
				--pointG;
			}

			if(pointR < pointG){
				swap(str[pointR], str[pointG]);
			}

		}
	}
};

//int main(){
//	//string str("RRBBGGRBGBGRBGGRBGBBBBBGR");
//	string str("RRRRRGGG");
//	Solution solution;
//	solution.ReRange(str);
//	return 0;
//}