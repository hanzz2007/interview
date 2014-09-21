#include <stdlib.h>
#include <string>
#include <iostream>

/*
 *question:
 *give you two string ,you should see if first can change to second by one step.
 *the operation includes: insert, change, remove
 **/

bool InsertFunc(const std::string &first, const std::string &second){
	for(int i = 0; i < first.size(); ++i){
		if(first[i] != second[i]){
			std::string temp = first;
			std::string t = "";
			std::string insertStr(t + second[i]);
			temp.insert(i, insertStr);
			/*
			if(i == 0){
				temp = insertStr + first;
			}else{
				temp.insert(i - 1, insertStr);
			}*/
			if(!temp.compare(second)){
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}


bool ChangeFunc(const std::string &first, const std::string &second){
	for(int i = 0; i < first.size(); ++i){
		if(first[i] != second[i]){
			std::string temp = first;
			temp[i] = second[i];
			if(!temp.compare(second)){
				return true;
			}
			else{
				return false;
			}
		}
	}
	return true;
}


bool RemoveFunc(const std::string &first, const std::string &second){
	for(int i = 0; i < second.size(); ++i){
		if(first[i] != second[i]){
			std::string temp = first;
			std::string::iterator iter = temp.begin();
			temp.erase(iter + i);
			if(!temp.compare(second)){
				return true;
			}
			else{
				return false;
			}
		}
	}
	return true;
}

bool OneEditApart(const std::string &first, const std::string &second){
	if(abs(int (first.size() - second.size()) ) > 1){
		return false;
	}
	if(first.size() < second.size()){
		return InsertFunc(first, second);
	}
	else if(first.size() == second.size()){
		return ChangeFunc(first, second);

	}else if(first.size() > second.size()){
		return RemoveFunc(first, second);
	}
}
//int main(){
//	std::string first = "dog";
//	std::string seconds[] = {"dogs","adog","aog","doa","d", "dag", "daog", "dg","og","do"};
//	
//	for(int i = 0; i < 10; ++i){
//		std::cout << first<<"  "<<seconds[i]<<std::endl;
//		bool result = OneEditApart(first, seconds[i]);
//		std::cout << result << std::endl;
//	}
//	//OneEditApart(first,seconds[3]);
//
//	
//	return 0;
//}