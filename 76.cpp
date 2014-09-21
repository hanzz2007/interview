/************************************************************************/
/*
 *	一条长廊里依次装有n(1 ≤ n ≤ 65535)盏电灯，从头到尾编号1、2、3、…n-1、n。每盏电灯由一个拉线开关控制。开始，电灯全部关着。
	有n个学生从长廊穿过。第一个学生把号码凡是1的倍数的电灯的开关拉一下；接着第二个学生把号码凡是2的倍数的电灯的开关拉一下；接着第三个学生把号码凡是3的倍数的电灯的开关拉一下；如此继续下去，最后第n个学生把号码凡是n的倍数的电灯的开关拉一下。n个学生按此规定走完后，长廊里电灯有几盏亮着。
	注：电灯数和学生数一致。
	
	输入：电灯的数量
	输出：亮着的电灯数量                                                      */
/************************************************************************/
/************************************************************************/

#include <vector>
using namespace std;

vector<int> GetOnBubbleNumber(int n){
	vector<int> record;
	record.resize(n + 1);
	for(int i = 1; i < record.size(); ++i){
		record[i] = 0;
	}
	for(int i = 2; i <= n ; ++i){
		//计算第i个人 最大的倍数（在n范围内）
		int max = int(n / i);
		
		//倍数递减
		for(int j = max; j >= 1; --j){
			int number = j * i;
			record[number]++;
		}
	}

	vector<int> result;
	//通过奇偶判断确定哪个灯是亮着的，注意，因为所有数都是1的倍数，所以可以忽略1。
	for(int i = 1 ; i < record.size(); ++i){
		if(record[i] % 2){
			result.push_back(i);
		}
	}
	return result;
}

//int main(){
//	GetOnBubbleNumber(10);
//	return 0;
//}