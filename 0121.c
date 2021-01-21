//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//
//int Max(num1, num2){
//	if (num1 > num2){
//		return num1;
//	}
//	else{
//		return num2;
//	}
//}
//int main(){
//	printf("请输入两个数字：\n");
//	int num1, num2;
//	scanf("%d  %d", &num1, &num2);
//	int num3 = Max(num1, num2);
//	printf("较大的数字是: %d\n", num3);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	const char  a[] = "hello";
//	a[0] = 'H';// 不能够改变，因为之前有个const的修饰
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num1, num2;
//	printf("请输入两个数字:\n");
//	scanf("%d %d", &num1, &num2);
//	int min = (num1 < num2) ? num1 : num2;
//	for (int i = min; i >= 1; i--){
//		if (num1%i == 0 && num2%i == 0){
//			printf("他们的最大公约数是:%d", i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//辗转相除法
//#define _CRT_SECURE_NO_WARNINGS 
//#include  <stdio.h>
//#include <stdlib.h>
//int main(){
//	int num1, num2;
//	printf("请输入两个数字:\n");
//	scanf("%d %d", &num1, &num2);
//	int rem;
//	while ((rem = num1%num2) != 0){
//		num1 = num2;
//		num2 = rem;
//	}
//	printf("他们的最大公约数是:%d", num2);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int year;
//	for (year = 1000; year <= 2000; year++){
//		if ((year % 4 == 0 && year % 100 != 0) ||(year % 400 == 0)){
//			printf("%d   ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}