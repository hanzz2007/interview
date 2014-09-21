/************************************************************************/
/* 28、搜狐笔试题：给定一个实数数组，按序排列（从小到大）
* ,从数组从找出若干个数，使得这若干个数的和与M最为接近，描述一个算法，并给出算法的复杂度 */
/************************************************************************/

#include <map>
#include <vector>
using namespace std;
class Solution{
public:
	Solution(){
		record.first = 10000;
	}
	vector<int> Closet(const vector<int> &argData, int target){
		data = argData;
		for(int i = 0 ; i < data.size(); ++i){
			if(abs(target - data[i]) < abs(record.first)){
				record.first = target - data[i];
				record.second.clear();
				record.second.push_back(data[i]);
			}
		}
		for(int i = data.size(); i >= 2; --i){
			vector<int> availRecord;
			GetCloset(0, data.size() - 1, i,target, availRecord);
		}
		return record.second;
	}
private:
	pair<int, vector<int> > record;
	vector<int> data;
	vector<vector<int> > zeroRecord;
	void GetCloset(int start, int end, int k, int target, vector<int> &tRecord){
		if(start >= end){
			return;
		}
		if(k == 2){
			int posLeft;
			int posRight;
			int result = TwoClosetSum(start, end, target, posLeft, posRight);
			if(abs(record.first) > abs(result) || result == 0){
				record.first = result;
				tRecord.push_back(data[posRight]);
				tRecord.push_back(data[posLeft]);
				record.second = tRecord;
				if(result == 0){
					zeroRecord.push_back(tRecord);
				}
			}
		}
		else{
			for(int i = start; i <= end; ++i){
				vector<int> temp = tRecord;
				temp.push_back(data[i]);
				GetCloset(i + 1, end, k - 1, target - data[i], temp);
			}
		}
	}
	int TwoClosetSum(int start, int end, int target, int &posLeft, int &posRight){
		int closet = 10000;
 
		int i = start, j = end;
		int sum = data[start] + data[end];
		while(i < j){
			if(abs(target - sum) < abs(target - closet)){
				closet = sum;
				posLeft = i;
				posRight = j;
			}
			if(sum == target){
				break;
			}
			else if(sum < target){
				++i;
				sum = data[i] + data[j];
			}
			else if(sum > target){
				--j;
				sum = data[j] + data[i];
			}
		}
		return target - closet;
	}

};

//int main(){
//	vector<int> data;
//	int A[] = {7,8,10,11,12};
//	for(int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
//		data.push_back(A[i]);
//	}
//	Solution solution;
//	solution.Closet(data, 8);
//	return 0;
//}