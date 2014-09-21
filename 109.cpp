/************************************************************************/
/* 2��һ���ַ����飬������ַ�������a-z��A-Z��0-9.����Ҫ��������������Ҫ��
 * ����Сд�ַ�������ǰ�棬
 * ���д�д�ַ������м䣬
 * �������ַ�����󣬶��Ҹ������ڲ��ֱ�����*/
/*
 *�����������ò���������Ϊ�ַ����͹̶������Դ󲿷�������ģ������ò������
 */
/************************************************************************/
#include <list>
#include <string>
using namespace std;


class Solution{
public:
	void MySort(string &str){
		for(int i = 0; i < str.size(); ++i){
			if(str[i] <= '9' && str[i] >= '0'){
				InsertList(digitalCharList, str[i]);
			}
			if(str[i] <= 'z' && str[i] >= 'a'){
				InsertList(littleCharList, str[i]);
			}
			if(str[i] <= 'Z' && str[i] >= 'A'){
				InsertList(largeCharList, str[i]);
			}
		}
		str.clear();
		str.insert(str.end(), littleCharList.begin(), littleCharList.end());
		str.insert(str.end(), largeCharList.begin(), largeCharList.end());
		str.insert(str.end(), digitalCharList.begin(), digitalCharList.end());
	}
private:
	list<char> largeCharList;
	list<char> littleCharList;
	list<char> digitalCharList;

	void InsertList(list<char> &myList, char ch){
		if(myList.empty()){
			myList.insert(myList.begin(), ch);
		}
		else{
			bool insertFlag = false;
			for(list<char> ::iterator iter = myList.begin(); iter != myList.end(); ++iter){
				if(*iter >= ch){
					myList.insert(iter, ch);
					insertFlag = true;
					break;
				}
			}
			if(!insertFlag){
				myList.push_back(ch);
			}
		}
	}
};
//int main(){
//	string str("adaHJKHJfajkljKJHJHJKLJ");
//	Solution solution;
//	solution.MySort(str);
//	return 0;
//}