//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//void main(){
//	char str[20] = "12";
//	printf("%s\n", str);
//	memcpy(str, str + 1, 1);
//	printf("%s\n", str);
//	system("pause");
//}

//内存重叠问题

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(){
//	char str[23] = "abcdefgh";
//	printf("%s\n", str);
//	memcpy(str + 2, str, 4);
//	printf("%s\n", str);
//	system("pause");
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//void*  my_memcpy(void* dest, const void *src, size_t count){
//	assert(dest != NULL&&src != NULL);
//	char *pdest = (char*)dest;
//	const char *psrc = (const char*)src;
//	if (psrc < pdest || pdest < psrc + count)//五种情况中出现内存覆盖
//	{
//		psrc = psrc + count - 1;
//		pdest = pdest + count - 1;
//		while (count-- > 0)
//			*pdest-- = *psrc--;
//
//	}
//	else{
//		while (count-- > 0)
//		{
//			*pdest++ = *psrc++;
//		}
//	}
//	return dest;
//}
//void main()
// {
//	char str[23] = "abcdefgh";
//	printf("%s\n", str);
//	//my_memcpy(str + 2, str, 4);
//	//memcpy(str + 2, str, 4);
//	memmove(str + 2, str, 4);
//	printf("%s\n", str);
//	system("pause");
//  }

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(){
//	char* arr = "万里长城用不倒";
//	const char* arr2 = "长";
//	char* a;
//	a = strstr(arr, arr2);
//	printf("%s\n", a);
//	system("pause");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(){
//	char str[80] = "this is a dog ";
//	const char str2[2] = " ";
//	char* str1;
//
//	str1 = strtok(str, str2);
//
//	while (str1 != NULL){
//
//		printf("%s\n", str1);
//
//		str1 = strtok(NULL, str2);
//	}
//	system("pause");
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void main(){
//	char *str = "1223";
//	printf("%s\n", str);
//	int a = atoi(str);
//	printf("%d\n", a);
//
//	system("pause");
//}


#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
	if (argc != 3){
		printf(" 错误！");
		return;
	}

	int a = atoi(argv[1]) + atoi(argv[2]);
	printf("%d+%d=%d\n", atoi(argv[1]), atoi(argv[2]), a);
	system("pause");

}