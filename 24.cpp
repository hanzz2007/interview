/******************************************************************************/
/* Given a binary tree, print out all of its root-to-leaf paths one per line.*/
/*****************************************************************************/

#include <vector>
#include <iostream>
using namespace std;
struct mNode{
	int nVal;
	mNode *pLeft;
	mNode *pRight;
	mNode(int nValue)
		: nVal(nValue)
		, pLeft(nullptr)
		, pRight(nullptr)
	{
	}
};

void PrintAllPath(vector<int> &pathVec, mNode *pNode){
	if(!pNode){
		for(int i = 0; i < pathVec.size(); ++i){
			cout << pathVec[i] << '\t';
		}
		cout << endl;
		return;
	}
	pathVec.push_back(pNode->nVal);
	//р╤вс╫з╣Ц
	if(!pNode->pLeft && !pNode->pRight){
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
//	mNode *a = new mNode(2);
//	mNode *b = new mNode(1);
//	mNode *c = new mNode(0);
//	mNode *d = new mNode(4);
//	mNode *e = new mNode(3);
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