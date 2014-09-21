/************************************************************************/
/*
ͨ����������һ��Сд��ĸ(a~z)��ɵ��ַ��������дһ���ַ���ѹ�����򣬽��ַ�����������ϯ���ظ���ĸ����ѹ���������ѹ������ַ�����
ѹ������
1����ѹ�������ظ����ֵ��ַ��������ַ���"abcbc"�����������ظ��ַ���ѹ������ַ�������"abcbc"��
2��ѹ���ֶεĸ�ʽΪ"�ַ��ظ��Ĵ���+�ַ�"�����磺�ַ���"xxxyyyyyyz"ѹ����ͳ�Ϊ"3x6yz"��
Ҫ��ʵ�ֺ����� 
void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr);
����pInputStr�� 
�����ַ���lInputLen��  �����ַ�������
��� pOutputStr��  ����ַ������ռ��Ѿ����ٺã��������ַ����ȳ���
ע�⣺ֻ��Ҫ��ɸú��������㷨���м䲻��Ҫ���κ�IO���������
ʾ�� 
���룺��cccddecc��   �������3c2de2c��
���룺��adef��     �������adef��
���룺��pppppppp�� �������8p��                                                                     */
/************************************************************************/


#include <vector>
#include <map>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;

void stringZip(const char *pInputStr, long lInputLen, char * pOutputStr){
	//vector< pair<int, int> > record;
	string tempStr;
	for(int i = 0; i < lInputLen - 1;){
		int distance = 0;
		int j = 0;
		for(j = i + 1; j < lInputLen; ++j){
			distance = j - i;
			if(pInputStr[j] != pInputStr[i]){
				break;
			}
		}
		if(distance > 1){
			stringstream ss;
			ss << distance;
			string str;
			ss >> str;
			tempStr.insert(tempStr.end(), str.begin(), str.end());
		}
		tempStr.push_back(pInputStr[i]);
		i = j;
	}
	for(int i = 0; i < tempStr.size(); ++i){
		pOutputStr[i] = tempStr[i];
	}
	pOutputStr[tempStr.size()] = '\0';

};

//int main(){
//	char *q = "abcde";
//	char *p = (char *)malloc(sizeof(char) * 100);
//	stringZip(q, strlen(q), p);
//
//	return 0;
//}