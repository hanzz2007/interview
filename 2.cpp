/*
	һ���������У�Ԫ��ȡֵ������ 0~65535 �е�����һ��������ͬ��ֵ�����ظ����֡�0 �����⣬���Է������֡�
	�����һ���㷨������Ӹ�����������ѡȡ5����ֵ���ж���5����ֵ�Ƿ��������ڡ�
	ע�⣺
	- 5 ����ֵ����������ġ����磺8 7 5 0 6
	- 0 ����ͨ��������ֵ�����磺8 7 5 0 6 �е� 0 ����ͨ��� 9 ���� 4
	- 0 ���Զ�γ��֡�
	-  ���Ӷ������ O(n2)�򲻵÷�
*/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool IsAdjacent(const vector <int> &data){
	vector<int> data2 = data;
	sort(data2.begin(), data2.end());
	int nZeroNum = 0;
	int nDiffNum = 0;
	for(int i = 0; i < data2.size() - 1; ++i){
		if(data2[i] == 0){
			++nZeroNum;
		}
		else{
			nDiffNum += data2[i + 1] - data2[i] - 1;
		}
	}

	return nDiffNum <= nZeroNum;
}
int main(){
	vector<int> data;
	data.push_back(1);
	data.push_back(7);
	data.push_back(4);
	data.push_back(5);
	data.push_back(0);
	cout << IsAdjacent(data) << endl;

	return 0;
}

/******
����˼·��
�ȶ�Ԫ������Ȼ����ͳ��0���ֵĴ���������Ԫ��֮����Ԫ�������������ֵĸ������ڼ����Ԫ���������ʾ���ԣ����򲻿���
*******/