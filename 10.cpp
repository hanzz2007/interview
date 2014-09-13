/************************************************************************/
/* Write a function to print spiral order traversal of a tree.           */
/************************************************************************/
#include <deque>
#include <vector>
#include <iostream>
using namespace std;

struct Node{
	int nVal;
	Node *pLeft;
	Node *pRight;
	Node(int nValue)
		: nVal(nValue)
		, pLeft(nullptr)
		, pRight(nullptr)
	{}

};
void SpiralPrint(Node * root){
	deque<Node *> queue;
	vector<int> dataVec;
	queue.push_back(root);
	queue.push_back(nullptr);
	int counter = 1;
	while(!queue.empty()){
		while(queue.front() != nullptr){
			Node *p = queue.front();
			dataVec.push_back(p->nVal);
			if(p->pLeft){
				queue.push_back(p->pLeft);
			}
			if(p->pRight){
				queue.push_back(p->pRight);
			}
			queue.pop_front();
		}
		queue.pop_front();
		if(!queue.empty()){
			queue.push_back(nullptr);
		}
		if(counter % 2){
			for(auto iter = dataVec.begin(); iter != dataVec.end(); ++iter){
				cout << *iter << "\t";
			}
			cout << endl;
			counter = 2;
			dataVec.clear();
		}
		else{
			for(auto iter = dataVec.rbegin(); iter != dataVec.rend(); ++iter){
				cout << *iter << "\t";
			}
			cout << endl;
			counter = 1;
			dataVec.clear();
		}
	}
}
//
//int main(){
//	Node a(1);
//	Node b(2);
//	Node c(3);
//	Node d(4);
//	Node e(5);
//	Node f(6);
//	Node g(7);
//	
//	a.pLeft = &b;
//	a.pRight = &c;
//	b.pLeft = &d;
//	b.pRight = &e;
//	c.pLeft = &f;
//	c.pRight = &g;
//
//	SpiralPrint(&a);
//
//	return 0;
//}