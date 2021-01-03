//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0; //定义变量并初始化
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{//闰年=能被4整除但不能被100整除 + 能被400整除的
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main(){
//		int a;
//		int b;
//		int c;
//
//		printf("请输入你要求的两个数：\n");
//		scanf("%d %d", &a, &b);         //输入要求的数a,b
//
//		c = (a > b) ? b : a;             //三目运算符，将小的值赋给c
//
//		if (a%c != 0 || b%c != 0)       //如果ab无法除尽c
//		{
//			c--;                        //c--再继续除直到除尽
//		}
//
//		printf("最大公约数是：%d\n", c);//输出此时的数
//		system("pause");
//		return 0;
//	}
//int main(){
//	for (int i = 1; i <= 100; i++){
//		if (i % 3 == 0){
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//void swap(int *x, int *y){
//	int t = *x;
//	*x = *y;
//	*y = t;
//}
//int main(){
//	int a,b,c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <b) swap(&a,&b);
//	if (c >a) swap(&a,&c);
//	if (c > b) swap(&c, &b);
//	printf("%d,%d,%d", a,b,c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (a <101)
//	{
//		b = b + a;
//		a++;
//	}
//	printf("%d", b);
//for (int i = 1; i <= 10; i++)
//{
//	printf("%d\n", i);
//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n =1 ;
//	while(n < 8)
//	{
//	if (n == 4)
//	   {
//      n++；
//		continue; n==4的时候continue退出到while中一直小于8的时候就会进入死循环。故需要在continue的前面加入n++跳出循环。
//	   }
//	printf("吃第%d个包子\n", n);
//	n++;
//
//     }
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int  n= 1;
//	while (n <= 5)
//	{
//		if (n ==3)
//		{
//          printf("吃出了半条虫\n");
//			break;
//		}
//		printf("吃第%d个把包子\n",n);
//	    n++;
//	}
//	system("pause");
//	return 0;
//}
//for(int i = 1; i <= 10; i++)
//{
//	printf("%d\n", i);
//}
//int main(){
//	for (int i = 1; i <= 10; i++){
//		if (i == 3){
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;  当for循环语句中的条件判断语句用到复制表达的时候只存在真与假两种情况
//		printf("123");
//	}
//	system("pasue");
//	return 0;
//}
//练习计算n的阶乘；
//int main(){
//	int result = 1;
//	int n = 0;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	for (int i= 1;i<= n;i++){
//		result = result*i;
//	}
//	printf("%d\n", result);
//
//	system("pause");
//	return 0;
//}
//计算从1到10的阶乘的和
//int main(){
//	int a = 1;
//	int s = 0;
//	for (int j = 1; j < 11; j++){
//	    a = a*j;
//		s = s + a;
//	}
//	printf("%d", s);
//	system("pause");
//	return 0;
//}
