#include <algorithm>
#include <time.h>
#include <stdio.h>
#include "stack.h"

using namespace std;

const uint MAXLENGTH = 100;

/*
 * question:
 * 	 design a stack , in addition to push and pop,also has a function with return the minimum element.
 * 	 all function should finish in 0(1) time.
 */
//int main(){
//	srand(uint(time(0)));
//	DATA myArray[MAXLENGTH];
//	for(uint i = 0; i < MAXLENGTH; ++i){
//		myArray[i] = i;
//	}
//	random_shuffle(myArray, myArray+MAXLENGTH);
//
//	Init();
//	for(uint i = 0; i < MAXLENGTH; ++i){
//		PushData(myArray[i]);
//		if(i % 10 == 0){
//			DATA myData;
//			PopData(myData);
//		}
//		DATA data = GetMin();
//		PrintData();
//		printf("cur min data is %d\n", data);
//		
//	}
//	return true;
//}
