/************************************************************************/
/* 
Given two lists sorted in increasing order, create and return a new list representing the intersection of the two lists. The new list should be made with its own memory ¡ª the original lists should not be changed.

For example, let the first linked list be 1->2->3->4->6 and second linked list be 2->4->6->8, then your function should create and return a third list as 2->4->6.                                                                     */
/************************************************************************/

struct Node
{
	int nVal;
	struct Node *pNext;
	Node(int value)
		: nVal(value)
		, pNext(nullptr)
	{}
};

Node *Intersection(Node *p, Node *q){
	Node *pHead = nullptr;
	Node *pEnd = nullptr;
	while(p && q){
		if(p->nVal < q->nVal){
			p = p->pNext;
		}
		else if(p->nVal > q->nVal){
			q = q->pNext;
		}
		else{
			if(!pHead){
				pEnd = new Node(p->nVal);
				pHead = pEnd;
			}
			else
			{
				pEnd->pNext = new Node(p->nVal);
				pEnd = pEnd->pNext;
			}
			p = p->pNext;
			q = q->pNext;
		}
	}
	return pHead;
}
//
//int main(){
//	Node a(1);
//	Node b(2);
//	Node c(3);
//	Node d(4);
//	Node e(5);
//
//	Node f(2);
//	Node g(4);
//	Node h(7);
//
//	a.pNext = &b;
//	b.pNext = &c;
//	c.pNext = &d;
//	d.pNext = &e;
//
//	f.pNext = &g;
//	g.pNext = &h;
//
//	Node *p = Intersection(&a, &f);
//	return 0;
//
//}