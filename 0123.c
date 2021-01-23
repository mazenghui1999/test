//函数递归求n的阶乘
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////普通方法求阶乘的函数；
////int Factor(int n){
////	int result = 1;
////	for (int i = 1; i <= n; i++){
////		result *= i;
////	}
////	return result;
////}

////函数递归的方法求阶乘
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
//		printf("%d的阶乘是%d\n", n, result);
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
//	printf("请输入这个数字：\n");
//	scanf("%d", &n);
//	reveal(n);
//	system("pause");
//	return 0;
//}

//实现一个函数，判断一个数是不是素数
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
//此处注意形参的改变与实参之间的取址传递
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
//		printf("请输入数字：\n");
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
//		pri(num / 10);      //注意空函数中不需要返回值
//	}
//	printf ("%d  ",num%10);/// 若此处的返回值返回之后函数将不在返回；
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
//非递归
//int factor(int n){
//	int res=1;
//	for (int i = 1; i <= n; i++){
//		res *= i;
//	}
//	return res;
//}
// 递归
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