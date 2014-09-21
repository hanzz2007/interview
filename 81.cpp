/************************************************************************/
/* ��֪����A��B��Ԫ�طֱ��ò���ͷ���ĵ�����洢������difference()������⼯��A��B�Ĳ��
 * ������������ڼ���A�ĵ������С�
 * ���磬������A={5,10,20,15,25,30}������B={5,15,35,25}����ɼ����A={10,20,30}��*/
/************************************************************************/
#include <vector>
#include <algorithm>
using namespace std;


struct Node
{
	int value;
	Node* next;
	Node(int val):value(val), next(NULL){}
};
class Solution{
public: 
	void difference(Node *A, Node *B){
		vector<int> aNodeVector;
		vector<int> bNodeVector;
		vector<int> result;
		Node *p = A;
		Node *q = B;
		while(p){
			aNodeVector.push_back(p->value);
			p = p->next;
		}
		while(q){
			bNodeVector.push_back(q->value);
			q = q->next;
		}

		sort(aNodeVector.begin(), aNodeVector.end());
		sort(bNodeVector.begin(), bNodeVector.end());
		int i = 0, j = 0;
		while(i < aNodeVector.size() && j < bNodeVector.size()){
			if(aNodeVector[i] < bNodeVector[j]){
				result.push_back(aNodeVector[i]);
				++i;
			}
			else{
				if(aNodeVector[i] == bNodeVector[j]){
					++i;
					++j;
				}
				else{
					++j;
				}
			}
		}
		while(i < aNodeVector.size()){
			result.push_back(aNodeVector[i]);
			++i;
		}
		p = A;
		for(int k = 0; k < result.size(); ++k, p = p->next){
			p->value = result[k];
		}
		//while(p){
		//	q = p;
		//	p = p->next;
		//	free(q);
		//}
	}
};


 
//int main(){
//	Node a(5);
//	Node b(40);
//	Node c(50);
//	Node d(10);
//	Node e(20);
//	Node f(30);
//
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = &e;
//	e.next = &f;
//
//
//	Node g(5);
//	Node h(10);
//	Node i(20);
//	Node j(30);
//
//	g.next = &h;
//	h.next = &i;
//	i.next = &j;
//
//	Solution solution;
//	solution.difference(&a, &g);
//
//	return 0;
//}