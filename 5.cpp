/************************************************************************
14、一棵排序二叉树，令  f=(最大值+最小值)/2，
设计一个算法，找出距离 f 值最近、大于 f 值的结点。
复杂度如果是 O(n2)则不得分。
**********************************************************************/


/************************************************************************/
/* 思路：找到最小与最大，然后查找二叉树,因为假设A大于B，则不必查找比B小的那个分支，因此可以保存整个查找路径，然后对查找路径进行遍历，找到最接近f的元素即可*/
/************************************************************************/

#include <vector>
using namespace std;

struct Node{
	int nVal;
	struct Node *pLeft;
	struct Node *pRight;
	Node(int nValue)
		: nVal(nValue)
		, pLeft(nullptr)
		, pRight(nullptr)
	{}
};

Node *GetCloset(Node* pRoot){
	int nMinVal = 0;
	int nMaxVal = 0;
	double f = 0;
	Node *p = pRoot;
	while(p->pLeft){
		p = p->pLeft;
	}
	nMinVal = p->nVal;

	p = pRoot;
	while(p->pRight){
		p = p->pRight;
	}
	nMaxVal = p->nVal;
	f = double(nMinVal + nMaxVal) / 2;
	vector<Node *> nodeVec;

 	p = pRoot;
	while(p){
		nodeVec.push_back(p);
		if(p->nVal < f){
			p = p->pRight;
		}
		else if(p->nVal > f)
		{
			p = p->pLeft;
		}
		else{
			break;
		}
	}
	if(nodeVec.size() == 1){
		return nodeVec.back();
	}
	else{
		double dCurMin = abs(nodeVec[0]->nVal - f);
		Node *curNode = nodeVec[0];
		for(int i = 1; i < nodeVec.size() ; ++i){
			if(abs(nodeVec[i]->nVal - f) < dCurMin){
				dCurMin = abs(nodeVec[i]->nVal - f);
				curNode =  nodeVec[i];
			}
		}
		return curNode;
	}
}

//int main(){
//	Node a(1);
//	Node b(2);
//	Node c(3);
//	Node d(4);
//	Node e(5);
//	Node f(6);
//	Node g(8);
//
//	d.pLeft = &c;
//	d.pRight = &f;
//	c.pLeft = &a;
//	c.pRight = &b;
//	f.pLeft = &e;
//	f.pRight = &g;
//
//	GetCloset(&d);
//
//	return 0;
//}