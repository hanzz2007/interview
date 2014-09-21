#include <stdio.h>
#include <string.h>
/*
 Question:
     Implement an algorithm to determine if a string has all unique characters. What is you can noy use addtional data structure?

 *My Solution:
 	first, all string include 26 char,so we can use an array to record the usage of each character, therefore if all the elem of the array is 1.so we can say that this string  meet the goal
 */

int func(char * string){
	int alpha_array[26] = {0};
	int pos=0;
	int i=0;
	int str_len = strlen(string);
	for(;i < str_len; i++){	
		if (string[i] <= 'Z' && string[i] >= 'A'){
			pos = string[i] - 'A';
		}
		else if (string[i] <= 'z' && string[i] >= 'a'){
			pos = string[i] - 'a';
		}
		else{
			return -1;
		}
		
		if(alpha_array[pos]){
				return 0;
		}
		else{
			alpha_array[pos]++;
		}
	}
	
	for(0;i < str_len; i++){
		if (!string[i]){
			return 0;
		}
	}
	return 1;
}

//int main(){
//	char input[100];
//	scanf("%s", input);
//	if(func(input) > 0)
//	{
//		printf("ok");
//	}
//	else
//	{
//		printf("false");
//	}
//
//	return 0;
//}
