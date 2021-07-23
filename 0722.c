//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char* str1 = "hellohhh";
//	char* str2 = "helloaaa";
//	int n = 7;
//	int ret = strncmp(str1, str2, n);
//
//	if (ret == 0){
//		printf("1=2");
//	}
//	else{
//		printf("%d", ret);
//	}
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[20];
//	int i;
//	for (i = 0; i < 5; i++){
//		str1[i] = 'a' + i;
//	}
//	str1[i] = '\0';
//	char *str2 = "Bit";
//	printf("str1=%s\n", str1);
//	//char *str3 = strncat(str1, str2, 2);
//	//printf("%s\n", str3);
//	char *str4 = strncpy(str1, str2, 2);
//	printf("%s\n", str4);
//
//	system("pause");
//	return 0;
//}

//strstr 用于查找字符串

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char *str1 = "你好，我是塔子咪";
//	char *str2 = "他";
//
//	char *ret = strstr(str1, str2);
//	if (ret != NULL){
//		printf("ret=%s\n", ret);
//	}
//	else {
//		printf("str2不存在！\n");
//	}
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hello_This_is_a_dog_";
//	char *ret;
//	ret= strtok(str1, "_");
//	while (ret != NULL){
//		printf("%s\n", ret);
//		ret = strtok(NULL, "_");
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//void  main(){
//	FILE *fp = fopen("Test.txt", "r");
//	if (fp == NULL){
//		printf("errno=%d\n", errno);
//		char *err_msg = strerror(errno);
//		printf("%s\n", err_msg);
//	}
//	system("pause");
//	return ;
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//
//void  main(){
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 12 };
//	int b[20];
//	memcpy(b,a,sizeof(a));
//	printf("%d\n", *b);
//	system("pause");
//}