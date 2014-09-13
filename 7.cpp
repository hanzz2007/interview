/************************************************************************/
/*
17、有一个由大小写组成的字符串，现在需要对他进行修改，将其中的所有小写字母排在
大写字母的前面（大写或小写字母之间不要求保持原来次序），如有可能尽量选择时间和空
间效率高的算法  c 语言函数原型 void proc（char *str）  也可以采用你自己熟悉的语言
*/
/************************************************************************/

/************************************************************************/
/* 解题思路：
采用类似快排的思想，时间为：n， 空间为：1*/
/************************************************************************/
#include <string.h>
#include <stdio.h>

void proc(char *str){
	int nStartPos = 0;
	int nEndPos = strlen(str) - 1;
	while (nStartPos < nEndPos){
		while (str[nStartPos] <= 'z' && str[nStartPos] >= 'a' && nStartPos < strlen(str)){
			++nStartPos;
		}
		while (str[nEndPos] <= 'Z' && str[nEndPos] >= 'A' && nEndPos >= 0){
			--nEndPos;
		}
		if(nStartPos >= nEndPos){
			return;
		}
		else{
			char temp = str[nStartPos];
			str[nStartPos] = str[nEndPos];
			str[nEndPos] = temp;
		}
	}
}


//int main(){
//	char str[] = "dafaHUGiiuSDoijudOIdpoiIOIOdIOHOIHIH";
//	proc(str);
//	printf("%s", str);
//	return 0;
//}