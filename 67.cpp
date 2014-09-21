#include <stdio.h>
#define N 100
/*
  write an algorithm such that if an element in an M*M matrix is 0.its entire row and column is set to 0
 */
typedef struct Record{
	int pos_i;
	int pos_j;
}Record;

void my_replace(int matrix[][N], int pos_i, int pos_j,int length){
	int i = 0;
	int j = 0;

	for(i = pos_i,j = 0; j<length;j++){
			matrix[i][j] = 0;
	}

	for(j = pos_j,i = 0;i < length;i++){
		matrix[i][j] = 0;
	}
}
void my_func(int matrix[][N], int length){
	Record my_record[N];
	int record_len = 0;
	for(int i = 0; i < length; i++){
		for(int j = 0; j < length; j++){
			if (!matrix[i][j]){
				my_record[record_len].pos_i = i;
				my_record[record_len].pos_j = j;
				record_len++;
			}
		}
	}
	for(int i = 0;i < record_len;i++){
		my_replace(matrix,my_record[i].pos_i,my_record[i].pos_j,length);
	}
}
void print_matrix(int matrix[][N], int length){
     int i = 0;
     int j = 0;
     for(;i < length; i++){
         for(j = 0;j < length; j++){
            printf("%d  ",matrix[i][j]);
         }
     printf("\n");
    }
}

//int main(){
//	int matrix[N][N] = {0};
//	int i = 0;
//	int j = 0;
//	int length = 0;
//	printf("input N:\n");
//	scanf("%d", &length);
//	for(int i =0;i<length;i++){
//	    printf("input the %d line data\n",i);
//	    for(int j = 0;j < length;j++){
//		    scanf("%d", &matrix[i][j]);
//		 }
//	}
//	printf("before replace\n");
//	print_matrix(matrix,length);
//	my_func(matrix,length);
//	printf("after replace\n");
//	print_matrix(matrix,length);
//	
//	return 0;
//
//}
//
