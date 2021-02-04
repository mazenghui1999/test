
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int calc_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m, n;
//	while (scanf("%d %d", &m, &n) == 2)
//	{
//		printf("%d\n", calc_diff_bit(m, n));
//	}
//	system("pause");
//	return 0;
//}
//////////////////////////////////////////错误
//此处应该与一进行按位与的操作，不然求出来的值是2，4，等等。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void printBit(int m){
//	for (int i = 0; i < 32; i++){
//		int a = (m &(1 << i));
//		printf("%d ", a);
//		/*if (i % 2 == 0){
//			printf("偶数位%d  ", m&(1 << i));
//			}
//			else{
//			printf("奇数位%d  ", m&(1 << i));
//			}*/
//	}
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main(){
//	int m = 0;
//	while (1){
//		printf("请输入您的数字：\n");
//		scanf("%d", &m);
//		Printbit(m);
//	}
//	system("pause");
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////int countOne(int m){
////	int count = 0;
////	for (int i = 32; i > 0; i--){
////		if (((m>>i)&1) == 1){
////			count++;
////		}
////	}
////	return count;
////}
//int countOne(int m){
//	int count = 0;
//	while (m){
//		m = m&(m - 1);
//		count++;
//	}
//	return count;
//}
//int main(){
//	int m = 0;
//	while (1){
//		printf("请输入数字：\n");
//		scanf("%d", &m);
//		int n = countOne(m);
//		printf("%d\n", n);
//	}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//void Swap(int* a,int* b){
//	*a = *a^*b;
//	*b = *a^*b;
//	*a = *a^*b;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	Swap(&a, &b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}


