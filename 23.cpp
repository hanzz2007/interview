/************************************************************************/
/* �������������������ö�����                                             */
/************************************************************************/
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

struct Node{
	int nVal;
	Node *pLeft;
	Node *pRight;
	Node(int nValue)
		: nVal(nValue)
		, pLeft(nullptr)
		, pRight(nullptr)
	{
	}
};
/*
1:�ȴ���������ҵ����ڵ㣬Ȼ�����������õ����������ĸ��������ҵ�����Ȼ���Ը�����������Ϊ�ֽ磩����֪�����������ǰ�벿��Ҳ���������ģ�����ֻҪ�������������ͬ���Ƚ�ȡ���ɡ�
Ȼ��ݹ��������������ͬ���ı���
*/
void RebuildBinTree(const vector<int> &preOrder, const vector<int> &inOrder, Node *pNode){
	int value = preOrder[0];
	auto iter = find(inOrder.begin(), inOrder.end(), value);
	assert(iter != inOrder.end());
	pNode->nVal = value;
	if(iter != inOrder.begin()){
		int len = iter - inOrder.begin();
		const vector<int> leftInVec(inOrder.begin(), iter);
		const vector<int> leftPreVec(preOrder.begin() + 1, preOrder.begin() + len + 1) ;
		pNode->pLeft = new Node(0);
		RebuildBinTree(leftPreVec, leftInVec, pNode->pLeft);
	}
	if(iter != inOrder.end() - 1){
		int len = iter - inOrder.begin();
		const vector<int> rightInVec(iter + 1, inOrder.end());
		const vector<int> rightPreVec(preOrder.begin() + len + 1, preOrder.end());
		pNode->pRight = new Node(0);
		RebuildBinTree(rightPreVec, rightInVec, pNode->pRight);
	}
}


//int main(){
//	int preArray[] = {1,2,4,8,5,9,3,6,7};
//	int inArray[] = {8,4,2,5,9,1,6,3,7};
//
//	vector<int> preOrder;
//	vector<int> inOrder;
//
//	for(int i = 0; i < sizeof(preArray) / sizeof(preArray[0]); ++i){
//		preOrder.push_back(preArray[i]);
//	}
//
//	for(int i = 0; i < sizeof(inArray) / sizeof(inArray[0]); ++i){
//		inOrder.push_back(inArray[i]);
//	}
//
//	Node *root = new Node(0);
//	RebuildBinTree(preOrder, inOrder, root);
//	return 0;
//}