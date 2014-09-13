/************************************************************************/
/* Write a function to connect all the adjacent nodes at the same level in a binary tree. Structure of the given Binary Tree node is like following.

struct node{
int data;
struct node* pLeft;
struct node* pRight;
struct node* pNextRight;  
}
Initially, all the pNextRight pointers point to garbage values. Your function should set these pointers to point next pRight for each node.

Example

Input Tree
A
/ \
B   C
/ \   \
D   E   F


Output Tree
A--->NULL
/ \
B-->C-->NULL
/ \   \
D-->E-->F-->NULL                                                                     */
/************************************************************************/


#include <list>
#include <vector>

using namespace std;

struct Node{
	int nVal;
	struct Node* pLeft;
	struct Node* pRight;
	struct Node* pNextRight;
	Node(int value)
		: nVal(value)
		, pLeft(nullptr)
		, pRight(nullptr)
		, pNextRight(nullptr)
	{

	}

};

void Connect(Node *root){
	list<Node *> queue;
	vector<Node *> backupVec;

	queue.push_back(root);
	queue.push_back(nullptr);
	while(!queue.empty()){
		while(queue.front() != nullptr){
			Node * p = queue.front();
			backupVec.push_back(p);
			queue.pop_front();
			if(p->pLeft){
				queue.push_back(p->pLeft);
			}
			if(p->pRight){
				queue.push_back(p->pRight);
			}
		}
		queue.pop_front();
		if(!queue.empty()){
			queue.push_back(nullptr);
		}
		for(int i = 0; i < backupVec.size() - 1; ++i){
			backupVec[i]->pNextRight = backupVec[i + 1];
		}
		backupVec.clear();
	}
}

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
//	Connect(&a);
//	//	SpiralPrint(&a);
//
//	return 0;
//}