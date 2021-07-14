//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//
//char*  copy(char* a1, char* a2){
//	assert(a1 != NULL&&a2 != NULL); //第一步检查参数
//	char *pa1 = a1;
//	char *pa2 = a2;    //第二步保护参数
//
//	while (*pa2 != '\0'){
//		*pa1++ = *pa2++;
//	}
//	*pa1 = '\0';
//	return a1;
//}
//int main(){
//
//	char a1[] = "hello";
//	printf("%s\n", a1);
//	char a2[] = "bit";
//	char* p;
//	p=copy(a1, a2);
//	printf("%s\n", p);
//	system("pause");
//	return 0;
//}

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	char a[] = "cat";
//	char b[] = "dog";
//	printf("%s\n",strcpy(a, b));
//	system("pause");
//	return 0;
//}

//#define  _crt_secure_no_warnings
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char a[20] = "hello"; //a的空间必须足够大
//	char *b = "  bit"; 
//	//char *p = strcat(a, b);
//	int ret = strcmp(a, b);
//	printf("%d\n", ret);
//	//printf("%s\n", p);
//	system("pause");
//	return 0;
//}
//strncmp    strncat   strncpy   strnlen
// 
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(){
//	char* str1 = "hello";
//	char* str2 = "helloaaa";
//	int ret = strncmp(str1, str2, 6);
//	printf("%d\n", ret);
//	system("pause");
//}







