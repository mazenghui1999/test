#define _CRT_SECURE_NO_WARNINGS//scanf�������������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//***************************************************
//������������в���ָ��Ԫ�ص�λ�ã������������������ġ�
// ���ֲ��ҷ�ʽ�����۰���Һ��ܺ�
//*****���ֲ���*****************
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int tofind = 1;
	//Ϊ�˲����м�λ�õ�Ԫ�أ���Ҫ�ȰѴ������������ʾ������
	//����������[left,right],�˴���[]��ʾ���Ǳ����䣻
	//���磬��һ�β��ҵ�ʱ��[0��6]��ȡ���м�λ�õ��±�3��Ԫ����4
	//��һ�β���֮���1��2��3��4�ĸ�Ԫ�ض��ų��ˣ�
	//���Ǵ���������[4��6]����ȡ�м�λ�õ��±�5��Ԫ��6
	//�ڶ��β��ң��Ͱ�5��6����Ԫ���ų��ˡ�
	//���Ǵ����ҵ�����[6��6]
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right){// �ѵ�2��
		int mid = (left + right) / 2;
		if (tofind < arr[mid]){
			right = mid - 1;//�ѵ�1��
		}
		else if(tofind>arr[mid]){
			left = mid + 1;
		}
		else{
			printf("�ҵ��˶�Ӧ��Ԫ�أ��±�Ϊ��%d\n", mid);
			break;
		}
	}
	if (left > right){
		printf("��Ԫ���ڸ������в�����!\n");
	}
	system("pause");
	return 0;
}
//***************************************************
//��һ����ͨ�������в��Ҿ����ĳ������n�����ҵõ�n��Ӧ���±�
//int main(){
//	int arr[] = { 9, 5, 2, 7, 3, 6, 8 };
//	int tofind = 3;
//	for (int i = 0; i < 7; i++){
//		if (arr[i] == tofind){
//			printf("�ҵ��� tofind �Ľ�����±�Ϊ: %d\n", i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//***************************
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//����ֻ�ܹ���¼���Ρ���ֻ���������������룬���������ȷ
//����ʾ��¼�ɹ���������ξ�����������˳�����
//int main(){
//	for (int i = 0; i < 3; i++){
//		//�������һ���Ǹ��ַ���
//		//�˴�����һ���ַ���������ʾ�û�����������
//		char input[20] = { 0 };
//		//�˴��ٴ���һ���ַ�������ʾϵͳ���������
//		char password[20] = "888888";
//		printf("����������:");
//		//scanf�ж�ȡһ���������߸�������ʱ����Ҫ&
//		//�����ȡ����һ���ַ���������Ҫ&
//		scanf("%s", input);
//		//ע���ַ����ıȽϲ��ܹ���==����ʾ��
//		if (strcmp(input, password) == 0){
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else{
//			printf("��¼ʧ��!\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************
//��д���룬��ʾ����ַ��������ƶ������м���
//���籾����һ���ַ���"welcome to bit!"
//int main(){
//	char str1[] = "welcome to bit!";
//	char str2[] = "###############";//ע��˴���#����Ӧ�ø�str1�ĳ�����ͬ
//	int left = 0;
//	int right = strlen(str1) - 1;
//	printf("%s\n", str2);
//	while (left <= right) {
//		Sleep(500);
//		system("cls");
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		right--;
//		left++; 
//	}
//		system("pause");
//		return 0;
//}
//*****************************************************
//�����n�Ľ׳�
//int main(){
//	int n = 5;
//	int s = 1;
//	for (int i = 1; i <= n; i++){
//		s = s*i;
//	}
//	printf("%d", s);
//	system("pause");
//	return 0;
//}
//************************************************************
//����1!+2��+3!+...+10!
//int main(){
//	int n = 0; //���������������׳���͵Ľ����
//	//int s = 1;//ע��������int s=1����λ��ʹ�ò��Ծ������ֵ����
//	for (int i = 1; i <= 10; i++){
//		  //��һ��ѭ���������
//		int s = 1;
//		for (int j = 1; j <=i; j++){//�ڶ���ѭ�����Ƶ�ǰ���ֽ׳�
//			s = s*j;
//		}
//		n = n + s;
//	}
//	printf("%d", n);
//	system("pause");
//	return 0;
//}
//int factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result = result*i;
//	}
//	return result;
//}
//
//int main(){
//	int n = 10;
//	int sum = 0;
//	for (int i = 1; i <= n; i++){
//		sum = sum + factor(i);
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

