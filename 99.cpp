/************************************************************************/
/*       ����һ��һ�̵������ַ���A, B.����A��B�̣����ڣ�Ҫ���ж�B�Ƿ�������ַ���A�У������ִ�Сд��
 *       �������㷨����Ƹ��ӶȺʹ洢���Ӷ�
 *       ���磺��������������ַ�����string A��ABCDEFGHLMNOPQRS
 *       string B:DCGSRQPOM.�ش���true����Ϊstring B�������ĸstringAȫ����*/
/************************************************************************/
#include <set>
#include <string>

using namespace std;

class Solution{
public:
	bool IsSubstring(const string &stringA, const string &stringB){
		set<char> record;
		for(int i = 0; i < stringA.size(); ++i){
			record.insert(tolower(stringA[i]));
		}
		for(int i = 0; i < stringB.size(); ++i){
			if(record.find(tolower(stringB[i])) == record.end()){
				return false;
			}
		}
		return true;
	}
};

//int main(){
//	Solution solution;
//	string strA("ABCDEF");
//	string strB("cdf");
//	solution.IsSubstring(strA, strB);
//	return 0;
//}