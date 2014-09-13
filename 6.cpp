/************************************************************************/
/* 
16������������ Q �е�ÿ��Ԫ�ض������ܱ������� a �� b �е�һ���������ָ��� a �� b��
��Ҫ����� Q �е�ǰ������磬�� a=3��b=5��N=6 ʱ������Ϊ 3��5��6��9��10��12
(1)�����һ������ void generate��int a,int b,int N ,int * Q ������ Q ��ǰ����
(2)����Ʋ�����������֤���������ڸ��������µ���ȷ�ԡ�                           */
/************************************************************************/
#include <stdlib.h>
#include <iostream>
#include <cassert>
using namespace std;

void generate(int a, int b, int N, int *Q){
	int i = 1, j = 1;
	assert(N > 0);
	for(int count = 0; count < N; ++count){
		int nextA = a * i;
		int nextB = b * j;
		if(nextA < nextB){
			Q[count] = nextA;
			++i;
		}
		else if(nextA > nextB){
			Q[count] = nextB;
			++j;
		}
		else{
			Q[count] = nextA;
			++i;
			++j;
		}
	}
}

//int main(){
//	int *p = nullptr;
//	p = (int *)malloc(sizeof(int) * 10);
//	if(!p){
//		return -1;
//	}
//	generate(2, 3, 10, p);
//
//	for(int i = 0; i < 10; ++i){
//		cout << p[i] << endl;
//	}
//	return 0;
//}