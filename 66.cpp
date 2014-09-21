/************************************************************************/
/*һ�� url ָ���ҳ����������һ�� url,������һ�� url ָ��֮ǰ���ֹ��� url ��գ�����
�����ζ�����Ϊ null����������һ�������������������������ж������Ƿ����ͬ
���� url��url ���ڼ��ƣ���Դ������ hash��                                   */
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