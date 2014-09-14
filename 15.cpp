/************************************************************************/
/* To find if there is any root to leaf path with specified sum in a binary tree.*/
/************************************************************************/
#include <iostream>
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

static bool bFlag = false;

void BinTravel(int nSearchSum, int nCurSum, Node *node){
	//到达叶子节点
	if(!node->pLeft && !node->pRight){
		if(nSearchSum == nCurSum + node->nVal){
			bFlag = true;
		}
	}
	else{
		//遍历整棵树来搜索
		if(node->pLeft != nullptr){
			BinTravel(nSearchSum, nCurSum + node->nVal, node->pLeft);
		}
		if(node->pRight != nullptr){
			BinTravel(nSearchSum, nCurSum +  node->nVal, node->pRight);
		}
	}
}
void ExistCheck(int nSearchNum, Node *root){
	BinTravel(nSearchNum, 0, root);
}

//int main(){
//	Node a(2);
//	Node b(1);
//	Node c(3);
//	Node d(4);
//	Node e(5);
//	Node f(6);
//	Node g(7);
//
//	a.pLeft = &b;
//	a.pRight = &c;
//	b.pLeft = &d;
//	b.pRight = &e;
//	c.pLeft = &f;
//	c.pRight = &g;
//
//	ExistCheck(7, &a);
//
//	return 0;
//}
