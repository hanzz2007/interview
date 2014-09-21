/************************************************************************/
/* RGB排序，一个字符串，里面只有三种字符RGB，所有的R都在G的前面，所有的G都在B的前面。
* 将给定字符串按照此规律排序。要求不允许用辅助空间，复杂度控制在O(N)。遍历一遍就排好序。*/
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