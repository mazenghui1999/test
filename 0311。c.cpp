//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//    int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));   //�����16 
//	printf("%d\n", sizeof(a + 0)); //���Ӧ����4
//	printf("%d\n", sizeof(*a));   //  ���Ϊ4
//	printf("%d\n", sizeof(a + 1));  //8 �����Ӧ����4
//	printf("%p\n", a + 1);
//	printf("%d\n", sizeof(a[1]));   //4
//	printf("%d\n", sizeof(&a));     //4
//	printf("%d\n", sizeof(*&a));   //4���� 16
//	printf("%d\n", sizeof(&a+1));   //8����  4
//	printf("%p\n", (&a + 1));
//	printf("%d\n", sizeof(&a[0]));   //4
//	printf("%p\n", (&a[0]));
//	printf("%d\n", sizeof(&a[0]+1));
//	printf("%p\n", (&a[0] + 1));//8����  4  
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//void func1(int arr[10]){
//}
//void func2(int arr[]){
//}
//void func3(int* arr){
//}
////////����ָ��  ��ԭ�������Ͳ�����
////void func4(int* arr[]){
////}
////void func5(int** arr){
////}
////////////
// void fun6(int arr[][4]){
//}���˴���4Ϊ5��ô�β���ʵ�ε����Ͳ�ͬ

////c�����еġ������͡����µ�
//int main(){
//	int arr[10] = {};
//	int* arr[10] = {};

//   int  arr[3][4]={};
//	func1(arr);
//	func2(arr);
//	func3(arr);
//	//func4(arr);
//	//func5(arr);
   //func6();
//	system("pause");
//	return 0;
//}
