#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
/*
   Assume you have a method is_sub which check if one word is a substring of another.Given two strings.s1 and s2.
   write code to check if s2 is a rotation of s1,my requestion is :you can only use call to is_sub.
   (ie:"waterbottle" is a rotation of "erbottlewat")

   my solution:
   		the requestion is :you can only use is_sub,so we can repeatly rotate the s2 and put it into a temp string.
 */
int is_sub(char *str1,char *str2){
	char *p = strstr(str1,str2);
	char *q = strstr(str2,str1);
	return p != NULL && q != NULL? 1:0;
}

int my_func(char *str1,char *str2){
	int len = strlen(str2);
	char *temp = (char *)malloc(sizeof(char)*len);
	if(!temp){
		return -1;
	}

	for(int i = 0;i<len;i++){
		int pos = 0;
		for(int j = i;j<len;j++){
			temp[pos] = str2[j];
			pos++;
		}
		for(int k = 0;k<i;k++){
			temp[pos] = str2[k];
			pos++;
		}
		temp[pos] = '\0';
		if (is_sub(str1,temp)){
			return 1;
		}
	}
	return 0;
}
//int main(){
//	char str1[N];
//	char str2[N];
//	printf("input str1\n");
//	gets(str1);
//	printf("input str2\n");
//	gets(str2);
//	int result = my_func(str1,str2);
//	printf("the result is %d\n",result);
//	return 0;
//}
