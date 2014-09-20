/************************************************************************/
/* 	Search for an element in an array which has elements who’s values 
    are first increasing and then decreasing. (Use modified binary search)                                                                     */
/************************************************************************/


/************************************************************************/
/* 解题思路：
	首先采用二分查找，找到split pos。即边界点，然后对边界点的左边区间和右边区间做二分查找。
	边界点的查找方法，利用中点左右两边的信息来判断中点处于上升区间还是下降区间，然后再搜索非递增或者是递减的区间（另外一个区间）
*/
/************************************************************************/
#include <vector>
#include <cassert>
using namespace std;

bool func1(int a, int b){
	return a < b;
}
bool func2(int a, int b){
	return b < a;
}

static int BinSearch(const vector<int> &data, int beg, int end, int key, bool(*p)(int, int)){
	if(beg == end){
		if(data[beg] == key){
			return beg;
		}
		return -1;
	}
	int mid = (beg + end) / 2;
	if(data[mid] == key){
		return mid;
	}
	if(p(data[mid], key)){
		return BinSearch(data, mid + 1, end, key, p);
	}
	return BinSearch(data, beg, mid - 1, key, p);
}

 

static int GetSplitPos(const vector<int> &data, int beg, int end){
	if(beg == end - 1){
		if(data[beg] < data[end]){
			return end;
		}
		return end;
	}
	int mid = (beg + end) / 2;
	assert(mid - 1 >= 0 && mid + 1 < data.size());

	if(data[mid - 1] < data[mid] && data[mid] > data[mid + 1]){
		return mid;
	}
	if(data[mid - 1] < data[mid] && data[mid] < data[mid + 1]){
		return GetSplitPos(data, mid + 1, end);
	}
	if(data[mid - 1] > data[mid] && data[mid] > data[mid + 1]){
		return GetSplitPos(data, beg, mid - 1);
	}
}

int Find(const vector<int> &data, int key){
	assert(data.size() >= 3);
	int splitPos = GetSplitPos(data, 0 , data.size() - 1);
	int result = BinSearch(data, 0, splitPos, key, func1);
	if(result == -1){
		result = BinSearch(data, splitPos , data.size() - 1, key, func2);
	}
	return result;
}

int main(){
	int n[] = {1,4,2};
	vector<int> data;
	for(int i = 0; i < sizeof(n) / sizeof(n[0]); ++i){
		data.push_back(n[i]);
	}

	int k = Find(data,2);
	return 0;
}