#include <stdio.h>
#define MAX_N 100 
/*
  given an image represented by an N*N matrix, where each pixel in the image is 4 bytes.write an  method to rotate the image by 90 degrees.can you do this in place? rotate the image clockwise

  my solution.swap the data in i line with the data in i row. after all data have been replace,reverse the data in each line.
 */
void my_swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void my_reverse(int matrix[][MAX_N], int length){
	int i = 0;
	int j = 0;
	int half_len = (int) (length / 2);
	for(;i < length; i++){
		for(j = 0;j < half_len; j++){
			my_swap(&matrix[i][j], &matrix[i][length-j-1]);
		}
	}
}
void print_matrix(int matrix[][MAX_N], int length){
	int i = 0;
	int j = 0;
	for(;i < length; i++){
		for(j = 0;j < length; j++){
			printf("%d  ",matrix[i][j]);
		}
		printf("\n");
	}
}
void my_rotate(int matrix[][MAX_N], int length){
	int i = 0;
	int j = 0;
	for(;i < length; i++){
		for(j = i; j < length; j++){
			my_swap(&matrix[i][j], &matrix[j][i]);
		}
	}
}

//int main(){
//	int my_matrix[MAX_N][MAX_N];
//	int i = 0;
//	int j = 0;
//	int length = 0;
//	printf("input N:\n");
//	scanf("%d", &length);
//	for(;i<length;i++){
//		printf("input the %d line data\n",i);
//		for(j = 0;j < length;j++){
//			scanf("%d", &my_matrix[i][j]);
//		}
//	}
//	printf("before rotate\n");
//	print_matrix(my_matrix,length);
//	my_rotate(my_matrix,length);
//	//print_matrix(my_matrix,length);
//	my_reverse(my_matrix,length);
//	printf("after rotate\n");
//	print_matrix(my_matrix,length);
//	return 0;
//}
