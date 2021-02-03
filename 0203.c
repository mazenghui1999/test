//#include <stdio.h>
//#include <stdlib.h>
 /*
int i;
int main(){

	i--;
	if (i > sizeof(i)){

		printf(">\n");
	}
	else{
		printf("<\n");
	}
	system("pause");
	return 0;
}*/


//int strl(char* str){
//	if (*str == '\0'){
//		return 0;
//	}
//	return 1 + strl(str + 1);//这里的加一指的是指针加一
//}



//int main(){
//	char* p = NULL;
//	printf("%p\n", p + 1);
//
//	short* p2 = NULL;
//	printf("%p\n", p2 + 1);
//
//	int* p3 = NULL;
//	printf("%p\n", p3+ 1);
//
//	double* p4 = NULL;
//	printf("%p\n", p4 + 1);
//
//	char* p5 = 0x100;
//	printf("%p\n", p5 - 1);
//
//	int* p6 = 0x100;
//	printf("%p\n", p6 - 1);
//
//	system("pause");
//	return 0;
//}
//int main(){
	
	/*char a = 'a';
	char* pa = &a;

	short b = 10;
	short* pb = &b;

	int c = 20;
	int *pc = &c;

	printf("%d\n", sizeof(pa));
	printf("%d\n", sizeof(pb));
	printf("%d\n", sizeof(pc));
*/
//	system("pause");
//	return 0;
//}
//int main(){
	//int num = 10;
	//printf("%p\n",&num);
	//int* p = &num;
	////int*=100;未定义行为
	////解引用就是根据内存地址，找到地址对应的内容。
	//printf("%d\n", *p);

	//指针变量的类型有很多种
	//这些都是不同类型的。指针类型就是一个统称
	//int*a = NULL;
	//char*b = NULL;
	//short*c = NULL;
	//double*d = NULL;
	//float*e = NULL;
	//system("pause"); 
	//return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void find(int m, int n){
//	int count = 0;
//	for (int i = 0; i < 32; i++){
//		if ((m&(1 << i)) != (n&(1 << i))){
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//
//int main(){
//	while (1){
//		int m = 0;
//		int n = 0;
//		scanf("%d %d", &m, &n);
//		find(m, n);
//	}
//	system("pause");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int calc_diff_bit(int m, int n){
	int tmp = m^n;
	int count =0 ;
	while (tmp){
		tmp = tmp&(tmp - 1);
		count++;
	}
	return count;
}
int main(){
	int m, n;
	while (scanf("%d,%d", &m, &n) == 2){

		printf("%d\n", calc_diff_bit(m, n));
	}
	system("pause");
	return 0;
}

