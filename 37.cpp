#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 100
/*
 write a method to replace all spaces in a string with '%20'
 
 my solution:
  firstly,i thought how to make the movement least.but the program is to complicated.
  so , I sacrificed the space,copyed all the chars in original to the temp array.and strcpy them back to original array.

*/
int my_func(char my_str[]){
	int len = strlen(my_str);
	char *p = (char *)malloc(sizeof(char)*len*N);
	if(!p){
		return -1;
	}

	int cur_pos = 0;
	int flag = 0;
	for(int i = 0; i < len ;i++){
		if(my_str[i] != ' '){
			 if(flag){
				 flag = 0;
			 }
			 p[cur_pos] = my_str[i];
			 cur_pos++;
		}
		else{
			if(!flag){
				p[cur_pos++] = '%';
				p[cur_pos++] = '2';
				p[cur_pos++] = '0';
				flag = 1;	
			}
		}
	}
	p[cur_pos] = '\0';
	strcpy(my_str,p);
	return 1;
}
//int main(){
//	char my_str[100];
//	printf("please input the original data\n");
//	gets(my_str);
//
//	my_func(my_str);
//	printf("this is the transfer data\n");
//	printf("%s", my_str);
//	printf("\n");
//	return 0;
//}
