/************************************************************************/
/* ��O(n)���㷨��ʵ�ֶ�һ���������ĸ���д�С��������(���ִ�Сд)����ͬ����ĸ��Сд�ڴ�дǰ       */
/************************************************************************/

#include <vector>
#include <string>
using namespace std;
//��ΪԪ�صı仯��Χ��֪������Ҫ��ʱ�临�Ӷ�Ϊn�����Բ���Ͱ����
string Sort(const string &str){
	//���ַ���ӳ��Ϊ���֣��������й��ɿ�֪��Сд��Ӧ����2 *n�� ��д��2 * n - 1.
	//Ȼ���ٽ�����ת��Ϊ�ַ�����
	char *s = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	vector<int> bucketVec;
	bucketVec.resize(52);
	for(int i = 0; i < 52; ++i){
		bucketVec[i] = 0;
	}
	for(int i = 0; i < str.size(); ++i){
		if(str[i] >= 'a' && str[i] <= 'z'){
			++bucketVec[(str[i] - 'a') * 2];
		}
		if(str[i] >= 'A' && str[i] <= 'Z'){
			++bucketVec[(str[i] - 'A') * 2 - 1];
		}
	}
	string result;
	for(int i = 0; i < bucketVec.size(); ++i){
		for(int j = 0; j < bucketVec[i]; ++j){
			result.push_back(s[i]);
		}
	}
	return result;
 }

int main(){
	string s = "aandhdasJKHJHGHlkkjlfa";
	string s2 = Sort(s);
	return 0;
}