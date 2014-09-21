/************************************************************************/
/* 写一个函数,它的原形是 int continumax(char *outputstr,char *intputstr)
	功能：
	在字符串中找出连续最长的数字串，并把这个串的长度返回，
	并把这个最长数字串付给其中一个函数参数 outputstr 所指内存。
	例如："abcd12345ed125ss123456789" 的首地址传给 intputstr 后，函数将返回 9， 
	outputstr 所指的值为 123456789                                                                     */
/************************************************************************/
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int ContinueMax(char *outputstr, char *inputstr){
	int len = strlen(inputstr);
	int startPos = 0;
	int curLen = 0;
	
	for(int i = 0; i < len;){
		if(isdigit(inputstr[i])){
			int j = i + 1;
			for(; j < len; ++j){
				if(!isdigit(inputstr[j])){
					break;
				}
			}
			if(j - i + 1 > curLen){
				curLen = j - i;
				startPos = i;
			}
			i = j + 1;
		}
		else{
			++i;
		}
	}
	for(int i = 0; i <= curLen; ++i){
		outputstr[i] = inputstr[startPos + i];
	}
	return curLen;
}

//int main(){
//	char *p = (char *)malloc(100 * sizeof(char));
//	char *str = "abcd12345ed125ss12faf3456daa789112121222";
//	ContinueMax(p, str);
//	return 0;
//}