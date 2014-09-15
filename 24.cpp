/******************************************************************************/
/* Given a binary tree, print out all of its root-to-leaf paths one per line.*/
/*****************************************************************************/

#include <vector>
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

void PrintAllPath(vector<int> &pathVec, Node *pNode){
	pathVec.push_back(pNode->nVal);
	//р╤вс╫з╣Ц
	if(!pNode->pLeft && !pNode->pRight){
		for(int i = 0; i < pathVec.size(); ++i){
			cout << pathVec[i] << '\t';
		}
		cout << endl;
	}
	else{
		if(pNode->pLeft){
			PrintAllPath(pathVec, pNode->pLeft);
		}
		if(pNode->pRight){
			PrintAllPath(pathVec, pNode->pRight);
		}
	}
	pathVec.pop_back();
}

//int main(){
//	Node *a = new Node(2);
//	Node *b = new Node(1);
//	Node *c = new Node(0);
//	Node *d = new Node(4);
//	Node *e = new Node(3);
//
//	a->pLeft = b;
//	b->pLeft = d;
//	b->pRight = e;
//	d->pLeft = c;
//
//	vector<int> pathVec;
//	PrintAllPath(pathVec, a);
//	return 0;
//}