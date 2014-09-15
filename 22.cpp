/******************************************************************************/
/* Write an Efficient C Function to Convert a Binary Tree into its Mirror Tree*/
/******************************************************************************/

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


void MirrorTree(Node *pNode){
	if(!pNode){
		return;
	}
	MirrorTree(pNode->pLeft);
	MirrorTree(pNode->pRight);
	Node *pTemp = pNode->pLeft;
	pNode->pLeft = pNode->pRight;
	pNode->pRight = pTemp;
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
//	MirrorTree(a);
//	return 0;
//}