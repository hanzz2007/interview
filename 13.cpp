/************************************************************************/
/*Given an expression string exp, write a program to examine whether the pairs and the orders of ��{��,��}��,��(��,��)��,��[","]�� are correct in exp. For example, the program should print true for exp = ��[()]{}{[()()]()}�� and false for exp = ��[(])��*/
/************************************************************************/
#include <stack>
#include <string>
#include <map>
#include <set>
using namespace std;


bool IsBalanced(const string &str){
	stack<char> Stack;
	set<char> LeftparenthessSet;
	set<char> RightparenthessSet;
	map<char, char> parenthessMap;
	LeftparenthessSet.insert('(');
	LeftparenthessSet.insert('{');
	LeftparenthessSet.insert('[');

	RightparenthessSet.insert(')');
	RightparenthessSet.insert(']');
	RightparenthessSet.insert('}');


	parenthessMap[')'] = '(';
	parenthessMap[']'] = '[';
	parenthessMap['}'] = '{';

	for(int i = 0; i < str.size(); ++i){
		//�������������ֱ�Ӳ���
		if(LeftparenthessSet.find(str[i]) != LeftparenthessSet.end()){
			Stack.push(str[i]);
		}
		else{
			//����������ţ����ȿ�ջ�����Ƿ�Ϊƥ��������ţ���������ջ�������ջ
			if(RightparenthessSet.find(str[i]) != RightparenthessSet.end()){
				if(Stack.empty()){
					return false;
				}
				char ch = Stack.top();
				if(ch == parenthessMap[str[i]]){
					Stack.pop();
				}
				else{
					Stack.push(str[i]);
				}
			}
		}
	}
	if(Stack.empty()){
		return true;
	}
	return false;
}
//
//int main(){
//	string str = "}";
//	bool result = IsBalanced(str);
//	return true;
//}