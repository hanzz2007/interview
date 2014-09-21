/************************************************************************/
/*一个 url 指向的页面里面有另一个 url,最终有一个 url 指向之前出现过的 url 或空，这两
种情形都定义为 null。这样构成一个单链表。给两条这样单链表，判断里面是否存在同
样的 url。url 以亿级计，资源不足以 hash。                                   */
/************************************************************************/
#include <iostream>
//#include <vector>
using namespace std;

struct Node{
	int val;
	Node *next;
	Node(int value):val(value), next(NULL){}
};

class Solution{
public:
	bool IsInterset(Node *listA, Node *listB){
		Node *aNode;
		Node *bNode;
		bool kindA = CheckCycle(listA, &aNode);
		bool kindB = CheckCycle(listB, &bNode);
		if(kindA != kindB){
			return false;
		}
		if(kindA == false){
			if(aNode == bNode){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			Node*p = aNode->next;
			while(p != aNode){
				if(p == bNode){
					return true;
				}
				p = p->next;
			}
			return false;
		}
	}
private:
	bool CheckCycle(Node *head, Node **node){
		Node *pFast = head;
		Node *pSlow = head;

		while((pFast = pFast->next) != NULL && (pFast = pFast->next) != NULL){
			pSlow = pSlow->next;
			if(pFast == pSlow){
				*node =  pFast;
				return true;
			}
		}
		Node *end = head;
		while(end->next){
			end = end->next;
		}
		*node = end;
		return false;
	}
};

//int main(){
//	Node a(1);
//	Node b(2);
//	Node c(3);
//	Node d(4);
//	Node e(5);
//	Node f(6);
//	
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = &e;
//	e.next = &a;
//
//	f.next = &c;
//	
//
//	Solution solution;
//	solution.IsInterset(&f, &a);
//	return 0;
//}