/************************************************************************/
/* 
 * �������ų���С���������顢�㷨����
	��Ŀ������һ�����������飬���������������ų�һ������������ų���������������С��һ����
	������������{32,   321}����������������ųɵ���С���� 32132��
	��������������㷨����֤�����㷨��                                        */
/************************************************************************/
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>
using namespace std;
class Solution{
public:
	string GetLongest(vector<int> &number){
		vector<vector<string> >stringNumber;
		stringNumber.resize(9);

		for(int i = 0; i < number.size(); ++i){
			string str;
			stringstream ss;
			ss << number[i];
			ss >> str;
			stringNumber[str[0] - '0'].push_back(str);
		}
		for(int i = 0; i < stringNumber.size(); ++i){
			sort(stringNumber[i].begin(), stringNumber[i].end());
		}
		string result;
		for(int i = 0; i < stringNumber.size(); ++i){
			for(int j = 0; j < stringNumber[i].size(); ++j){
				result.insert(result.end(), stringNumber[i][j].begin(), stringNumber[i][j].end());
			}
		}
		//stringstream ss;
		//long resultLong;
		//ss << result;
		//ss >> resultLong;
		return result;
	}
};

//int main(){
//	vector<int> data;
//	data.push_back(123);
//	data.push_back(1234);
//	data.push_back(125);
//	data.push_back(234);
//	data.push_back(245);
//	data.push_back(12);
//	data.push_back(345);
//	data.push_back(6);
//	data.push_back(199);
//
//	Solution solution;
//	cout << solution.GetLongest(data);
//
//	return 0;
//}