#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define MINE 10
int menu(){
	printf("===================\n");
	printf(" 欢迎来到扫雷游戏！\n");
	printf("===================\n");
	printf("====1.开始游戏=====\n");
	printf("====0.退出游戏=====\n");
	printf("===================\n");
	printf("请输入您的选择：\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void init(char showMap[ROW][COL],
	char mineMap[ROW][COL]){
	//1初始化show
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
		      showMap[row][col] = '*';
		}
	}
   	//2初始化mine,先把所有的位置都设置为‘0’，
	//在随机产生若干个‘1’.
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			mineMap[row][col] = '0';
		}
	}
	srand((unsigned int)time(0));
	int count = MINE;
	while (count>0){
		int row = rand() % ROW;
		int col = rand() % COL;
		if (mineMap[row][col] == '1'){
			continue;
		}
		mineMap[row][col] = '1';
		count--;
	}
}
void print(char showMap[ROW][COL]){
	printf(" | ");
	for (int col = 0; col < COL; col++){
		printf("%d  ", col);
	}
	printf("\n");
	printf("-+---------------------------\n");
	for (int row = 0; row < ROW; row++){
		   printf("%d| ", row); 
		for (int col = 0; col < COL; col++){
			printf("%c  ", showMap[row][col]);
		}
		printf("\n");
	}
}
void input(char showMap[ROW][COL],
	int* row, int* col){
	while (1){
	    printf("请输入要翻开的位置：");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= ROW || *col < 0
			|| *col >= COL){
			printf("您的输入有误！\n");
			continue;
		}
		if (showMap[*row][*col] != '*'){
			printf("此位置已经有子了！\n");
			continue;
		}
		break;
	}
}
void Update(char showMap[ROW][COL], 
	        char mineMap[ROW][COL],
	        int row, int col){
	int count = 0;
	for (int r = row - 1; r <= row + 1; r++){
		for (int c = col - 1; c <= col + 1; c++){
			if (row< 0 || row >= ROW || col < 0 || col >= COL){
				continue;
			}
			if (mineMap[r][c] == '1'){
				count++;
			}
		}
	}
   //类型转换
	showMap[row][col] = count + '0';
}
void game(){
	 //1创建地图并初始化
	char showMap[ROW][COL];
	char mineMap[ROW][COL];
	init(showMap, mineMap);
	int noMineCount = 0;
	while (1)
	{
		//2 打印地图
		print(mineMap);
		printf("\n");
		print(showMap);
		//3 玩家翻开指定位置（输入坐标）
		//4 对玩家的输入进行校验
		int row = 0, col = 0;
		input(showMap, &row, &col);//按照指针的方式传输
		//5 是否踩雷了，如果踩雷，直接游戏失败
		if (mineMap[row][col] == '1'){
			print(showMap);
			printf("游戏失败！\n");
			break;
		}
		//6 如果翻开的是最后一个位置，游戏胜利
		noMineCount++;
		if (noMineCount == ROW*COL - MINE){
			print(showMap);
			printf("游戏胜利！\n");
			break;
		}
		//7 游戏需要继续，翻开的格子会变成一个数字
		Update(showMap,mineMap, row, col);
	}
}
int main(){
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("退出了！\n");
			break;
		}
		else{
			printf("您的输入有误，请重新输入！\n");
		}
	}
		system("pause");
		return 0;
}