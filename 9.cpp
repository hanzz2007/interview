#include <string>
#include <iostream>
/*
给定任意一个整数，转换为4个36进制的位数
*/

void transform(int number, char *result){
	char s[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for(int i = 3; i >= 0; --i){
		int k = number / pow(36, i);
		result[3 - i] = s[k];
		number -= k * pow(36, i);
	}
	result[4] = '\0';
}

//int main(){
//	char result[5];
//	transform(36, result);
//	return 0;
//}