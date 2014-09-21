#include "hash.h"
#include <cstring>

uint CalHash(char * data){
	uint sum = 0;
	for(uint  i = 0; i < strlen(data); ++i){
		sum += (unsigned int)data[i] * (unsigned int )data[i];
	}
	return sum * 13 % N;
}

bool AddElem(HASH_NODE  data, uint hashVal){
	uint pos = hashVal;
	while(gHashTable[pos]){
		pos = (pos+1) % N;
	}
	gHashTable[pos] = data;
	return true;
}

bool CheckNode(HASH_NODE data, uint hashVal){
	uint pos = hashVal;

	while(gHashTable[pos]){
		if(gHashTable[pos] == data){
			return true;
		}
		pos = (pos + 1) % N;
	}
	return false;
}
void Destroy(){
	for(uint i = 0; i < N; i++){
		gHashTable[i] = NULL;
	}
}