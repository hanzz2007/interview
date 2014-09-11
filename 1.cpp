/************************************************************************/
/* 在排序数组中，找出给定数字的出现次数比如  [1, 2, 2, 2, 3]  中 2 的出现次数是 3 次。*/
/************************************************************************/

#include <vector>
#include <iostream>
using namespace std;

//找到第一个大于等于n的元素所在的位置
int FindElemPosG(const vector<int> &dataVec, int nStartPos, int nEndPos, int nCmpVal){
	//如果只剩下两个元素，则可以确定，必定是第一个大于等于val的，我们返回最大的元素
	if(nEndPos - nStartPos == 1){
		return nEndPos;
	}
	int nMidPos = (nStartPos + nEndPos) / 2;
	//如果当前元素要小于等于val，则右移搜索区间，但是不能漏掉nMidPos，这样才能保证不漏掉等于val的元素。
	if(dataVec[nMidPos] <= nCmpVal){
		return FindElemPosG(dataVec, nMidPos, nEndPos, nCmpVal);
	}else{
		//如果当前元素比val要大，则左移搜索区间，但是要包括nMidPos，这样才能保证不漏掉任何大于val的元素
		return FindElemPosG(dataVec, nStartPos, nMidPos, nCmpVal);
	}
}

//找到第一个小于等于val的元素所在位置
int FindElemPosL(const vector<int> &dataVec, int nStartPos, int nEndPos, int nCmpVal){
	if(nEndPos - nStartPos == 1){
		return nStartPos;
	}
	int nMidPos = (nStartPos + nEndPos) / 2;
	if(dataVec[nMidPos] >= nCmpVal){
		//如果当前元素要大于等于val， 则左移搜索区间，即搜索更下的
		return FindElemPosL(dataVec, nStartPos, nMidPos, nCmpVal);
	}else{
		//如果当前元素要小，则右移搜索区间，找到更大一点的
		return FindElemPosL(dataVec, nMidPos, nEndPos, nCmpVal);
	}
}

 

int search(const vector<int> &dataVec, int nVal){
	int nPosL = FindElemPosL(dataVec, 0, dataVec.size() - 1, nVal);
	int nposG = FindElemPosG(dataVec, 0, dataVec.size() - 1, nVal);
	int nOffset = 0;

	if(dataVec[nPosL] == nVal){
		++nOffset;
	}
	if(dataVec[nposG] == nVal){
		++nOffset;
	}

	return nposG - nPosL - 1 + nOffset;
}
/*
int main(){
	vector<int> dataVec;
	dataVec.push_back(1);
	dataVec.push_back(2);
	dataVec.push_back(3);
	dataVec.push_back(4);
	//dataVec.push_back(5);
	//dataVec.push_back(5);
	//dataVec.push_back(5);
	dataVec.push_back(6);
	dataVec.push_back(7);
	dataVec.push_back(8);
	dataVec.push_back(9);
	dataVec.push_back(10);

	cout << search(dataVec, 5) << endl;
	return 0;
}
*/