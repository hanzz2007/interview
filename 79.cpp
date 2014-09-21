/************************************************************************/
/* Œ¢»Ì±  ‘±‡≥ÃÃ‚£∫
 * given a singly linked list L:(L0, L1, L2,...Ln),write a program to 
 * reorder it so that it becomes:(L0,Ln,L1,Ln - 1,...)*/
/************************************************************************/

#include <iostream>
struct Node
{
	int val_;
	Node * next;
	Node(int value):val_(value), next(NULL){}
};
class Solution{
public:
	void Reorder(Node *head){
		int len = GetLen(head);
		if(len <= 2){
			return;
		}
		int splitPos = len - int(len / 2);
		Node *p = GetNode(head, splitPos - 1);
		Node *q = p->next;
		p->next = NULL;
		q = RotateList(q);
		p = head;
		while(p && q){
			Node *tempQ = q;
			Node *tempP = p;
			q = q->next;
			p = p->next;
			tempQ->next = tempP->next;
			tempP->next = tempQ;
		}
	}
private:
	Node *GetNode(Node *head, int pos){
		int i = 0; 
		while(head && i < pos){
			head = head->next;
			++i;
		}
		return head;
	}
	int GetLen(const Node *head){
		if(!head){
			return 0;
		}
		int len = 1;
		while(head){
			++len;
			head = head->next;
		}
		return len;
	}

	Node* RotateList(Node *head){
		Node *rotateHead = NULL;
		while(head){
			if(!rotateHead){
				rotateHead = head;
				head = head->next;
				rotateHead->next = NULL;
			}
			else{
				Node *p = head;
				head = head->next;
				p->next = rotateHead;
				rotateHead = p;
			}
		}
		return rotateHead;
	}
};

//int main(){
//	Node a(1);
//	Node b(2);
//	Node c(3);
//	//Node d(4);
//	//Node e(5);
//	//Node f(6);
//	//Node g(7);
//	//Node h(2);
//	a.next = &b;
//	b.next = &c;
//	//c.next = &d;
//	//d.next = &e;
//	//e.next = &f;
//	//f.next = &g;
//	Solution solution;
//	solution.Reorder(&a);
//	return 0;
//}