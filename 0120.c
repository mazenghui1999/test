////�����ֵ���Ϸ��
//#define _CRT_SECURE_NO_WARNINGS
//// c++��ʹ�õ�ͷ�ļ�
////#include <cstdlib>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int menu(){
//	printf("******************************\n");
//	printf("********1.��ʼ��Ϸ************\n");
//	printf("********0.�˳���Ϸ************\n");
//	printf("******************************\n");
//	printf("����������ѡ��\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//void game(){
//	//1.�����Զ���һ�� 1��100�����������
//	int toGuess = rand() % 100 + 1;
//	//2.�ӿ���̨��ȡ�û������룻
//	while (1){
//		printf("������Ҫ�µ����֣�");
//		int input = 0;
//		scanf("%d", &input);
//		//3.�Ƚ��û���������ֺ�ϵͳ���ɵ�����֮��Ĺ�ϵ�������û���ʾ
//		if (input < toGuess){
//			printf("���ˣ�\n");
//		}
//		else if (input>toGuess){
//			printf("���ˣ�\n");
//		}
//		else {
//			printf("�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main(){
//	//��������Ϸ
//	//�����Զ�����һ���������1��100��
//	//�û�������һ��������ϵͳ������û���������
//	//����ʾ�û����ǲ¸��˻��ǲµ��ˣ����ǲ¶��ˡ�
//
//	//ʹ�õ�ǰ��ʱ����Ϊ�������
//	srand(time(0));
//	while (1){
//		int choice = menu();
//		if (choice == 1){
//			game();
//		}
//		else if (choice == 0){
//			printf("�����˳����ټ���\n");
//			break;
//		}
//		else{
//			printf("����������������룡\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

//��һ��һ�����������
//#include <stdio.h>
//#include <stdlib.h>
// 
//int main(){
//	int sum = 0;
//	for (int i = 0; i < 10; i++){
//		sum += i;
//		printf("%d\n", i);
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return  0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++){
//		if (b >= 20)break;
//		if (b % 3 == 1){
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//��10�������е����ֵ
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int i = 0;
//	int arr1[10] = { 1, 2, 2, 3, 4, , 1, 3, 4, 7 };
//	for (int i = 0; i < 10; i++){
//		for (int j = 0; j<10; j++){
//			if (arr1[i]>arr1[j]){
//				continue;
//			}
//			else{
//				arr1[i] = arr1[j];
//			}
//		}
//	}
//	printf("%d\n", arr1[i]);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++){
//		scanf("%d", &arr[i]);
//	}
//	//
//	max = arr[0];
//	for (i = 1; i < 10; i++){
//		if (arr[i]>max){
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}
// ����Ļ������˷��ھ���
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int sum = 0;
//	for (int i = 1; i < 10; i++){
//		for (int j = 1; j <=i; j++){
//			sum = i*j;
//			printf("%d*%d=%-4d", j, i,sum);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int meno(){
	int choice = 0;
	printf("=====================================\n");
	printf("=============1.��ʼ��Ϸ==============\n");
	printf("=============0.�˳���Ϸ==============\n");
	printf("=====================================\n");
	printf("����������ѡ��\n");
	scanf("%d",&choice);
	return choice;
}
void game(){
	//1 �������1��100֮��ȡ����
	int toGuess = rand() % 100 + 1;
	//2�û���������
	while (1){
		printf("�������������֣�");
		int input = 0;
		scanf("%d", &input);
		if (input < toGuess){
			printf("���ˣ�\n");
		}
        else if (input>toGuess){
		printf("���ˣ�\n");
					}
	    else {
		printf("�¶��ˣ�\n");
		break;
	   }
	}
}
int main(){
	srand(time(0));
	while (1){
		int choice = meno();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("�˳���Ϸ��\n");
			break;
		}
		else{
			printf("����������������룡\n");
		}
	}
		system("pause");
		return 0;
	}
