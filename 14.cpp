/************************************************************************/
/* Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n                                                                     */
/************************************************************************/
#include <iostream>

int CountBits(long num){
	int counter = 0x1;
	counter = counter << 30;
	int result = 0;
	int bits = 0;
	for(int i = 30; i >= 0; --i){
		if(counter & num){
			//�Ӹ�λ����λ�������һλΪ1 ���������¹�ʽ���㣬ǰ�沿�ּ������i�����1�ĸ�����������Ǽ���i֮ǰ��1 �ĸ���
			result += i * pow(2, i - 1) + 1 + bits * pow(2, i);
			++bits;
		}
		counter = counter >> 1;
	}
	return result;
}

int main(){
	CountBits(7);
	return 0;
}