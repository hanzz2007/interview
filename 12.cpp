/************************************************************************/
/* 
Given two lists sorted in increasing order, create and return a new list representing the intersection of the two lists. The new list should be made with its own memory ¡ª the original lists should not be changed.

For example, let the first linked list be 1->2->3->4->6 and second linked list be 2->4->6->8, then your function should create and return a third list as 2->4->6.                                                                     */
/************************************************************************/

struct Node_
{
	int nVal;
	struct Node_ *pNext;
	Node_(int value)
		: nVal(value)
		, pNext(nullptr)
	{}
};

Node_ *Intersection(Node_ *p, Node_ *q){
	Node_ *pHead = nullptr;
	Node_ *pEnd = nullptr;
	while(p && q){
		if(p->nVal < q->nVal){
			p = p->pNext;
		}
		else if(p->nVal > q->nVal){
			q = q->pNext;
		}
		else{
			if(!pHead){
				pEnd = new Node_(p->nVal);
				pHead = pEnd;
			}
			else
			{
				pEnd->pNext = new Node_(p->nVal);
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
//	Node_ a(1);
//	Node_ b(2);
//	Node_ c(3);
//	Node_ d(4);
//	Node_ e(5);
//
//	Node_ f(2);
//	Node_ g(4);
//	Node_ h(7);
//
//	a.pNext = &b;
//	b.pNext = &c;
//	c.pNext = &d;
//	d.pNext = &e;
//
//	f.pNext = &g;
//	g.pNext = &h;
//
//	Node_ *p = Intersection(&a, &f);
//	return 0;
//
//}