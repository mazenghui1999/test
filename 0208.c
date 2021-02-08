//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h >
//#include <stdlib.h>

//int str(char a[]){
//	/*if (  *a == '\0')*/
//	if(a[0]=='\0'){
//		return 0;
//	}
//	return 1 + str(a+1); 
//}

////此处用到了指针的运算
//int str(char a[]){
//	char* p = a;
//	while (*p != '\0'){
//		p++;
//	}
//	return p - a;
//}
//int main(){
//	char a[30] = {0};
//	while (1){
//		printf("请输入您的字符：\n");
//		scanf("%s", a);
//		int len = str(a);
//		printf("您的字符长度是：%d\n",len);
//	}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[3] = { 0 };
//	int* p1 = arr;
//	int* p2 = &arr[3] + 1;
//	if (p2 > p1){
//		printf("%p\n2da",p2);
//	}
//	else{
//		printf("1");
//	}
//	system("pause");
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

int main(){
	//int arr[4] = { 0 };
	//printf("%d\n", sizeof(arr));
	////隐式转换为指针
	//printf("%d\n", sizeof(arr + 0));

	int arr[4] = { 1, 2, 3, 4 };
	//int* p = arr;
	//int* p = &arr[0];
	//for (int* p = arr; p < arr + 4; p++)
	//{
	//	printf("%d\n", *p);
	//}
	/*int* p = arr;
	for (int i = 0; i < 4; i++){

		printf("%d\n", p[i]);
		printf("%d\n", *(p + i));
	}*/
	int* p = arr + 1;
	printf("%d\n", p[-1]);
	printf("%d\n", *(p - 1));
	system("pause");
	return 0;
}