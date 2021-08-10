//#include <stdio.h>
//#include <stdlib.h>
//
//struct S{
//	int data[1000];
//	int num;
//};
//struct S s = { { 1, 2, 3, 4 }, 1000 };
////结构体传参
//
//void printf1(struct S s)
//	{
//	printf("%d\n", s.num);
//	}
//void printf2(struct S *ps)
// {
//	printf("%d\n", ps->num);
// }
//
//int main(int argc, char * argv[]){
//	printf1(s);
//	printf2(&s);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef enum TYPE
//{
//	ADD,
//	SUM,
//	MUL,
//	DIV
//}TYPE;
//
//void main(int argc, char* crgv[])
//	{
//	printf("%d %d %d %d\n", ADD, SUM, MUL, DIV);
//	printf("%d\n", sizeof( TYPE));
//	system("pause");
//	}

//#include <stdio.h>
//#include <stdlib.h>
//typedef union TEST
//{
//	char a;
//	char b;
//	int c;
//
//}test;
//
//void main(){
//
//	printf("%d\n", sizeof(test));
//	
//	system("pause");
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//union
//{
//	int a;
//	char b;
//}un;
//void main(int argv, char* argc[]){
//	un.a = 1;
//	if (un.b == 1){
//		printf("xiao");
//	}
//	else
//	{
//		printf("da");
//	}
//
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//union
//{
//	int i;
//	char c;
//}un;
//void main(){
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	system("pause");
//}