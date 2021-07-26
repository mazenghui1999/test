//#include <stdio.h>
//#include <stdlib.h>
//
//void main(){
//	char  a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d,%d,%d", a, b, c);
//
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void main(int argv,char *argc[]){
//	char a = -128;
//	printf("%u\n", a); //输出的是4个字节
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(int argc, char*argv[]){
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;      //-128-1=127
//	}
//	printf("%d", strlen(a));
//	system("pause");  // 255  0出
//}
//#pragma pack(1)//程序指定对齐值


//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma  pack(4)
//typedef struct Test
//{
//
//	short a;
//	struct {
//		int b;
//		double c;
//		long d;
//	};
//	int e;
//}Test;
//
//void main(int argv, char*argc[]){
//	printf("%d\n", sizeof(Test));
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Test
//  {
//	char a;
//	double b;
//	int c;
//  }Test;
//void  main(int argv,char *argc[]){
//
//	printf("%d\n", sizeof(Test));
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma pack(4)
//unsigned short *puc[10][10];  指针数组
//typedef struct unRec
//{
//	unsigned long ullndex;
//	unsigned short usLevel[7];
//	unsigned char ucPos;
//}REC_S;
//REC_S stMax, *pstMax;
//
//void main(){
//	printf("%d\n", sizeof(*pstMax));
//	system("pause");
//}

#include <stdio.h>
#include <stdlib.h>

typedef struct Test 
{
	char a : 1;
	char b : 1;
	char c : 6;

}Test;

void main(){

	printf("%d\n", sizeof(Test));
	system("pause");
}
