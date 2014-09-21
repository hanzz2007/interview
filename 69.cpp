/************************************************************************/
/*实现单链表的逆转                                                          */
/************************************************************************/
#include <iostream>

struct ListNode{
	int key;
	ListNode *next;
	ListNode(int value):key(value), next(NULL){}
};
class Solution{
public:
	ListNode *ReverseList(ListNode *head){
		int len = 1;
		ListNode *p = head;
		while(p->next){
			++len;
			p = p->next;
		}
		ListNode *q = head;
		for(int i = 0; i < len; ++i){
			ListNode *temp = q;
			q = q->next;
			temp->next = p->next;
			p->next = temp;
		}
		return q;
	}
};
//
//int main(){
//	ListNode a(1);
//	ListNode b(2);
//	ListNode c(3);
//	ListNode d(4);
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	Solution solution;
//	solution.ReverseList(&a);
//	return 0;
//}