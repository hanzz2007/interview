/************************************************************************/
/*
 *用递归颠倒一个栈。例如输入栈{1, 2, 3, 4, 5}，1 在栈顶。
  颠倒之后的栈为{5, 4, 3, 2, 1}，5 处在栈顶。                                  */
/************************************************************************/
#include <vector>

using namespace std;

class Solution{
public:
	void Reverse(vector<int> &stack){
		ReverseStack(stack, 1);
	}
	void ReverseStack(vector<int> &stack, int curLen){

		vector<int> tempArray;
		for(int i = 0; i < curLen; ++i){
			tempArray.push_back(stack.back());
			stack.pop_back();
			if(stack.empty()){
				for(int j = tempArray.size() - 1; j >= 0; --j){
					stack.push_back(tempArray[j]);
				}
				return;
			}
		}

		int elem = stack.back();
		stack.pop_back();
		for(int i = tempArray.size() - 1; i >= 0; --i){
			stack.push_back(tempArray[i]);
		}
		stack.push_back(elem);
		ReverseStack(stack, curLen + 1);
	}
};
//
//int main(){
//	vector<int> A;
//	A.push_back(1);
//	A.push_back(2);
//	A.push_back(3);
//	A.push_back(4);
//	A.push_back(5);
//	Solution solution;
//	solution.Reverse(A);
//	return 0;
//}