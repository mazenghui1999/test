//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int  aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = (int*)(&aa + 1);
//	int *p2 = (int*)(*(aa + 1));//二维数组加一   指向下一行  int(*a)[5]
//	printf("%d,%d", *(p - 1), *(p2 - 1));
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	char *a[] = { "good", "work", "aaa" };
//	char **p = a;
//	p++;
//	printf("%s", *p);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char ar[10];
//	int i;
//	for (i = 0; i < 5; i++){
//
//		ar[i] = 'a' + i;
//	}
//	ar[i] = '\0';        //'0'!='\0'     '\0'==0  \的意思是转义字符
//	printf("%d\n", strlen(ar));
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void* fun(int *v, int a, int b){
//    *v = a + b;
//	return v;
//}
//int main(){
//	int v;
//	int x = 20;
//	fun(&v, x, 20);
//	printf("%d\n", v);
//	system("pause");
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy(char* a1, const char* a2)
{
	for (int i = 0; i < strlen(a2)+1; i++)
	{
		a1[i] = a2[i];
	}
	char* a = a1;
	return a;
}

int main(){
	char str1[] = "hello";
	char *str2 = "aaaaaaac";
	printf("%s\n", str1);
	char* p = copy(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}