//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Student{
//	int id;
//	char name[1024];
//}Student;
//
//
//int main(){
//	Student student = { 12, "kaka" };
//	printf("%d\n", student.id);
//
//	Student* p = &student;
//	printf("%d\n", p->id);
//	printf("%\n", p->name);
//
//	system("pause");
//	return 0;
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	int a = 10;
//	int b = 0x11223344;
//	char name[] = "kakaka";
//	system("pause");
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int isBigEnd(){
//	int a = 0x11223344;
//	int* p = &a;
//	char* p2 = (char*)p;
//	if (*p2 == 0x11){
//		return 1;
//	}
//	return 0;
//}
//
//int main(){
//	int a = isBigEnd();
//	if (a == 1){
//		printf("大端字节序\n");
//	}
//	else{
//		printf("小端字节序\n");
//	}
//	system("pause");
//	return 0;
//}
// 

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){ 
//
//	int a = -10;           //因为是小端模式
//	system("pause");
//	return 0;
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//#define N 1e-2 
//
//int main(){
//	float a = 19.0;
//	double b = a / 7.0;//实际开发中不能用浮点数之间进行==比较
//	/*if (b*7.0 == a){
//		printf("相等！\n");
//		}
//		else{
//		printf("不相等！\n");
//		}*/
//	//1e-4=>0.0001;
//	if ((( b*0.7-a) > -N) && (( b*0.7-a) < N)){
//		printf("相等，此处不是严格相等，而是允许误差\n");
//	}
//	else {
//		printf("不相等\n");
//	}
//	system("pause");
//	return 0;
//}