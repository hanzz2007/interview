#include <algorithm>
#include <cstdlib>
#include "heap.h"
#include "list.h"
/*
 * question:
 *     Implement an algorithm to find the nth less elem.
 * solution:
 * 		i use a big end heap,to store the n elements of the data.then iterate the list, add the data to the heap,
 * 	adjust the heap,to make sure that the heap store n elements.
 */
using namespace std;

const uint LENGTH = 50;

bool getNMinData(const list<DATA> &myList, uint n, DATA &nMinData){
	if(n >= myList.size()){
		return false;
	}
	DATA * dataArray = (DATA *)malloc(sizeof(DATA) * n);
	if(!dataArray){
		return false;
	}
	list<DATA>::const_iterator myIter = myList.begin();
	for(uint i = 0; i < n ; ++i){
		dataArray[i] = *myIter;
		++myIter;
	}
	InitHeap(dataArray, n);
	DATA data;

	for(uint i = n; i < myList.size(); ++i){
		printf("cur pos %d\n", i);
		printf("cur NMin data %d\n", dataArray[0]);
		GetData(myList, i, data);
		if(data < dataArray[0]){
			dataArray[0] = data;
			UpdateHeap(dataArray, n);
		}

	}
	nMinData = dataArray[0];
	printf("the final n min data is %d\n", dataArray[0]);
	delete(dataArray);
	return true;

}
int main(){
	DATA myArray[LENGTH];
	for(uint i = 0; i < LENGTH; ++i){
		myArray[i] = i ;
	}
	DATA testArray[LENGTH];
	for(uint i = 0; i < LENGTH; ++i){
		testArray[i] = LENGTH + i;
	}
	std::random_shuffle(testArray, testArray + LENGTH);
	std::random_shuffle(myArray, myArray + LENGTH);
	/*
	InitHeap(myArray, LENGTH);
	for(uint i = 0; i < LENGTH; ++i){
		printf("%d\n", myArray[0]);
		UpdateHeap(myArray, LENGTH, testArray[i]);
	}*/
	list<DATA> myList;
	InitList(myArray, LENGTH, myList);
	DATA myData;
	PrintList(myList);
	getNMinData(myList, 10, myData);
	return 0;
}
