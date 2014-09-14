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
			//从高位到地位，如果有一位为1 则利用如下公式计算，前面部分计算的是i后面的1的个数，后面的是计算i之前的1 的个数
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