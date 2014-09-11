/*
实现两个整数的除法，要求不能用除法符号
*/
#include <iostream>
using namespace std;

int Dive(int x, int y){
	if(x < y){
		return 0;
	}
	x  -= x % y;
	int pos1 = x >> 1;
	int pos2 = pos1;
	if(pos2 * y == x){
		return pos2;
	}
	if(pos1 * y < x){
		while(pos1 * y < x){
			pos1 = pos1 << 1;
		}
		for(int i = pos2; i <= pos1; ++i){
			if(i * y == x){
				return i;
			}
		}
	}
	else{
		while(pos1 * y > x){
			pos1 = pos1 >> 1;
		}
		for(int i = pos1; i < pos2; ++i){
			if(i * y == x){
				return i;
			}
		}
	}
}

int main(){
	cout << Dive(7, 3) <<endl;
	cout << Dive(11, 4) <<endl;
	cout << Dive(12, 5) <<endl;
	cout << Dive(321, 31) <<endl;


	return 0;
}

/*
解法：用移位运算符，缩小范围，然后采用遍历即可。
*/