/************************************************************************/
/* 给定一个无序链表，要求对其进行归并排序。                                     */
/************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

struct Node{
	int val;
	struct Node *next;
	Node(int value):val(value), next(NULL){}
};

class Solution{

public:
	void ListMergeSort(Node *head){
		Node *tail = head;
		while(tail->next){
			tail = tail->next;
		}
		Spilt(head, tail);

	}
	
private:
	void Spilt(Node *head, Node *tail){
		if(head == tail){
			return;
		}
		Node *mid = GetMidPoint(head, tail);
		Spilt(head, mid);
		Spilt(mid->next, tail);
		Merge(head, mid, tail);
		
	}
	Node *GetMidPoint(Node *head, Node *tail){
		Node *pFast = head, *pSlow = head;
		while((pFast = pFast->next) != tail && (pFast = pFast->next) != tail){
			pSlow = pSlow->next;
		}
		return pSlow;
	}

	void Merge(Node *head, Node *mid, Node *tail){
		vector<int> valContainer;
		Node *p = head;
		Node *q = mid->next;
		Node *endP = mid->next;
		Node *endQ = tail->next == NULL?NULL:tail->next;
		while(p != endP && q != endQ){
			Node *smallNode;
			if(p->val < q->val){
				//valContainer.push_back(p->val);

				p = p->next;
			}
			else{
				valContainer.push_back(q->val);
				q = q->next;
			}
		}
		while(p != endP){
			valContainer.push_back(p->val);
			p = p->next;
		}
		while(q != endQ){
			valContainer.push_back(q->val);
			q = q->next;
		}
		p = head;
		for(int i = 0; i < valContainer.size(); ++i){
			p->val = valContainer[i];
			p = p->next;
		}
	}
};

//int main(){
//
//	Node a(4);
//	Node b(7);
//	Node c(6);
//	Node d(1);
//	//Node e(3);
//	//Node f(8);
//	//Node g(5);
//
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	//d.next = &e;
//	//e.next = &f;
//	//f.next = &g;
//
//	Solution solution;
//	solution.ListMergeSort(&a);
//
//	return 0;
//}
