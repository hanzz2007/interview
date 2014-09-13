/************************************************************************/
/* 
16、正整数序列 Q 中的每个元素都至少能被正整数 a 和 b 中的一个整除，现给定 a 和 b，
需要计算出 Q 中的前几项，例如，当 a=3，b=5，N=6 时，序列为 3，5，6，9，10，12
(1)、设计一个函数 void generate（int a,int b,int N ,int * Q ）计算 Q 的前几项
(2)、设计测试数据来验证函数程序在各种输入下的正确性。                           */
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