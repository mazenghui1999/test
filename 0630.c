//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//
//	char str1[] = "hello";
//	char str2[] = "hello";
//	char *str3 = "hello";
//	char *str4 = "hello";
//
//	if (str1 == str2)
//	{
//		printf("111");
//	}
//	else
//		printf("222");
//	if (str3 == str4){
//
//		printf("333");
//	}
//	else
//		printf("444");
//
//	system("pause");
//	return (0);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	int ar[3] = { 10, 20, 30 };
//	printf("%p\n", ar);
//	printf("%p\n", &ar[0]);
//	printf("%p\n", &ar);
//
//
//	int *p1 = ar;
//	int *p2 = &ar[0];
//	int (*p3)[3] = &ar;   //����ָ��   ָ�������ָ��

//   ָ������    ����ָ�������   int  *ar[3];
//   ����ָ��    ���������ָ��   int (*p)[3];   
//
//
//	printf("%p  :  %p\n", p1, p1 + 1);
//	printf("%p  :  %p\n", p2, p2 + 1);
//	printf("%p  :  %p\n", p3, p3 + 1);
//
//	int a=sizeof(p3);
//	printf("%d\n" ,a);    ////ָ��ĳ�����ȻΪ4
//
//	system("pause");
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int ar[3] = { 10, 20, 30 };
//	int(*p)[3] =&ar;
//
//
//	printf("%d\n", p[0]);
//	printf("%d\n", p[0][0]);
//	printf("%d\n", p[0][2]);
//	system("pause");
//	return 0;
//
//}


//#include  <stdio.h>
//#include <stdlib.h>
//
//int  fun(int a, int b)
//{
//	int ret = a + b;
//	return ret;
//}
//
//void  main(){
//
//	int res = fun(10, 20);
//	printf("%d\n", res);
//
//	int(*pfun)(int, int);
//    /////////////////////////////   ����ָ��
//	pfun = &fun;
//	int ros = (*pfun)(10, 30);
//	printf("%d\n", ros);
//
//	system("pause");
//}

/////////
//һ��������   int a;
//һ��ָ����������ָ��    int *a;
 

///  int *(*(*fun)(int*))[10]
////////////////////////////////////////////////////////////////////////// 
     //ʵ��    typedef  int* Ar[10];
     //        typedef Ar*(*pFun)(int *)
     //        pFun fun

//#include  <stdio.h>
//#include  <stdlib.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int *p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){
//
//		printf("%d\n", *p);
//		++p;
//	}
//	system("pause");
//	return 0;
//}

//void print(int arr[]){
//	int *p = arr;
//	for (int i = 0; i < 4; i++)
//	{
//    	printf("%d\n", *(p + i));
//	}
//
//
//}
//int main(){
//	int arr1[4] = { 0, 1, 2, 3 };
//	print(arr1);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//void Rev(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right){
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//	}
//
//int main(){
//
//	char arr[] = "abcdef";
////	char *p = arr;
////	for (int i = 2; i <= sizeof(arr); ++i){
//
////		printf("%c", *(p + sizeof(arr)-i));
//
////	}
//	Rev(arr);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 2;
//	int sum = 0;
//	int b = 0;
//	for (int i = 0; i < 5; i++){
//		b = b * 10 + a;
//		printf("%d\n", b);
//		sum = sum + b;
//		printf("%d\n", sum);
//	}
//	system("pause");
//	return 0;
//}

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	scanf("%d", &a);
	int b = a;
	int c = a;
	while (c > 1)
	{
		b =b+c/2;
		c = c / 2 + c % 2;
	}
	printf("%d\n", b);
	system("pause");
	return 0;
}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//����2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//	system("pause");
//	return 0;
//}