/************************************************************************/
/* Size() function recursively calculates the size of a tree.write a function calculate the size of a tree*/
/************************************************************************/

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


int Size(Node *pNode){
	if(!pNode){
		return 0;
	}
	return Size(pNode->pLeft) + Size(pNode->pRight) + 1;
}

//int main(){
//	Node a(2);
//	Node b(1);
//	Node c(0);
//	Node d(4);
//	Node e(3);
//
//	a.pLeft = &b;
//	
//
//	b.pLeft = &d;
//	b.pRight = &e;
//	d.pLeft = &c;
//	int k = Size(&a);
//	return 0;
//}