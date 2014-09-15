/***
Given root of binary search tree and K as input, find K-th smallest element in BST
***/
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

static int gResult;
static int gCount;

//通过中序遍历，每次访问元素都递增1.
//第k个访问的元素即需要的元素
static void InorderTravel(Node *pNode, int k){
	if(!pNode){
		return;
	}
	InorderTravel(pNode->pLeft, k);
	if(++gCount == k){
		gResult = pNode->nVal;
	}
	InorderTravel(pNode->pRight, k);
}
int GetKMin(Node *pNode, int k){
	InorderTravel(pNode, k);
	int result = gResult;
	gResult = 0;
	gCount = 0;
	return result;
}

//int main(){
//	Node a(20);
//	Node b(8);
//	Node c(22);
//	Node d(4);
//	Node e(12);
//	Node f(10);
//	Node g(14);
//
//	a.pLeft = &b;
//	a.pRight = &c;
//	b.pLeft = &d;
//	b.pRight = &e;
//	e.pLeft = &f;
//	e.pRight = &g;
//
//	int k = GetKMin(&a, 3);
//
//	return 0;
//}
//

