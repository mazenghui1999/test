#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
int menu(){
	printf("��ӭ������������Ϸ��\n");
	printf("================\n");
	printf("===1.��ʼ��Ϸ===\n");
	printf("===0.�˳���Ϸ===\n");
	printf("================\n");
	printf("����������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void init(char chessBoard[ROW][COL]){
	for (int i = 0; i < ROW; i++){
		for (int j = 0; j < COL; j++){
			chessBoard[i][j] = ' ';
		}
	}
	srand((unsigned int)(time(0)));
}
void  printChessBoard(char chessBoard[ROW][COL]){
	printf("+---+---+---+\n");
	for (int i = 0; i < ROW; i++){
		printf("| %c | %c | %c |\n",
			chessBoard[i][0],
			chessBoard[i][1],
			chessBoard[i][2]);
		printf("+---+---+---+\n");
	}
}
void playerMove(char chessBoard[ROW][COL]){
	printf("������ӣ�\n");
	while (1){
		printf("��������Ҫ���ӵķ�ʽ��\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row <0 || row>=ROW || col < 0 
			|| col>=COL){
			printf("��������д������������룺\n");
			continue;
		}
		else if (chessBoard[row][col] != ' '){
			printf("��λ���Ѿ������ˣ�\n");
			continue;
		}
		chessBoard[row][col] = 'x';
		break;
	}
}
void computerMove(char chessBoard[ROW][COL]){
	printf("��������\n");
	while (1){
		int row = rand() % ROW;
		int col = rand() % COL;
		if (chessBoard[row][col] != ' '){
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}
int isFull(char chessBoard[ROW][COL]){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (chessBoard[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
char win(char chessBoard[ROW][COL]){
	//�ȼ�����е���
	for (int row = 0; row < ROW; row++){
		if (chessBoard[row][0] != ' '
			&&chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2])
			return chessBoard[row][0];
	}
	for (int col= 0; col< COL; col++){
		if (chessBoard[col][0] != ' '
			&&chessBoard[col][0] == chessBoard[col][1]
			&& chessBoard[col][0] == chessBoard[col][2])
			return chessBoard[col][0];
	}
	if (chessBoard[0][0]!=' '
			&&chessBoard[0][0] == chessBoard[1][1]
			&& chessBoard[0][0] == chessBoard[2][2]){
			return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '
		&&chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]){
		return chessBoard[0][2];
	}
	if (isFull(chessBoard)==1){
		return 'q';
	}
	return ' ';
}
void game(){
	char chessBoard[ROW][COL];
	//1����һ�����̲��ҳ�ʼ�����̣�
	init(chessBoard);
	char winner = ' ';
	while (1){
		printChessBoard(chessBoard);
		playerMove(chessBoard);
		winner = win(chessBoard);
		if (winner!=' '){
			break;
		}
		computerMove(chessBoard);
		char winner = win(chessBoard);
		if (winner != ' '){
			break;
		}
	}
	if (winner == 'x'){
		printf("��ϲ�㣬��Ӯ��\n");
	}
	else if (winner == 'o'){
		printf("�����!\n");
	}
	else{
		printf("���忪��\n");
	}
}
int main(){
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if(choice==0) {
			printf("�˳�����\n");
			break;
		}
		else{
			printf("������������\n");
		}
	}
	system("pause");
	return  0;
}