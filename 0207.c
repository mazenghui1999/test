//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
	//int* p1 = (int*)0x100;4
	//int* p2 = (int*)0x110;4


	/*short* p1 = (short*)0x100;  8
	short* p2 = (short*)0x110;*/ //8

	//char* p1 = (char*)0x100;    16
	//char* p2 = (char*)0x110;    10

	// ������Ĵ���
	/*int arr[4] = { 1, 2, 3, 4 };
	int* p1 = &arr[0];
	int* p2 = &arr[2];*/

	//������ ��ʱָ������Ľ���Ǽ�����ȷ����ȡ���ڱ�
	// �������ǰ��˳��ͨ������±�����ǰ��˳���ǲ�
	//Ӧ��Ӱ�����ģ�
	/*int arr[4] = { 1, 2, 3, 4 };
	int arr2[4] = { 1, 2, 3, 4 };
	int* p1 = &arr[0];
	int* p2 = &arr2[2];
	*/

//
//	printf("%d\n", p2 - p1);
//	printf("%x\n", p2 - p1);
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 10;
	int* p = &num;
	/*if (p != NULL)*/
	if(p){
		printf("p���ǿ�ָ�룡��\n");
	}
	else{
		printf("p�ǿ�ָ��\n");
	}
	system("pause");
	return 0;
}

