#include <vector>
#include <algorithm>
#include "MyTree.h"
using namespace std;

/*
 *question:
 *
    Assume that a binary tree is drawn over a Cartesian coordinate system (with X & Y axis) 
where the leftmost node is placed at point (0,0). So, we need to traverse the nodes 
and print in following manner: For e.g., for this tree 
a 
b c 
d e f g 
Output should be: 
d,0,0 
b,1,1 
e,2,0 
a,3,2 
f,4,0 
c,5,1 
g,6,0

solution:
  when we travel the tree in mid_order, we can decide the pos_x.
  but we should firstly get the root pos_y,so we firstly travel from root
  to left most node,get the pos_y.
  the use mid order travel to get the pos_x and pos_y.
 *
 */

//int main(){
//	NODE *head = NULL;
//	vector<DATA> dataVec;
//	for(uint i = 0; i < 10; ++i){
//		dataVec.push_back(i);
//	}
//	random_shuffle(dataVec.begin(), dataVec.end());
//
//	CreateTree(head, dataVec);
//	int pos_y = 0;
//	GetposY(head, pos_y);
//	PrintPos(head, pos_y);
//}