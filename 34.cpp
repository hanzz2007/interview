/************************************************************************/
/* 	Search for an element in an array which has elements who��s values 
    are first increasing and then decreasing. (Use modified binary search)                                                                     */
/************************************************************************/


/************************************************************************/
/* ����˼·��
	���Ȳ��ö��ֲ��ң��ҵ�split pos�����߽�㣬Ȼ��Ա߽������������ұ����������ֲ��ҡ�
	�߽��Ĳ��ҷ����������е��������ߵ���Ϣ���ж��е㴦���������仹���½����䣬Ȼ���������ǵ��������ǵݼ������䣨����һ�����䣩
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