/************************************************************************/
/* Question: Given a binary tree, find out if the tree can be folded or not.

A tree can be folded if left and right subtrees of the tree are structure wise mirror image of each other. An empty tree is considered as foldable.

Consider the below trees:
(a) and (b) can be folded.
(c) and (d) cannot be folded.

(a)
  10
/    \
7      15
 \    /
 9  11

(b)
10
/  \
7    15
/      \
9       11

(c)
10
/  \
7   15
/    /
5   11

(d)

10
/   \
7     15
/  \    /
9   10  12                                                                     */
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

//将子树a的左孩子 与子树b的右孩子比较，将树a的右孩子与树b的左孩子比较。
//如果p与q一个为空，一个非空则返回假
bool Isfolded(Node *p, Node *q){
	if(!p && !q)
	{
		return true;
		
	}else if(p && q){
		return Isfolded(p->pLeft, q->pRight) && Isfolded(p->pRight, q->pLeft);
	}
	return false;
}

//int main(){
//	Node *root = new Node(1);
//	root->pLeft        = new Node(2);
//	root->pRight       = new Node(3);
//	root->pLeft->pRight  = new Node(4);
//	root->pRight->pLeft = new Node(5);
//
//	bool result = Isfolded(root->pLeft, root->pRight);
//	return 0;
//}