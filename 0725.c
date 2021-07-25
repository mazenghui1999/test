//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//
//void main(){
//	FILE *fp = fopen("Test.txt", "r");
//	if (fp == NULL){
//
//		printf("errno=%d\n", errno);
//		char *err_msg = strerror(errno);
//		printf("err_msg=%s\n", err_msg);
//			}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main(int argc, char *argv[]){
//
//	if (argc != 3)
//	{
//		printf("error!\n");
//		system("pause");
//	}
//
//	int result = atoi(argv[1]) + atoi(argv[2]);
//	printf("%d+%d=%d\n", atoi(argv[1]), atoi(argv[2]), result);
//	system("pause");
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//void main(){
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	system("pause");
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void main(int argc, char *argv[]){
//
//	int a = 257;
//	printf("%d\n",(char)a);
//	char b = (char)a;
//	if (b == 1){
//		printf("Ð¡¶Ë\n");
//	}
//	else{
//		printf("´ó¶Ë\n");
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void main(int argv,char *argc[]){
//
//	union 
//	{
//		int i;
//		char a;
//	}u;
//	u.i = 1;
//	if (u.a==1)
//	{
//		printf("little");
//	}
//	else{
//		printf("big");
//	}
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void main(int argv,char *argc[]){
//	union 
//	{
//		short k;
//		char i[2];
//	}*s,a;
//
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	system("pause");
//}