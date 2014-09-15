/************************************************************************/
/* Write a C Program to Find the Maximum Depth or Height of a Tree      */
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


int GetMaxHeight(int height, Node *pNode){
	if(!pNode){
		return height;
	}
	int leftHeight = height;
	int rightHeight = height;

	leftHeight = GetMaxHeight(height, pNode->pLeft);
	rightHeight =  GetMaxHeight(height, pNode->pRight);
	return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

//int main(){
//	Node a(2);
//	Node b(1);
//	Node c(0);
//	Node d(4);
//	Node e(3);
//
//	a.pLeft = &b;
//	b.pLeft = &d;
//	b.pRight = &e;
//	d.pLeft = &c;
//	int k = GetMaxHeight(0, &a);
//	return 0;
//}