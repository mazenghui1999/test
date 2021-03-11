//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//    int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));   //结果是16 
//	printf("%d\n", sizeof(a + 0)); //结果应该是4
//	printf("%d\n", sizeof(*a));   //  结果为4
//	printf("%d\n", sizeof(a + 1));  //8 错误答案应该是4
//	printf("%p\n", a + 1);
//	printf("%d\n", sizeof(a[1]));   //4
//	printf("%d\n", sizeof(&a));     //4
//	printf("%d\n", sizeof(*&a));   //4错误 16
//	printf("%d\n", sizeof(&a+1));   //8错误  4
//	printf("%p\n", (&a + 1));
//	printf("%d\n", sizeof(&a[0]));   //4
//	printf("%p\n", (&a[0]));
//	printf("%d\n", sizeof(&a[0]+1));
//	printf("%p\n", (&a[0] + 1));//8错误  4  
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
////////二级指针  与原参数类型不符合
////void func4(int* arr[]){
////}
////void func5(int** arr){
////}
////////////
// void fun6(int arr[][4]){
//}若此处的4为5那么形参与实参的类型不同

////c语言中的“弱类型”导致的
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
