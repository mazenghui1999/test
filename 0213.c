//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//
//	//指针数组
//	//数组，每个元素都是一个指针类型的变量
//	int* arr[4] = { 0 };
//	//数组指针
//	//指针，指向了一个数组
//	int(*p)[4] = &arr;
//	system("pause");
//	return 0;
//}
//int num = 0;
//int num2 = 10;
////这个写法是限制p中保存的内存地址对应的变量不能被修改
//
//const int* p = &num;
//int const* p =&num;
//*p=100;//这个内容不可以被修改
//p=&num2;
//限制地址不能修改
// int* const p=&num;

      //结构体的名字是用户自己创建的类型的名字
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct Student{
//   //成员，属性，字段
//	int id;
//	char name[1024];
//	int age;
//	double score;
//}Student;
//int main(){
//	//结构体初始化的时候，初始值的顺序与定义的顺序必须一致
//	Student student = { 1, "zhangsan", 12, 98 };
//	printf("%d\n",student.id);
//	printf("%s\n", student.name);
//	printf("%d\n", student.age);
//	printf("%d\n", student.score);
//	student.id = 100;
//	printf("%d\n", student.id);
//	//student.name[0]='x';
//	//student.name[1]='i';
//	//student.name[2]='a';
//	//student.name[3]='o';
//	//student.name[4]='y';
//	//student.name[5]='i';
//	//
//	strcpy(student.name, "xiaoying");
//	printf("%s\n", student.name);
//	system("pause");
//	return 0;
//}

