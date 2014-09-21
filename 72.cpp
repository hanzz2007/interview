/************************************************************************/
/* 求二叉树中距离最远的两个点                                                 */
/************************************************************************/
#include <map>
using namespace std;

struct BinTree{
	int val;
	BinTree *left;
	BinTree *right;
	BinTree(int value):val(value), left(NULL), right(NULL){}
};
class Solution{
public:
	Solution(){
		record.first = 0;
		record.second.first = NULL;
		record.second.second = NULL;
	}
	pair<BinTree *, BinTree *> MaxDistance(BinTree *root){
		BinTree *p;
		ChidMaxLength(root, &p);
		return record.second;
	}
private:
	int ChidMaxLength(BinTree *root, BinTree **longestChild){
		int leftLength = 0;
		int rightLength = 0;

		BinTree *leftLongestChild = NULL;
		BinTree *rightLongestChild = NULL;

		if(root->left){
			leftLength = ChidMaxLength(root->left, &leftLongestChild);
		}
		if(root->right){
			rightLength = ChidMaxLength(root->right, &rightLongestChild);
		}

		if(leftLength || rightLength && record.first < leftLength + rightLength){
			record.first = leftLength + rightLength;
			if(leftLongestChild){
				record.second.first = leftLongestChild;
			}
			else{
				record.second.first = root;
			}
			if(rightLongestChild){
				record.second.second = rightLongestChild;
			}
			else{
				record.second.second = root;
			}
			
		}

		if(!leftLength && !rightLength){
			*longestChild = root;
		}
		else{
			if(leftLength > rightLength){
				*longestChild = leftLongestChild;
			}
			else{
				*longestChild = rightLongestChild;
			}
		}
		int maxLength = leftLength > rightLength ? leftLength : rightLength;
		return  maxLength + 1;
	}
private:
	pair<int, pair<BinTree *, BinTree *> > record;
};

//int main(){
//	//BinTree a(1);
//	//BinTree b(2);
//	//BinTree c(3);
//	//BinTree d(4);
//	//BinTree e(5);
//	//BinTree f(6);
//
//	//a.left = &b;
//	//a.right = &c;
//	//b.left = &d;
//	//b.right = &e;
//	//e.left = &f;
//
//
//
//	BinTree a(1);
//	BinTree b(2);
//	BinTree c(3);
//	BinTree d(4);
//	BinTree e(5);
//	BinTree f(6);
//	BinTree g(7);
//	BinTree h(8);
//	BinTree i(9);
//	BinTree j(10);
//	BinTree k(11);
//	BinTree l(12);
//	BinTree m(13);
//	BinTree n(14);
//	BinTree o(15);
//
//	a.left = &b;
//	a.right = &c;
//
//	b.left = &d;
//	b.right = &e;
//
//	c.left = &f;
//	c.right = &g;
//
//	d.left = &h;
//	d.right = &i;
//
//	i.left = &j;
//	i.right = &k;
//
//	j.left = &l;
//	j.right = &m;
//
//	k.left = &n;
//	k.right = &o;
//
//	 
//
//	Solution solution;
//	solution.MaxDistance(&a);
//
//	return 0;
//}