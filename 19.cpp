/************************************************************************/
/* 	Two trees are identical when they have same data and arrangement of data is also same.write a fucntion to check if two trees are indetical*/
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


bool IsIdentical(Node *a, Node *b){
	if(!a && !b){
		return true;
	}
	if(a && b && a->nVal == b->nVal){
		return IsIdentical(a->pLeft, b->pLeft) && IsIdentical(a->pRight , b->pRight);
	}
	return false;
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
//
//	Node a_(2);
//	Node b_(1);
//	Node c_(0);
//	Node d_(4);
//	Node e_(5);
//
//	a_.pLeft = &b_;
//	b_.pLeft = &d_;
//	b_.pRight = &e_;
//	//d_.pLeft = &c_;
//
//	bool r = IsIdentical(&a, & a_);
//
//
//	return 0;
//}