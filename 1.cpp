/************************************************************************/
/* �����������У��ҳ��������ֵĳ��ִ�������  [1, 2, 2, 2, 3]  �� 2 �ĳ��ִ����� 3 �Ρ�*/
/************************************************************************/

#include <vector>
#include <iostream>
using namespace std;

//�ҵ���һ�����ڵ���n��Ԫ�����ڵ�λ��
int FindElemPosG(const vector<int> &dataVec, int nStartPos, int nEndPos, int nCmpVal){
	//���ֻʣ������Ԫ�أ������ȷ�����ض��ǵ�һ�����ڵ���val�ģ����Ƿ�������Ԫ��
	if(nEndPos - nStartPos == 1){
		return nEndPos;
	}
	int nMidPos = (nStartPos + nEndPos) / 2;
	//�����ǰԪ��ҪС�ڵ���val���������������䣬���ǲ���©��nMidPos���������ܱ�֤��©������val��Ԫ�ء�
	if(dataVec[nMidPos] <= nCmpVal){
		return FindElemPosG(dataVec, nMidPos, nEndPos, nCmpVal);
	}else{
		//�����ǰԪ�ر�valҪ���������������䣬����Ҫ����nMidPos���������ܱ�֤��©���κδ���val��Ԫ��
		return FindElemPosG(dataVec, nStartPos, nMidPos, nCmpVal);
	}
}

//�ҵ���һ��С�ڵ���val��Ԫ������λ��
int FindElemPosL(const vector<int> &dataVec, int nStartPos, int nEndPos, int nCmpVal){
	if(nEndPos - nStartPos == 1){
		return nStartPos;
	}
	int nMidPos = (nStartPos + nEndPos) / 2;
	if(dataVec[nMidPos] >= nCmpVal){
		//�����ǰԪ��Ҫ���ڵ���val�� �������������䣬���������µ�
		return FindElemPosL(dataVec, nStartPos, nMidPos, nCmpVal);
	}else{
		//�����ǰԪ��ҪС���������������䣬�ҵ�����һ���
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