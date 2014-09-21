/*******************************************************
5！=5*4*3*2*1 = 120，包含1个0，请问对于100！包含多少个0？
********************************************************/
#include <vector>
#include <string>
#include <deque>
using namespace std;

class Solution{
public:
	int CalZeroNumber(){
		string data("1");

		for(int i = 2; i <= 57; ++i){
			int number = i;
			int count = 0;
			bool zeroFlag = false;
			string str = data;
			while(number){
				int multiplyNumber = number % 10;
				number /= 10;
					//first elem
					if(!count){
						if(multiplyNumber){
							multiplyCal(data, multiplyNumber);
						}
						else{
							zeroFlag = true;
						}
					}
					else{
						string multiplyNumberTwo = str;
						for(int i = 0; i < count; ++i){
							multiplyNumberTwo.push_back('0');
						}
						if(multiplyNumber){
							if(zeroFlag){
								multiplyCal(multiplyNumberTwo, multiplyNumber);
								data = multiplyNumberTwo;
								zeroFlag = false;
							}
							else{
								multiplyCal(multiplyNumberTwo, multiplyNumber);
								data = addCal(multiplyNumberTwo, data);
							}
						}
						else{
							data = multiplyNumberTwo;
							zeroFlag = true;
						}
					}
					++count;
			}
		}
		int sum = 0;
		for(int i = 0; i < data.size(); ++i){
			if(data[i] == '0'){
				++sum;
			}
		}
		return sum;
	}

	void multiplyCal(string &data, int multiplyNumber){
		int increaseNumber = 0;
		for(int j = data.size() - 1; j >= 0; --j){
			int result = (data[j] - '0') * multiplyNumber + increaseNumber;
			data[j] = result % 10 + '0';
			increaseNumber = result / 10;
		}
		if(increaseNumber){
			data.insert(data.begin(), increaseNumber +'0');
		}
	}

	string addCal(string &left, string &right){
		int increaseNumber = 0;
		deque<char> result;
		int j = right.size() - 1;
		int i = left.size() - 1;
		while(i >= 0 && j >= 0){
			int sum = left[i] - '0' + right[j] - '0' + increaseNumber;
			result.push_front(sum % 10 + '0');
			increaseNumber = sum / 10;
			--i;
			--j;
		}
		while(i >= 0){
			int sum = left[i] - '0' + increaseNumber;
			result.push_front(sum % 10 + '0');
			increaseNumber = sum / 10;
			--i;
		}
		while(j >= 0){
			int sum = right[j] - '0' + increaseNumber;
			result.push_front(sum % 10 + '0');
			increaseNumber = sum / 10;
			--j;
		}
		if(increaseNumber){
			result.push_front(increaseNumber + '0');
		}

		string s(result.begin(), result.end());
		return s;
	}

};

//int main(){
//	Solution solution;
//	solution.CalZeroNumber();
//	return 0;
//}