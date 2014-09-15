/************************************************************************/
/* Write a C program to Delete a Tree                                   */
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

void DeleteTree(Node *pNode){
	if(!pNode){
		return;
	}
	DeleteTree(pNode->pLeft);
	DeleteTree(pNode->pRight);
 	delete pNode;
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
//	DeleteTree(a);
//
//	return 0;
//}