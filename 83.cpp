/************************************************************************/
/* 给出一个数n，其中包含1，2，3，4这4个数字，写一个函数，输出n的某个变化数（重新排列n中的数字），使它能够被7整除  */
/************************************************************************/

#include <vector>
#include <set>
using namespace std;

class Solution{
public:
	int CalNumber(){
		set<int> data;
		data.insert(1);
		data.insert(2);
		data.insert(3);
		data.insert(4);
		GetNumber(data, 0);
		for(int i = 0; i < result.size(); ++i){
			if(result[i] % 7 == 0){
				return result[i];
			}
		}
		return -1;
	}
private:
	void GetNumber(const set<int> &data, int number){
		if(data.size() != 1){
			set<int> tempData(data.begin(), data.end());
			for(set<int>::iterator iter = data.begin(); iter != data.end(); ++iter){
				tempData = data;
				set<int> :: iterator delIter = tempData.find(*iter);
				tempData.erase(delIter);
				int expandNumber = number * 10 + *iter;
				GetNumber(tempData, expandNumber);
			}
		}
		else{
			number = *(data.begin()) + number * 10;
			result.push_back(number);
		}
	}
	vector<int> result;

};

//int main(){
//	Solution solution;
//	solution.CalNumber();
//	return 0;
//}