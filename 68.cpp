/************************************************************************/
/* ������n����������a�����г���һ�������Ϊһ����ֵ���ڲ��������򣬲�����������������£������Ч���㷨�ҳ������
 * ����ԭ�ͣ�int find(int *a, int n)*/
/************************************************************************/


int find(int *dataArray, int len){
	int counter = 1;
	int elem = dataArray[0];
	for(int i = 1; i < len; ++i){
		if(dataArray[i] != elem){
			--counter;
			if(counter == 0){
				counter = 1;
				elem = dataArray[i];
			}
		}
	}
	return elem;
}

//int main(){
//	int A[] = {4,4,4,4,4,4,4,4,1,2,1,1,1,2,3,3,3,4,3,2,4,4,4,3};
//	find(A, 24);
//
//	return 0;
//}