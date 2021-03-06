#define _CRT_SECURE_NO_WARNINGS//scanf函数的输入语句
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <windows.h>
//*****************************//二分查找
int main(){ 
	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int tofind = 9;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (tofind<arr[mid]){
			right = mid - 1;
		}
		else if (tofind>arr[mid]){
			left = mid + 1;
		}
		else {
			printf("这个数的下标是%d\n", mid);
			break;
		}
		if (left > right){
			printf("这个数不存在!\n");
		}
	}
	system("pause");
	return 0;
}

//*************************************分数求和
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;//很秒，根据顺序来决定正负
//	}
//	printf("%lf\n", sum);
//	return 0;
//
//int main(){
//	double  sum=0;
//	for (int i = 1; i <= 100; i++){
//		if (i % 2 == 0){
//			sum = sum - 1.0/ i;
//		}
//		else{
//			sum = sum + 1.0/ i;
//		}
//	}
//	printf("%lf", sum);
//	system("pause");
//	return 0;
//}
//*********************************
//数一下从1到100中含9的个数
//int main(){
//	int count = 0;
//	for (int i = 1; i <= 100; i++){
//		if (i % 10== 9){//个位上是9
//			count++;
//			printf("%d  ", i);
//			if (i / 10 == 9){
//				count++;//十位上是9
//		    printf("%d  ", i);
//			}
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//**************************************
//写一个代码：打印100到200之间的素数
//让它依次试除“2~比自身小1的数”
//int main(){
//	int count = 0;
//	int j = 0;
//	for (int i = 100; i <= 200; i++){
//		for ( j = 2; j < i; j++){
//			if (i%j == 0){
//				break;
//			}
//		}
//		if(i==j){
//			printf("%d  ", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}
///*
//继续对方法三优化，只要i不被[2, sqrt(i)]之间的任何数据整除，则i是素数，但是实际在操作时i不用从101逐渐递增到200，因为出了2和3之外，不会有两个连续相邻的数据同时为素数
//*/
//如果i能够被[2, sqrt(i)]之间的任意数据整除，则i不是素数
//原因：如果 m 能被 2 ~m - 1 之间任一整数整除，其二个因子必定有一个小于或等于sqrt(m)，另一个大于或等于 sqrt(m)。
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 101; i <= 200; i += 2)
//	{
//		//判断i是否为素数
//		//2->i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//...
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//***************************************************
//再有序的数组中查找指定元素的位置，假设这个数组是升序的。
// 这种查找方式叫做折半查找胡总和
//*****二分查找*****************
//  int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int tofind = 1;
//	//为了查找中间位置的元素，需要先把待查找区间给表示出来；
//	//待查找区间[left,right],此处的[]表示的是闭区间；
//	//例如，第一次查找的时候，[0，6]中取出中间位置的下标3，元素是4
//	//第一次查找之后把1，2，3，4四个元素都排除了；
//	//于是待查找区间[4，6]，在取中间位置的下表5，元素6
//	//第二次查找，就把5，6两个元素排除了。
//	//于是待查找的区间[6，6]
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right){// 难点2；
//		int mid = (left + right) / 2;
//		if (tofind < arr[mid]){
//			right = mid - 1;//难点1；
//		}
//		else if(tofind>arr[mid]){
//			left = mid + 1;
//		}
//		else{
//			printf("找到了对应的元素，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("该元素在该数组中不存在!\n");
//	}
//	system("pause");
//	return 0;
//}
//***************************************************
//在一个普通的数组中查找具体的某个数字n，并且得到n对应的下标
//int main(){
//	int arr[] = { 9, 5, 2, 7, 3, 6, 8 };
//	int tofind = 3;
//	for (int i = 0; i < 7; i++){
//		if (arr[i] == tofind){
//			printf("找到了 tofind 的结果，下标为: %d\n", i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//***************************
//编写代码实现，模拟用户登录情景，并且只能登录三次。
//并且只能够登录三次。（只允许输入三次密码，如果密码正确
//则提示登录成功，如果三次均输入错误，则退出程序）
//int main(){
//	for (int i = 0; i < 3; i++){
//		//密码变量一定是个字符串
//		//此处创建一个字符串用来表示用户的输入密码
//		char input[20] = { 0 };
//		//此处再创建一个字符串，表示系统本身的密码
//		char password[20] = "888888";
//		printf("请输入密码:");
//		//scanf中读取一个整数或者浮点数的时候，需要&
//		//如果读取的是一个字符串，不需要&
//		scanf("%s", input);
//		//注意字符串的比较不能够用==来表示；
//		if (strcmp(input, password) == 0){
//			printf("登录成功!\n");
//			break;
//		}
//		else{
//			printf("登录失败!\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************
//编写代码，演示多个字符从两端移动，向中间汇聚
//例如本来有一个字符串"welcome to bit!"
//int main(){
//	char str1[] = "welcome to bit!";
//	char str2[] = "###############";//注意此处的#长度应该跟str1的长度相同
//	int left = 0;
//	int right = strlen(str1) - 1;
//	printf("%s\n", str2);
//	while (left <= right) {
//		Sleep(500);
//		system("cls");
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		right--;
//		left++; 
//	}
//		system("pause");
//		return 0;
//}
//*****************************************************
//计算出n的阶乘
//int main(){
//	int n = 5;
//	int s = 1;
//	for (int i = 1; i <= n; i++){
//		s = s*i;
//	}
//	printf("%d", s);
//	system("pause");
//	return 0;
//}
//************************************************************
//计算1!+2！+3!+...+10!
//int main(){
//	int n = 0; //用这个变量来保存阶乘求和的结果；
//	//int s = 1;//注意在这里int s=1；的位置使用不对就是造成值不对
//	for (int i = 1; i <= 10; i++){
//		  //第一层循环控制求和
//		int s = 1;
//		for (int j = 1; j <=i; j++){//第二层循环控制当前数字阶乘
//			s = s*j;
//		}
//		n = n + s;
//	}
//	printf("%d", n);
//	system("pause");
//	return 0;
//}
//int factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result = result*i;
//	}
//	return result;
//}
//
//int main(){
//	int n = 10;
//	int sum = 0;
//	for (int i = 1; i <= n; i++){
//		sum = sum + factor(i);
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

