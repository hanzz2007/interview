/************************************************************************/
/* Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array.
   Elements for which no greater element exist, consider next greater element as -1.                                                                     */
/************************************************************************/

/************************************************************************/
/* 使用一个链表，链表记录当前元素，如果正在搜索的元素大于链表首元素，则令首元素的输出值为当前元素，删除链表首元素，不断的搜索链表，
   直到小于链表元素，不断的重复这个过程                            */
/************************************************************************/

#include <vector>
#include <list>
using namespace std;

vector<int> NextGreat(const vector<int> &data){
	list<pair<int, int>> record;//first是值，second是下标
	vector<int> result;
	result.resize(data.size());
	for(int i = 0; i < result.size(); ++i){
		result[i] = -1;
	}

	for(int i = 0; i <data.size(); ++i){
		while(!record.empty() && data[i] > record.front().first){
 				result[record.front().second] = data[i];
				record.pop_front();
		}
		record.push_front(make_pair(data[i] , i));
	}

	return result;
}

//int main(){
//	int n[] = {4, 5, 2, 25};
//	vector<int> data;
//	for(int i = 0; i < sizeof(n) / sizeof(n[0]); ++i){
//		data.push_back(n[i]);
//	}
//
//	NextGreat(data);
//	return 0;
//}