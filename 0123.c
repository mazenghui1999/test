//�����ݹ���n�Ľ׳�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////��ͨ������׳˵ĺ�����
////int Factor(int n){
////	int result = 1;
////	for (int i = 1; i <= n; i++){
////		result *= i;
////	}
////	return result;
////}

////�����ݹ�ķ�����׳�
//int Factor(int n){
//	if (n == 1){
//		return 1;
//	}
//	return n*Factor(n - 1);
//}
//int main(){
//	int n;
//	while (1){
//		scanf("%d", &n);
//		int result = Factor(n);
//		printf("%d�Ľ׳���%d\n", n, result);
//	}
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void reveal(int n){
//	if (n>9){
//		reveal(n / 10);
//	 }
//	printf("%d  ", n%10);
//}
//int main(){
//	int n;
//	printf("������������֣�\n");
//	scanf("%d", &n);
//	reveal(n);
//	system("pause");
//	return 0;
//}

//ʵ��һ���������ж�һ�����ǲ�������
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int prime(int n){
//	for (int j = 2; j <= sqrt(n); j++){
//		if (n%j == 0){
//			return 0;
//		}
//	}
//	return n;
//}
//int main(){
//	int n;
//	for (int i = 100; i <= 200; i++){
//	 n = prime(i);
//	 printf("%d  ", n);
//	}
//	system("pause");
//	return 0;
//}
//int isLeapyear(int year){
//	  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		return year;
//}
//�˴�ע���βεĸı���ʵ��֮���ȡַ����
//swap(int* a, int* b){
//	int tem = 0;
//	tem = *a;
//	*a = *b;
//	*b = tem;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void mult(int n){
//	for (int i = 1; i <= n; i++){
//		for (int j = 1; j <= i; j++){
//			printf("%d*%d=%d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int n;
//	while (1){
//		printf("���������֣�\n");
//		scanf("%d", &n);
//		mult(n);
//	}
//	system("pause");
//	return 0;
//
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void pri(int num){
//	if (num>9){
//		pri(num / 10);      //ע��պ����в���Ҫ����ֵ
//	}
//	printf ("%d  ",num%10);/// ���˴��ķ���ֵ����֮���������ڷ��أ�
//}
//int main(){
//	int n;
//	while (1){
//		scanf("%d", &n);
//		pri(n);
//	}
//	system("pause");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�ǵݹ�
//int factor(int n){
//	int res=1;
//	for (int i = 1; i <= n; i++){
//		res *= i;
//	}
//	return res;
//}
// �ݹ�
int factor(int n){
	if (n == 1){
		return 1;
	}
	return n*factor(n - 1);
}
int main()
{
	int n, a;
	while (1){
		scanf("%d", &n);
		a = factor(n);
		printf("%d\n", a);
	}
	system("pause");
	return 0;
}