/************************************************************************/
/* 给一个二叉树，每个节点都是正或负整数，如何找到一个子树，它所有节点的和最大？        */
/************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
struct BinTree{
	int val;
	struct BinTree *left;
	struct BinTree *right;
	BinTree(int value):val(value), left(NULL), right(NULL){}
};

class Solution{
public:
	Solution():max(-1000){}
	void GetMax(BinTree *root){
		vector<BinTree *> record;
		CalMax(root, record);
	}
private:
	int CalMax(BinTree *root, vector<BinTree *> &record){
		vector<BinTree *> leftRecord;
		vector<BinTree *> rightRecord;
		int leftMaxVal = 0;
		int rightMaxVal = 0;
		if(root->left){
			leftMaxVal = CalMax(root->left, leftRecord);
		}
		if(root->right){
			rightMaxVal = CalMax(root->right, rightRecord);
		}
		int leftRoot = leftMaxVal + root->val;
		int rightRoot = rightMaxVal + root->val;
		int leftRight = leftMaxVal + root->val + rightMaxVal;

		
		if(leftRight >= rightRoot && leftRight >= leftRoot){
			record.insert(record.end(), leftRecord.begin(), leftRecord.end());
			record.insert(record.end(), root);
			record.insert(record.end(), rightRecord.begin(), rightRecord.end());
			if(leftRight > max){
				max = leftRight;
				maxRecord = record;
			}
			return leftRight;
		}
		if(rightRoot >= leftRoot && rightRoot >= leftRight){
			record.insert(record.end(), root);
			record.insert(record.end(), rightRecord.begin(), rightRecord.end());
			
			if(rightRoot > max){
				max = rightRoot;
				maxRecord = record;
			}
			return rightRoot;
		}
		if(leftRoot >= rightRoot && leftRoot >= leftRight){
			record.insert(record.end(), leftRecord.begin(), leftRecord.end());
			record.insert(record.end(), root);
			if(leftRoot > max){
				max = leftRoot;
				maxRecord = record;
			}
			return leftRoot;
		}
	}
private:
	vector<BinTree *> maxRecord;
	int max;
};

//
//int main(){
//	BinTree a(1);
//	BinTree b(2);
//	BinTree c(3);
//	BinTree d(4);
//	BinTree e(-5);
//	BinTree f(6);
//	BinTree g(7);
//	BinTree h(8);
//	BinTree i(9);
//	BinTree j(-10);
//	BinTree k(11);
//	BinTree l(12);
//	BinTree m(13);
//	BinTree n(14);
//	BinTree o(15);
//
//	a.left = &b;
//	a.right = &c;
//	b.left = &d;
//	b.right = &e;
//	c.left = &f;
//	c.right = &g;
//	d.left = &h;
//	d.right = &i;
//	e.left = &j;
//	e.right = &k;
//	f.left = &l;
//	f.right = &m;
//	g.left = &n;
//	g.right = &o;
//
//
//	Solution solution;
//	solution.GetMax(&a);
//
//
//
//	return 0;
//}