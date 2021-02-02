//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int CountBit(int num){
//	int count = 0;
//	for (int i = 0; i < 32; i++){
//		if (num &(1 << i)){
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int num = 0;
//	while (1){
//		printf("请输入您的数字：\n");
//		scanf("%d", &num);
//		int count = CountBit(num);
//		printf("%d\n", count);
//	}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int a =   0;
//	printf("%x\n", !a);
//	printf("%x\n", ~a);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 1;
//	int b = 2;
//	printf("%d\n", a&b);
//	printf("%d\n", a&&b);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	int ret = ++i + ++i + ++i;
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h> 
//
//int main(){
//	char st r[] = "hellobit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	system("pause");
//	return 0;
//}

//
//int main(){
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));
//	system("pause");
//	return 0;
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int* a, int* b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main(){
//   int  arr[] = {9,5,2,7,3,4,5,7};
//   int bound = sizeof(arr) / sizeof(arr[0]);
//   //[0,i)是已排序区间
//   //[i,bound)是待排序区间
//   for (int i = 0; i < bound; i++){
//	   for (int j = 0; j < i; j++){
//		   if (arr[j]>arr[j + 1]){
//			   swap(&arr[j],&arr[j + 1]);
//		   }
//		   else{
//			   continue;
//		   }
//	   }
//   }
//   system("pause");
//   return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
////void init(int arr[],int len){
////	for (int i = 0; i < len; i++){
////		arr[i] = 0;
////	}
////}
////void print(int arr[],int len){
////	for (int i = 0; i < len; i++){
////		printf("%d\n", arr[i]);
////	}
////}
//void reverse(int arr[], int len){
//	int left = 0;
//	int right = len - 1;
//	while (left < right){
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, len);
//	//print(arr, len);
//	reverse(arr, len);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 5, 6, 7, 8 };
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < size; i++){
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("%d\n", arr1);
//	printf("%d\n", arr2);
//	system("pause");
//	return 0;
//}