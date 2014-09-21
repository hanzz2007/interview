/************************************************************************/
/* дһ������,����ԭ���� int continumax(char *outputstr,char *intputstr)
	���ܣ�
	���ַ������ҳ�����������ִ�������������ĳ��ȷ��أ�
	�����������ִ���������һ���������� outputstr ��ָ�ڴ档
	���磺"abcd12345ed125ss123456789" ���׵�ַ���� intputstr �󣬺��������� 9�� 
	outputstr ��ָ��ֵΪ 123456789                                                                     */
/************************************************************************/
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int ContinueMax(char *outputstr, char *inputstr){
	int len = strlen(inputstr);
	int startPos = 0;
	int curLen = 0;
	
	for(int i = 0; i < len;){
		if(isdigit(inputstr[i])){
			int j = i + 1;
			for(; j < len; ++j){
				if(!isdigit(inputstr[j])){
					break;
				}
			}
			if(j - i + 1 > curLen){
				curLen = j - i;
				startPos = i;
			}
			i = j + 1;
		}
		else{
			++i;
		}
	}
	for(int i = 0; i <= curLen; ++i){
		outputstr[i] = inputstr[startPos + i];
	}
	return curLen;
}

//int main(){
//	char *p = (char *)malloc(100 * sizeof(char));
//	char *str = "abcd12345ed125ss12faf3456daa789112121222";
//	ContinueMax(p, str);
//	return 0;
//}