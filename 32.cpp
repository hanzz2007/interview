/************************************************************************/
/*
    ��һ��������һ���Ƕ���������n���ڵ㣬����Ϊ0 - n-1.��һ������A������Ĵ�СΪn��
	�����ֵA[i]��ʾ�ڵ�i�ĸ��ڵ��id�����ڵ�ĸ��ڵ�idΪ-1��������A�������ĸ߶ȡ�
*/
/************************************************************************/
#include <vector>
using namespace std;


/*
����˼·��
	�ȱ���һ�����飬�ҵ�����Ҷ�ӽڵ㡣
	Ȼ����Ҷ�ӽڵ�Ϊ�����㣬���������ֱ���ҵ����ڵ�Ϊֹ��
*/
int GetTreeHeight(const vector<int> &data){
	vector<int> dataVec;
	dataVec.resize(data.size());
	for(int i = 0; i < data.size(); ++i){
		dataVec[i] = 0;
	}
	for(int i = 0; i < data.size(); ++i){
		if(data[i] != -1){
			dataVec[data[i]] = 1;
		}
	}

	int curCount = 0;
	for(int i = 0; i < dataVec.size(); ++i){
		if(dataVec[i] == 0){
			int sum = 1;
			int index = i;
			while(data[index] != -1){
				++sum;
				index = data[index];
			}
			if(sum > curCount){
				curCount = sum;
			}
		}
	}
	return curCount;
}

//int main(){
//	int n[] = {3,3,3,-1,2};
//	vector<int> data;
//	for(int i = 0; i < sizeof(n) / sizeof(n[0]); ++i){
//		data.push_back(n[i]);
//	}
//	int k = GetTreeHeight(data);
//	return 0;
//}