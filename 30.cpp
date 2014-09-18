/************************************************************************/
/* Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array.
   Elements for which no greater element exist, consider next greater element as -1.                                                                     */
/************************************************************************/

/************************************************************************/
/* ʹ��һ�����������¼��ǰԪ�أ��������������Ԫ�ش���������Ԫ�أ�������Ԫ�ص����ֵΪ��ǰԪ�أ�ɾ��������Ԫ�أ����ϵ���������
   ֱ��С������Ԫ�أ����ϵ��ظ��������                            */
/************************************************************************/

#include <vector>
#include <list>
using namespace std;

vector<int> NextGreat(const vector<int> &data){
	list<pair<int, int>> record;//first��ֵ��second���±�
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