/************************************************************************/
/*
17����һ���ɴ�Сд��ɵ��ַ�����������Ҫ���������޸ģ������е�����Сд��ĸ����
��д��ĸ��ǰ�棨��д��Сд��ĸ֮�䲻Ҫ�󱣳�ԭ�����򣩣����п��ܾ���ѡ��ʱ��Ϳ�
��Ч�ʸߵ��㷨  c ���Ժ���ԭ�� void proc��char *str��  Ҳ���Բ������Լ���Ϥ������
*/
/************************************************************************/

/************************************************************************/
/* ����˼·��
�������ƿ��ŵ�˼�룬ʱ��Ϊ��n�� �ռ�Ϊ��1*/
/************************************************************************/
#include <string.h>
#include <stdio.h>

void proc(char *str){
	int nStartPos = 0;
	int nEndPos = strlen(str) - 1;
	while (nStartPos < nEndPos){
		while (str[nStartPos] <= 'z' && str[nStartPos] >= 'a' && nStartPos < strlen(str)){
			++nStartPos;
		}
		while (str[nEndPos] <= 'Z' && str[nEndPos] >= 'A' && nEndPos >= 0){
			--nEndPos;
		}
		if(nStartPos >= nEndPos){
			return;
		}
		else{
			char temp = str[nStartPos];
			str[nStartPos] = str[nEndPos];
			str[nEndPos] = temp;
		}
	}
}


//int main(){
//	char str[] = "dafaHUGiiuSDoijudOIdpoiIOIOdIOHOIHIH";
//	proc(str);
//	printf("%s", str);
//	return 0;
//}