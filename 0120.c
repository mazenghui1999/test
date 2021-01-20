////猜数字的游戏！
//#define _CRT_SECURE_NO_WARNINGS
//// c++中使用的头文件
////#include <cstdlib>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int menu(){
//	printf("******************************\n");
//	printf("********1.开始游戏************\n");
//	printf("********0.退出游戏************\n");
//	printf("******************************\n");
//	printf("请输入您的选择\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//void game(){
//	//1.程序自动生一个 1到100的随机整数；
//	int toGuess = rand() % 100 + 1;
//	//2.从控制台读取用户的输入；
//	while (1){
//		printf("请输入要猜的数字：");
//		int input = 0;
//		scanf("%d", &input);
//		//3.比较用户输入的数字喝系统生成的数字之间的关系，并给用户提示
//		if (input < toGuess){
//			printf("低了！\n");
//		}
//		else if (input>toGuess){
//			printf("高了！\n");
//		}
//		else {
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//int main(){
//	//猜数字游戏
//	//程序自动生成一个随机数（1到100）
//	//用户来输入一个整数，系统会根据用户输入的情况
//	//来提示用户，是猜高了还是猜低了，还是猜对了。
//
//	//使用当前的时间作为随机种子
//	srand(time(0));
//	while (1){
//		int choice = menu();
//		if (choice == 1){
//			game();
//		}
//		else if (choice == 0){
//			printf("程序退出，再见！\n");
//			break;
//		}
//		else{
//			printf("输入错误，请重新输入！\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

//看一下一个程序崩溃的
//#include <stdio.h>
//#include <stdlib.h>
// 
//int main(){
//	int sum = 0;
//	for (int i = 0; i < 10; i++){
//		sum += i;
//		printf("%d\n", i);
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return  0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++){
//		if (b >= 20)break;
//		if (b % 3 == 1){
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//求10个整数中的最大值
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int i = 0;
//	int arr1[10] = { 1, 2, 2, 3, 4, , 1, 3, 4, 7 };
//	for (int i = 0; i < 10; i++){
//		for (int j = 0; j<10; j++){
//			if (arr1[i]>arr1[j]){
//				continue;
//			}
//			else{
//				arr1[i] = arr1[j];
//			}
//		}
//	}
//	printf("%d\n", arr1[i]);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++){
//		scanf("%d", &arr[i]);
//	}
//	//
//	max = arr[0];
//	for (i = 1; i < 10; i++){
//		if (arr[i]>max){
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}
// 在屏幕上输出乘法口诀表
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int sum = 0;
//	for (int i = 1; i < 10; i++){
//		for (int j = 1; j <=i; j++){
//			sum = i*j;
//			printf("%d*%d=%-4d", j, i,sum);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int meno(){
	int choice = 0;
	printf("=====================================\n");
	printf("=============1.开始游戏==============\n");
	printf("=============0.退出游戏==============\n");
	printf("=====================================\n");
	printf("请输入您的选择\n");
	scanf("%d",&choice);
	return choice;
}
void game(){
	//1 先随机从1到100之间取个数
	int toGuess = rand() % 100 + 1;
	//2用户输入数字
	while (1){
		printf("请输入您的数字：");
		int input = 0;
		scanf("%d", &input);
		if (input < toGuess){
			printf("低了！\n");
		}
        else if (input>toGuess){
		printf("高了！\n");
					}
	    else {
		printf("猜对了！\n");
		break;
	   }
	}
}
int main(){
	srand(time(0));
	while (1){
		int choice = meno();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("退出游戏！\n");
			break;
		}
		else{
			printf("输入错误！请重新输入！\n");
		}
	}
		system("pause");
		return 0;
	}
