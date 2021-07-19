//#include <stdio.h>
//#include <stdlib.h>
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//	{ 9802, "wang", 19 },
//	{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d ", a + b, c);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++){
//		a[i] = -1 -i;
//	}
//	printf("%d", strlen(a));
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct S{
//
//	int a;
//	int b;
//};
//
//int main(){
//	struct S a, *p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);
//	//printf("%d\n", *p.a);
//	printf("%d\n", p->a);
//	printf("%d\n", (*p).a);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#define b  6
//int main(){
//	int a[b][b] = { 0 };
//	for (int i = 0; i < b; i++){
//		for (int j = 0; j <= i; j++){
//			if (i == j){
//				printf("%d\n", a[i][j] = 1);
//			}
//			else if (j == 0){
//				printf("%d ",a[i][0] = 1);
//			}
//			else {
//				printf("%d ",a[i][j]=a[i-1][j-1]+a[i-1][j]);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//	int main()
//	{
//		int murder[4] = { 0 }; //默认4个人都不是凶手
//
//		int i;
//		for (i = 0; i < 4; i++) //遍历假设四个人中的某个人是凶手
//		{
//			murder[i] = 1; //假设某个人是凶手
//			if ((murder[0] != 1) +
//				(murder[2] == 1) +
//				(murder[3] == 1) +
//				(murder[3] != 1) == 3)
//			{
//				break; //满足就代表就是你了！
//			}
//			murder[i] = 0; //不满足还他清白
//		}
//
//		putchar('A' + i); //打印凶手的编号。我们的编号是0 1 2 3，加上'A'后变成A B C D。
//		system("pause");
//		return 0;
//	}
//
