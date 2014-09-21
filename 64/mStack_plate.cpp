#include <algorithm>
#include <time.h>
#include "stack_plate.h"
/*
 * question:
 *  Imagine a (literal) stack of plates. if the stack get too high, it might topple,therefore ,in real life, we would likely start a new stack when the previous stack exceeds some threshold, Implement a data structure, SetOfStack the mimics this. SetOfStacks should be composed of several stacks, and should create a new stack once the previous one exceed capacity. SetOfStacks.push and SetOfStack.pop should behave identically to a single stack.
 *  what is more, you should implement a function popAt(int index). which performs a pop operation on a specific substack.
 *
 */
using namespace std;

const uint MAX = 20;

//int main(){
//	srand(uint(time(0)));
//
//	DATA dataArray[MAX];
//	for(uint i = 0; i < MAX; ++i){
//		dataArray[i] = i;
//	}
//	//random_shuffle(dataArray, dataArray + MAX);
//	StackPlate myStack(5);
//	for(uint i = 0; i < MAX; ++i){
//		myStack.PushData(dataArray[i]);
//		printf("current stack data are:\n");
//		myStack.PrintData();
//		/*
//		if(i % 3 == 0 && i != 0){
//			DATA data = myStack.PopData();
//			printf("pop data %d\n",data);
//		}*/
//		if(i % 2 == 0 && i != 0){
//			DATA data;
//			if(myStack.PopAtIndex(data, 0)){
//				printf("\npop at %d ,data is %d\n", 0, data);
//			}
//		}
//	}
//	
//	return 0;
//}
