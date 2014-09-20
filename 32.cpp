/************************************************************************/
/*
    有一棵树，不一定是二叉树。有n个节点，其编号为0 - n-1.有一个数组A，数组的大小为n。
	数组的值A[i]表示节点i的父节点的id。根节点的父节点id为-1给定数组A，求树的高度。
*/
/************************************************************************/
#include <vector>
using namespace std;


/*
解题思路：
	先遍历一遍数组，找到所有叶子节点。
	然后以叶子节点为出发点，逆向遍历，直到找到根节点为止。
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