/************************************************************************/
/* 求一个矩阵中最大的二阶矩阵(元素和最大).如:
1 2 0 3 4
2 3 4 5 1
1 1 5 3 0
中最大的是:
4 5
5 3
要求:(1)写出算法;(2)分析时间复杂度;(3)用 C 写出关键代码                         */
/************************************************************************/
#include <vector>
using namespace std;


class Solution{
public:
	vector<vector<int> > GetChildMatrix(const vector<vector<int> > &matrix){
		vector<int> rowSum;
		vector<vector<int> > result;
		int curMax = -1000;
		int lastRowSum = 0;
		result.resize(2);
		result[0].resize(2);
		result[1].resize(2);
		
		vector<int> lastRow;
		vector<int> curRow;
		lastRow.resize(2);
		curRow.resize(2);

		for(int i = 0; i < matrix.size() - 1; ++i){
			for(int j = 0; j < matrix[0].size(); ++j){
				int rowSum = matrix[i][j] + matrix[i + 1][j];
				if(j == 0){
					lastRowSum = rowSum;
					lastRow[0] = matrix[i][j];
					lastRow[1] = matrix[i + 1][j];
					curRow = lastRow;
				}
				else{
					int sum = lastRowSum + rowSum;
					lastRow = curRow;
					lastRowSum = rowSum;
					curRow[0] = matrix[i][j];
					curRow[1] = matrix[i + 1][j];
					if(sum > curMax){
						curMax = sum;
						result[0] = lastRow;
						result[1] = curRow;
					}
				}
			}
		}
		return result;
	}
};

//int main(){
//
//	int A[][5] = {
//				  {1, 2, 9, 3, 4},
//				  {2, 3, 1, 5, 1},
//				  {1, 1, 5, 3, 0},
//				 };
//	vector<vector<int> > data;
//	data.resize(3);
//	for(int i = 0; i < 3; ++i){
//		data[i].resize(5);
//		for(int j = 0 ; j < 5; ++j){
//			data[i][j] = A[i][j];
//		}
//	}
//	
//	Solution solution;
//	solution.GetChildMatrix(data);
//
//	return 0;
//}