//��ϰ�ϴεĿγ�
//1дһ��5�Ľ׳˵Ĵ���
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int n = 5;
//	int result  = 1;
//	for (int i = 1; i <= n; i++){
//		result = result*i;
//	}
//	printf("result=%d\n", result);
//	system("pause");
//	return 0;
//}
//////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//int factor(int n){
//	int result = 1;		
//	for (int i = 1; i <= n; i++){
//		result = result*i;
//	}
//	return result;
//}
//int main(){
//	int n = 10;
//	int sum = 0;
//	for (int j = 1; j <= n; j++){
//		sum = sum + factor(j);
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}
//////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//int main(){
//	char str1[] = "welcome to bit!";
//	char str2[] = "***************";
//	int left = 0;
//	int right = strlen(str1) - 1;
//	printf("%s\n", str2);
//	while (left <= right){
//		Sleep(800);
//		system("cls");
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		left++;
//		right--;
//	}
//
//	system("pause");
//	return  0;
//}
////////////////////////////////
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	char password[20] = "888888";
//	char input[20] = { 0 };
//	for (int i = 1; i <= 3; i++){
//		printf("����������:");
//		scanf("%s", input);
//		if (strcmp(input, password) == 0){
//			printf("��½�ɹ�!\n");
//			break;
//		}
//		else{
//			printf("�������!\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int toFind = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof (arr[0]) - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (toFind < arr[mid]){
//			right = mid - 1;
//		}
//		else if (toFind>arr[mid]){
//			left = mid + 1;
//		}
//		else {
//			printf("�ҵ��˶�Ӧ��Ԫ�أ��±�Ϊ��%d\n",mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("������");
//	}
//	system("pause");
//	return 0;
//}