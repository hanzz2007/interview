/*
	一个整数数列，元素取值可能是 0~65535 中的任意一个数，相同数值不会重复出现。0 是例外，可以反复出现。
	请设计一个算法，当你从该数列中随意选取5个数值，判断这5个数值是否连续相邻。
	注意：
	- 5 个数值允许是乱序的。比如：8 7 5 0 6
	- 0 可以通配任意数值。比如：8 7 5 0 6 中的 0 可以通配成 9 或者 4
	- 0 可以多次出现。
	-  复杂度如果是 O(n2)则不得分
*/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool IsAdjacent(const vector <int> &data){
	vector<int> data2 = data;
	sort(data2.begin(), data2.end());
	int nZeroNum = 0;
	int nDiffNum = 0;
	for(int i = 0; i < data2.size() - 1; ++i){
		if(data2[i] == 0){
			++nZeroNum;
		}
		else{
			nDiffNum += data2[i + 1] - data2[i] - 1;
		}
	}

	return nDiffNum <= nZeroNum;
}
int main(){
	vector<int> data;
	data.push_back(1);
	data.push_back(7);
	data.push_back(4);
	data.push_back(5);
	data.push_back(0);
	cout << IsAdjacent(data) << endl;

	return 0;
}

/******
解题思路：
先对元素排序，然后再统计0出现的次数与相邻元素之间间隔元素数。如果零出现的个数大于间隔的元素数，则表示可以，否则不可以
*******/