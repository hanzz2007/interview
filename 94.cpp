/************************************************************************/
/* 给定一棵二叉树。求树中两个节点的共同祖先                                     */
/************************************************************************/
#include <vector>


using namespace std;

struct Node{
	int value;
	Node *left;
	Node *right;
	Node(int val):value(val), left(NULL), right(NULL){}
};

class Solution{
public:
	Node *GetAncester(Node *root, Node *targetP, Node *targetQ){

		if(!root || !targetP || !targetQ){
			return NULL;
		}
		p = targetP;
		q = targetQ;

		parent.push_back(root);
		MidTravel(root);

		
		if(pContainer.empty() || qContainer.empty()){
			return NULL;
		}

		int i = 0, j = 0;
		while(i < pContainer.size() && j < qContainer.size()){
			if(pContainer[i] != qContainer[j]){
				return pContainer[i - 1];
			}
			else{
				++i;
				++j;
			}
		}
	}
private:
	void MidTravel(Node *node){
		if(node->left){
			parent.push_back(node->left);
			MidTravel(node->left);
		}
		if(node == p){
			pContainer.insert(pContainer.end(), parent.begin(), parent.end());
		}
		else{
			if(node == q){
				qContainer.insert(qContainer.end(), parent.begin(), parent.end());
			}
		}
		if(node->right){
			parent.push_back(node->right);
			MidTravel(node->right);
		}
		parent.pop_back();
	}

	Node *p;
	Node *q;
	vector<Node *> pContainer;
	vector<Node *> qContainer;
	vector<Node *> parent;
};

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
//
//	a.left = &b;
//	a.right = &c;
//	b.left = &d;
//	b.right = &e;
//	c.left = &f;
//	c.right = &g;
//	d.left = &h;
//	e.left = &i;
//
//	Solution solution;
//	Node * p = solution.GetAncester(&a, &h, &i);
//
//	return 0;
//}