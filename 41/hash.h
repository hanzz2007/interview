#ifndef MYHASH
#define MYHASH
#include "link.h"


	typedef NODEP HASH_NODE;
	const uint N = 100;

	static HASH_NODE gHashTable[N];

	uint CalHash(char * data);
	bool AddElem(HASH_NODE data, uint hashVal);
	bool CheckNode(HASH_NODE data, uint hashVal);
	void Destroy();
 
#endif