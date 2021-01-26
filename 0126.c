//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a = (1, 2, 3);
//	printf("%d", a);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int fun(int a[]){
//	a[0] = 10;
//	a[1] = 20;
//	return 0;
//}
//int main(){
//	int arr[] = { 0 };
//	fun(arr);
//	printf("%d   %d\n", arr[0], arr[1]);
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int prime(int num){
//	for (int i = 2; i <= sqrt(num); i++){
//		if (num%i == 0){
//			return -1;
//		}
//	}
//	return 0;
//}
//int main(){
//	for (int i = 100; i <= 200; i++){
//		if (prime(i) == 0){
//			printf("%d  ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void print(int num){
//	if (num < 10){
//		return num;
//	} 
//	print(num / 10);
//	printf("%d\n", num % 10);
//}
//int main(){
//    print(222334);
//	getchar();
//	return;
//}
#include <stdio.h>
#include <stdlib.h>

//int str(char arr[]){
//	int count=0;
//	for (int i = 0; arr[i] != '\0'; i++){
//		count++;
//	}
//	return count;
//}
//int str(char *arr){
//	if (*arr == '\0'){
//		return 0;
//	}
//	return 1 + str(arr + 1);
//}
//int main(){
//	int a = str("hehe");
//	printf("%d", a);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//char* reverse_string(char* str){
//	char *start = str;
//	char *end = str + strlen(str) - 1;
//	for (; start < end; start++, end--){
//		char ch = *start;
//		*start = *end;
//		*end = ch;
//	}
//	return str;
//}
//char * reverse_string(char*str){
//	if (strlen(str) < 2){
//		return str;
//	}
//	char ch = *str;
//	int len = strlen(str) - 1;
//	*str = *(str + len);
//	*(str + len) = ch;
//
//	ch = *(str + len);
//	*(str + len) = '\0';
//	reverse_string(str + 1);
//	*(str + len) = ch;
//	return str;
//}
//int main(){
//	char tmp[] = "hello";
//	printf("%s\n", reverse_string(tmp));
//	system("pause");
//	return 0;
//}