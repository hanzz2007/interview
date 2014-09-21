#include "imp_queue.h"

void InitStack(){
	gStackA.clear();
	gStackB.clear();
	gStackIter = gStackA.begin();

}
bool PushData(DATA data){
	MoveData(gStackA, gStackB, gStackIter);
	gStackB.push_back(data);
	gStackIter = gStackB.end()-1;
	MoveData(gStackB, gStackA, gStackIter);
	gStackIter = gStackA.end() - 1;
	return true;
}
bool PopData(DATA &data){
	if(!gStackA.empty()){
		data = *gStackIter;
		gStackA.pop_back();
		if(gStackA.empty()){
			InitStack();
		}
		else{
			gStackIter = gStackA.end() - 1;
		}

		return true;
	}
	return false;
}

static void MoveData(STACK &source, STACK &dest, STACKITER curIter){
	if(!source.empty()){
		for(; curIter > source.begin(); --curIter){
			dest.push_back(*curIter);
		}
		dest.push_back(*curIter);
		source.clear();
	}
}