//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////此处用到了求取局部变量的方法
////int steLen(char arr[]){
////	int count = 0;
//	for (int i = 0; arr[i] != '\0'; i++){
////		count++;
////	}
////	return count;
////}
////递归版本求长度
//int steLen(char arr[]){
//	if (arr[0] == '\0'){
//		return 0;
//	}
//	return 1+steLen(arr+ 1);
//}
//
//int main(){
//	char arr[] = {0};
//	while (1){
//		scanf("%s", arr);
//		int ret = steLen(arr);
//		printf("%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>

//int main(){
//	int arr[10] = { 1, 2, 3 };
//	for (int i = 0; i <= 9; i++){
//		arr[i] = i;
//		printf("%p  %d\n", &arr[i], arr[i]);
//	}
//	system("pause");
//	return 0;;
//}

//自动填充一些无意义的数据
//int main(){
//	int arr[10];
//	for (int i = 1; i <= 9; i++){
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//斐波那契数列
//递归
//int fib(int n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//int fib(int n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	int last1 = 1;
//	int last2 = 1;
//	int a;
//	for (int i = 3; i <= n; i++){
//        a = last1 + last2;
//		last1 = last2;
//		last2 = a;
//	}
//	return a;
//}
//int main(){
//	int n;
//	while (1){
//		scanf("%d",&n);
//		int result = fib(n);
//		printf("%d\n", result);
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[][4] = {
//		{1,2},
//		{3,4}
//	};
//	

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//非递归
//int strLen(char arr[]){
//	int count = 0;
//	for (int i = 0; arr[i] != '\0'; i++){
//		count++;
//	}
//	return count;
//}

//递归
//int strLen(char arr[]){
//	if (arr[0] == '\0'){
//		return 0;
//	}
//	return 1 + strLen(arr + 1);
//}
//int main(){
//	char arr[] = {0};
//	while (1){
//		scanf("%s", arr);
//		int a = strLen(arr);
//		printf("%d\n", a);
//	}
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void reverse_string(char* string){
//	char *left = string;
//	char *right = string + strlen(string) - 1;
//	while (left < right){
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", string);
//}
// 递归
//void reverse_string(char* arr){
//    
//
//		int len = strlen(arr);
//		char tmp = *arr;
//		*arr = *(arr + len - 1);
//
//		*(arr + len - 1) = '\0';
//		if (strlen(arr + 1) >= 2)
//			reverse_string(arr + 1);
//
//		*(arr + len - 1) = tmp;
//}
//int main(){
//	char arr[] = "abcdefg";
//    reverse_string(arr);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int DigitSum(int num){
//	int mult = 0; 
//	if (num/10==0){
//		return num;
//	}
//	return DigitSum(num / 10) + num % 10;
//}
//int main(){
//	int n = 0;
//	while (1){
//		scanf("%d", &n);
//		int num = DigitSum(n);
//		printf("%d\n", num);
//	}
//	system("pause");
//	return 0;
//}
///递归n的k次方
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int power(int a,int b){
//	if (b == 0){
//		return 1;
//	}
//	return a*power(a, b - 1);
//}
//int main(){
//	int n = 0,k = 0;
//	while (1){
//		scanf("%d%d", &n, &k);
//		int result = power(n, k);
//		printf("%d", result);
//	}
//	system("pause");
//	return 0;
//}