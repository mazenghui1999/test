//#include <stdio.h>
//#include <stdlib.h>

//int main(){
//	/*char* p1 = (char*)0x100;
//	char* p2 = (char*)0x110; */
//
//	int* p1 = (int*)0x100;
//	int* p2 = (int*)0x110;
//
//	printf("%d\n", p2 - p1); //指针相减不是数字相减，指针相减的结果是两个地址之间隔了几个元素
//	printf("%x\n", p2 - p1);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 1;
//	int* p = &num;
//	if (p!=NULL){
//		printf("该指针不是空指针！\n");
//	}
//	else{
//		printf("该指针是空！\n");
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int myStrlen(char* str){
//	//int len = 0;
//	//for (int i = 0; str[i] != '\0'; i++){
//	//	len++;
//	//}
//	//return  len;
//	char* p = str;
//	while (*p != '\0'){
//		p++;
//	}
//	return p - str;
//}
//int main(){
//	char a[] = "hehe";
//	int b = myStrlen(a);
//	printf("%d\n", b);
//	printf("%d\n", sizeof(a));
//	system("pause");
//	return 0;
//}
//

// int* arr[4]={0} 指针数组  数组中存有指针
// int(*p)[4]=&arr; 数组指针  指针，指向长度为4的数组

// const int* p=&num;  改变值
// int const* p=&num;  改变值
// int*  const p=&num;  改变地址

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct  Student{
//	int id;
//	char name[1024];
//	int age;
//	double score;
//}Student;
//int main(){
//
//	Student  student = { 1, "kiki", 11, 85.0 };
//	printf("%d\n", student.id);
//	printf("%s\n", student.name);
//	printf("%d\n", student.age);
//	printf("%f\n", student.score);
//
//	student.id = 100;
//	strcpy(student.name, "haha");
//	printf("%d\n", student.id);
//	printf("%s\n", student.name);
//	system("pause");
//	return 0;
//}

