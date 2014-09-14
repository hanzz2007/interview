/************************************************************************/
/* : There is a binary tree of size N. All nodes are numbered between 1-N(inclusive).
     There is a N*N integer matrix Arr[N][N], all elements are initialized to zero.
	 So for all the nodes A and B, put Arr[A][B] = 1 if A is an ancestor of B (NOT just the immediate ancestor). */
/************************************************************************/
#include <vector>
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

void Merge(vector<int> &elem1,vector<int> &elem2){
	assert(elem1.size() == elem2.size());
	for(int i = 0; i < elem1.size(); ++i){
		if(elem2[i] == 1){
			elem1[i] = 1;
		}
	}
}
void BinTreeSearch(Node *node, vector<vector<int>> &Arr){
	if(node->pLeft){
		BinTreeSearch(node->pLeft, Arr);
		Merge(Arr[node->nVal], Arr[node->pLeft->nVal]);
		Arr[node->nVal][node->pLeft->nVal] = 1;
	}
	if(node->pRight){
		BinTreeSearch(node->pRight, Arr);
		Merge(Arr[node->nVal], Arr[node->pRight->nVal]);
		Arr[node->nVal][node->pRight->nVal] = 1;
	}
}

//int main(){
//	Node a(2);
//	Node b(1);
//	Node c(0);
//	Node d(4);
//	Node e(3);
//	
//	a.pLeft = &b;
//	a.pRight = &c;
//
//	b.pLeft = &d;
//	b.pRight = &e;
//
//	vector<vector<int>> Arr;
//	Arr.resize(5);
//	for(int i = 0; i < 5; ++i){
//		Arr[i].resize(5);
//	}
//	BinTreeSearch(&a, Arr);
//	return 0;
//}