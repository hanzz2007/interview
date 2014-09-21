/************************************************************************/
/*�ַ������������㡣����һ���ַ���������0~9�����ֺ� + - * /()���������-��������Ų����������������£�
	���룺1+2*(3-4)
	�����-1.                                                            */
/************************************************************************/
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution{
public:
	double CalExpression(string str){
		str.push_back('#');

		vector<char> stackA;
		vector<char> stackB;
		map<char, int> operationMap;
		operationMap['+'] = 1;
		operationMap['-'] = 1;
		operationMap['*'] = 2;
		operationMap['/'] = 2;
		operationMap['#'] = 0;
		//operationMap['('] = -1;
		//operationMap[')'] = 3;

		stackA.push_back('#');
		for(int i = 0; i < str.size(); ++i){
			if(str[i] <= '9' && str[i] >= '0'){
				stackB.push_back(str[i]);
			}else{
				if(str[i] == '('){
					stackA.push_back(str[i]);
				}
				else{
					if(str[i] == ')'){
						while(stackA.back() != '('){
							stackB.push_back(stackA.back());
							stackA.pop_back();
						}
						stackA.pop_back();
					}
					else{
						while(!stackA.empty() && operationMap[str[i]] <= operationMap[stackA.back()]){
							if(stackA.back() != '#'){
								stackB.push_back(stackA.back());
							}
							stackA.pop_back();
						}
						if(stackA.empty()){
							break;
						}
						else{
							stackA.push_back(str[i]);
						}
					}
				}
			}
		}

		vector<double> stack;
		for(int i = 0; i < stackB.size(); ++i){
			if(stackB[i] <= '9' && stackB[i] >= '0'){
				stack.push_back(double(stackB[i] - '0'));
			}
			else{
				double right = stack.back();
				stack.pop_back();
				double left = stack.back();
				stack.pop_back();
				if(stackB[i] == '+'){
					double result = left + right;
					stack.push_back(result);
				}
				if(stackB[i] == '-'){
					double result = left - right;
					stack.push_back(result);
				}
				if(stackB[i] == '*'){
					double result = left * right;
					stack.push_back(result);
				}
				if(stackB[i] == '/'){
					double result = left / right;
					stack.push_back(result);
				}
			}
		}
		return stack.back();
	}
};

//int main(){
//	string str = "(1+2)*(3-4)";
//	Solution solution;
//	solution.CalExpression(str);
//	return 0;
//}