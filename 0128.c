//冒泡排序
//#include <stdio.h>
//#include <stdlib.h>
//
//void  bubblesort(int arr[], int size){
//	//进行相邻元素的比较和交换
//	//此处按照升序排序
//	//按照从后往前的遍历的方式进行比较和交换
//	//注意排序过程中 待排序区间和已排序区间的交换
//	//此处的 bound 就是划分了已排序区间和待排序区间的边界
//	//[0，bound）已排序区间
//	//[bound，size）待排序区间
//	for (int bound = 0; bound < size; bound++){
//		// 里层循环进行一趟遍历的实现，此时需要从后往前
//		for (int cur = size - 1; cur >bound; cur--){
//			if (arr[cur - 1] > arr[cur]){
//				// 交换的前提是不符合排序规则
//				// 此处是升序排序
//				// 前一个元素比后一个元大，就是不符合规则
//				int tmp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = tmp;
//			}
//		}
//	}
//}
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	bubblesort(arr, sizeof(arr) / sizeof(arr[0]));
//	system("pause");
//	return 0;
//}
//一局三子棋
//一局游戏的基本流程
//1 创建棋盘并初始化
//2 打印棋盘
//3 玩家落子（玩家输入行列的坐标的方式来落子）；
//4 判定胜负关系
//5 电脑落子
//6 判定胜负关系
//回到 2 继续执行
#define _CRT_SECURE_NO_WARNINGS
#define MAX_ROW 3
#define MAX_COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printfChessBoard(char chessBoard[MAX_ROW][MAX_COL]){
    //把棋盘打印出来
	//把数组中的每个元素都设为空格
	//此处设置的空格虽然能够打印出来棋盘，但是看不清楚
	//for (int row = 0; row < MAX_ROW; row++){
	//	for (int col = 0; col < MAX_COL; col++){
	//		//注意用%c来打印字符；
	//		printf("%c", chessBoard[row][col]);
	//	}
	//	printf("\n");
	//}
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf("| %c | %c | %c |\n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
		printf("+---+---+---+\n");
	}
}

void init(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
		chessBoard[row][col] = ' ';
		}
	}
}
int  menu(){
	printf("==========================\n");
	printf("=========1.开始游戏=======\n");
	printf("=========0.结束游戏=======\n");
	printf("==========================\n");
	printf("请输入您的选择:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//让玩家落子，通过控制台输入行列坐标的方式来实现
void  playerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		printf("请玩家输入坐标（row col）：");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//一定要校验玩家输入坐标是否合法；
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
			printf("你的坐标不在合法范围内[0,2]\n");
			continue;
		}
		if (chessBoard[row][col] != ' '){
			printf("您的坐标已经有子了！\n");
			continue;
		}
		//真正的落子了
		chessBoard[row][col] = 'x';
		break;
	}
}
//电脑落子
void computerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' '){
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}
//此处约定返回结果的含义
//x 表示玩家获胜
//o 表示电脑获胜
// q 表示和棋
//t 表示胜负未分
int isFull(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			if (chessBoard[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
char isWin(char chessBoard[MAX_ROW][MAX_COL]){
	//判断所有的行
	for (int row = 0; row < MAX_ROW; row++){
		if (chessBoard[row][0] != ' '
			&&chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2])
			return chessBoard[row][0];
	}
	//判断所有的列
	for (int col = 0; col < MAX_COL; col++){
		if (chessBoard[0][col] != ' '
			&&chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]){
			return chessBoard[0][col];
		}
	}
	// 判断两个对角线
	if (chessBoard[0][0] != ' '
		&&chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]){
		return chessBoard[0][0];
	}
	if (chessBoard[2][0] != ' '
		&&chessBoard[2][0] == chessBoard[1][1]
		&& chessBoard[2][0] == chessBoard[0][2]){
		return chessBoard[2][0];
	}
	//判断是否和棋
	//看看棋盘中是否有剩余的空间
	if (isFull(chessBoard)==1){
		return 'q';
	}
	return 't';
}
void game(){ 
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	init(chessBoard);
	char winner = 0;
	while (1){
		printfChessBoard(chessBoard);
		playerMove(chessBoard);
		winner=isWin(chessBoard);
		if (winner != 't'){
			break;
		}
		computerMove(chessBoard);
		winner = isWin(chessBoard);
		if (winner != 't'){
			break;
		}
	}
	printfChessBoard(chessBoard);
	if (winner == 'x'){
		printf("恭喜您，您赢了！\n");
	}
	else if (winner == 'o'){
		printf("很遗憾！\n");
	}
	else {
		printf("和棋\n");
	}
}
int main(){
	//此处通过简单的交互菜单与玩家交互进行开始一局游戏
	srand((unsigned int )time(0));
	while(1){
	int choice = menu();
	if (choice == 1){
		game();
	}
	else if (choice == 0){
		printf("退出游戏！\n");
		break;
	}
}
	system("pause");
	return 0;
}
