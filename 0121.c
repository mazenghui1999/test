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
//	printf("�������������֣�\n");
//	int num1, num2;
//	scanf("%d  %d", &num1, &num2);
//	int num3 = Max(num1, num2);
//	printf("�ϴ��������: %d\n", num3);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	const char  a[] = "hello";
//	a[0] = 'H';// ���ܹ��ı䣬��Ϊ֮ǰ�и�const������
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
//	printf("��������������:\n");
//	scanf("%d %d", &num1, &num2);
//	int min = (num1 < num2) ? num1 : num2;
//	for (int i = min; i >= 1; i--){
//		if (num1%i == 0 && num2%i == 0){
//			printf("���ǵ����Լ����:%d", i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//շת�����
//#define _CRT_SECURE_NO_WARNINGS 
//#include  <stdio.h>
//#include <stdlib.h>
//int main(){
//	int num1, num2;
//	printf("��������������:\n");
//	scanf("%d %d", &num1, &num2);
//	int rem;
//	while ((rem = num1%num2) != 0){
//		num1 = num2;
//		num2 = rem;
//	}
//	printf("���ǵ����Լ����:%d", num2);
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