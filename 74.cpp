/************************************************************************/
/* ����һ�������ͷ��㣬��β��ͷ���������ÿ������ֵ                            */
/************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

struct ListNode{
	int m_nkey;
	ListNode* m_pNext;
};


void ReversePrint(ListNode *head){
	vector<ListNode *> stack;
	while(head){
		stack.push_back(head);
		head = head->m_pNext;
	}
	for(int i = stack.size() - 1; i >= 0; --i){
		cout << stack[i]->m_nkey;
	}
}

//int main(){
//	ListNode a;
//	ListNode b;
//	ListNode c;
//
//	a.m_nkey = 1;
//	a.m_pNext = &b;
//	b.m_nkey = 2;
//	b.m_pNext = &c;
//	c.m_nkey = 3;
//	c.m_pNext = NULL;
//
//	ReversePrint(&a);
//	return 0;
//}
