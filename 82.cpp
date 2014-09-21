/************************************************************************/
/* 给定一组数，要求输出最后一个重复的数.*/
/* 例如： {1，2，3，4，2，3，1},输出1*/
/************************************************************************/
#include <vector>
#include <set>
using namespace std;

class Solution{
public:
	int FindLastRepeatElem(vector<int> dataVector){
		int lastElem = -1;
		set<int> repeatElemRecord;

		for(int i = 0; i < dataVector.size(); ++i){
			if(repeatElemRecord.find(dataVector[i]) == repeatElemRecord.end()){
				repeatElemRecord.insert(dataVector[i]);
			}
			else{
				lastElem = dataVector[i];
			}
		}

		return lastElem;
	}
};

//int main(){
//	Solution solution;
//	vector<int> dataVector;
//	int A[] = {1,1,2,3,1,3,4,5,1,2,3};
//	for(int i = 0; i < 11; ++i){
//		dataVector.push_back(A[i]);
//	}
//	solution.FindLastRepeatElem(dataVector);
//	return 0;
//}