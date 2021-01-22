//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int num = 0;
//	while (num <= 10){
//		printf("%d\n", num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//int Max(int a, int b){
//	if (a > b){
//		return a;
//	}
//	else {
//		return b;
//	}
//}
//int main(){
//	int num1, num2;
//	printf("请输入两个数字：\n");
//	scanf("%d %d", &num1, &num2);
//	int ret = Max(num1, num2);
//	printf("ret=%d", ret);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//void Swap(int* x,int* y){
//	int tem = *x;
//	*x = *y;
//	*y = tem;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a=%d,b=%d", a, b);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//void  IsPrime(int num){
//	if (num == 2){
//		printf("%d是个素数\n", num);
//	}
//	for (int i = 2; i < num; i++){
//		if (num%i == 0){
//			printf("该数字不是个素数！\n");
//			break;
//		}
//		else {
//			printf("%d是个素数\n",num);
//			break;
//		}
//	}
//}
//int main(){
//	int input;
//	while (1){
//		printf("请输入数：");
//		scanf("%d", &input);
//		IsPrime(input);
//	}
//	system("pause");
//	return 0;
//}
//函数写二分查找
//#include <stdio.h>
//#include <stdlib.h>
//int binarySearch(int arr[],int len,int toFind){
//	int left = 0;
//	int right = len - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (toFind > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main(){
//	//创建一个有序的数组
//	int arr[] = { 2, 3, 4, 5, 6, 7, 9, 10 };
//	int len = (sizeof(arr) / sizeof(arr[0]));
//	//注意函数的返回值表示查找元素的下标
//	int ret = binarySearch(arr,len, 10);	
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//void func(int* num){
//	(*num)++;//注意此处的括号要影响逻辑关系
//}
//int main(){
//	while (1){
//		static int num = 0;
//		func(&num);
//		printf("%d", num);
//	}
//	system("pause");
//	return 0;
//}