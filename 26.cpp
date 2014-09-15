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

//������a������ ������b���Һ��ӱȽϣ�����a���Һ�������b�����ӱȽϡ�
//���p��qһ��Ϊ�գ�һ���ǿ��򷵻ؼ�
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