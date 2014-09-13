/************************************************************************/
/*
Given a linked list, write a function to reverse every k nodes (where k is an input to the function).

Example:
Inputs:  1->2->3->4->5->6->7->8->NULL and k = 3 
Output:  3->2->1->6->5->4->8->7->NULL. 

Inputs:   1->2->3->4->5->6->7->80->NULL and k = 5
Output:  5->4->3->2->1->8->7->6->NULL
*/
/************************************************************************/

struct Node{
	int nVal;
	struct Node * pNext;
	Node(int nValue)
		: nVal(nValue)
		, pNext(nullptr)
	{

	}
};

static void Reverse(Node *pPreHead, Node *pHead, Node *pEnd){
	Node *p = pHead;
	Node *q = nullptr;
	while(p != pEnd){
		//对于第一次进行逆运算，不要pPreHead
		if(pPreHead){
			pPreHead->pNext = p->pNext;
		}
		q = p->pNext;
		//将下一个元素插入最后一个元素后面
		p->pNext = pEnd->pNext;
		pEnd->pNext = p;
		p = q;//更新当前头结点
	}
}

Node* ReverseK(Node *pHead, int k){
	int count = 1;
	Node *pCurHead = pHead;//每轮转换的头指针
	Node *pFinalHead = nullptr;//最终的头指针
	Node *pPreHead = nullptr;//需要记录头指针之前的指针，因为是在一个链表内部逆操作

	for(Node* p = pHead; p != nullptr ; ){
		if(count == k){
 			Reverse(pPreHead, pCurHead, p);
 			//更新节点 
			if(pFinalHead == nullptr){
				pFinalHead = p;
			}

			pPreHead = pCurHead;
			pCurHead = pCurHead->pNext;
			p = pCurHead;
			count = 1;
		}
		else{
			++count;
			p = p->pNext;
		}
	}
	return pFinalHead;
}

//int main(){
//	Node a(1);
//	Node b(2);
//	Node c(3);
//	Node d(4);
//	Node e(5);
//	Node f(6);
//	Node g(7);
//	Node h(8);
//	Node i(9);
//	Node j(10);
//	Node k(11);
//
//	a.pNext = &b;
//	b.pNext = &c;
//	c.pNext = &d;
//	d.pNext = &e;
//	e.pNext = &f;
//	f.pNext = &g;
//	g.pNext = &h;
//	h.pNext = &i;
//	i.pNext = &j;
//	j.pNext = &k;
//
//	Node *p = ReverseK(&a, 3);
//	return 0;
//
//}