/************************************************************************/
/* 一个正整数集合，求数C使得C= A + B，而且A，B , C 均在集合中，要保证C最大      */
/************************************************************************/
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

int GetMaxElem(const vector<int> &data){

	assert(data.size() >= 3);
	vector<int> temp = data;
	sort(temp.begin(), temp.end());
 	for(int i = temp.size() - 1; i >= 2; --i){
		if(temp[i] - temp[i - 1] >= temp[i - 1]){
			continue;
		}
		int j = 0, k = i - 1;
		while(j != k){
			if(temp[j] + temp[k] < temp[i]){
				++j;
			}
			else if(temp[j] + temp[k] > temp[i]){
				--k;
			}
			else{
				return temp[i];
			}
		}
	}
	return -1;
}

//int main(){
//	vector<int> data;
//	data.push_back(1);
//	data.push_back(2);
//	data.push_back(4);
//	data.push_back(5);
//	data.push_back(9);
//	data.push_back(10);
//	data.push_back(12);
//	data.push_back(23);
//	data.push_back(13);
//	int k = GetMaxElem(data);
//	return 0;
//}