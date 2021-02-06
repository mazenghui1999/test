////�ع����������
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ROW 3
//#define COL 3
//int menu(){
//	printf("��ӭ������������Ϸ��\n");
//	printf("======================\n");
//	printf("=======1.��ʼ��Ϸ=====\n");
//	printf("=======0.�˳���Ϸ=====\n");
//	printf("======================\n");
//	printf("����������ѡ��\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//void printChessBoard(char ChessBoard[ROW][COL]){
//	printf("+---+---+---+\n");
//	for (int i = 0; i < ROW; i++){
//		printf("| %c | %c | %c |\n", ChessBoard[i][0],
//			ChessBoard[i][1], ChessBoard[i][2]);
//		printf("+---+---+---+\n");
//	}
//}
//void init(char ChessBoard[ROW][COL]){
//	for (int row = 0; row < ROW; row++){
//		for (int col = 0; col < COL; col++){
//			ChessBoard[row][col] = ' ';
//		}
//	}
//}
//void player(char ChessBoard[ROW][COL]){
//	while (1){
//		printf("����������λ�ã�\n");
//		int row = 0;
//		int col = 0;
//		scanf("%d %d", &row, &col);
//		if (row<0 || row>=ROW || col<0 || col>=COL){
//			printf("�������λ���д�!���������룺\n");
//			continue;
//		}
//		else if (ChessBoard[row][col] != ' '){
//			printf("��λ�����Ѿ�������!���������룺\n");
//			continue;
//		}
//		ChessBoard[row][col] = 'x';
//		break;
//	}
//}
//void computer(char  ChessBoard[ROW][COL]){
//	while (1){
//		int row = rand() % ROW;
//		int col = rand() % COL;
//		if (ChessBoard[row][col] != ' '){
//			continue;
//		}
//		ChessBoard[row][col] = 'o';
//		break;
//	}
//}
////x ��ʾ��һ�ʤ
////o ��ʾ���Ի�ʤ
////q ��ʾ����
////t ��ʾʤ��δ��
//int isFull(char ChessBoard[ROW][COL]){
//	for (int row = 0; row < ROW; row++){
//		for (int col = 0; col < COL; col++){
//			if (ChessBoard[row][col] == ' '){
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//char isWin(char ChessBoard[ROW][COL]){
//	//�ж����е���
//	for (int row = 0; row < ROW; row++){
//		if (ChessBoard[row][0] != ' '
//			&&ChessBoard[row][0] == ChessBoard[row][1]
//			&& ChessBoard[row][0] == ChessBoard[row][2])
//			return ChessBoard[row][0];
//	}
//	//�ж����е���
//	for (int col = 0; col < COL; col++){
//		if (ChessBoard[0][col] != ' '
//			&&ChessBoard[0][col] == ChessBoard[1][col]
//			&& ChessBoard[0][col] == ChessBoard[2][col]){
//			return ChessBoard[0][col];
//		}
//	}
//	// �ж������Խ���
//	if (ChessBoard[0][0] != ' '
//		&&ChessBoard[0][0] == ChessBoard[1][1]
//		&& ChessBoard[0][0] == ChessBoard[2][2]){
//		return ChessBoard[0][0];
//	}
//	if (ChessBoard[2][0] != ' '
//		&&ChessBoard[2][0] == ChessBoard[1][1]
//		&& ChessBoard[2][0] == ChessBoard[0][2]){
//		return ChessBoard[2][0];
//	}
//	//�ж��Ƿ����
//	//�����������Ƿ���ʣ��Ŀռ�
//	if (isFull(ChessBoard) == 1){
//		return 'q';
//	}
//	return 't';
//}
//void game(){
//	printf("��Ϸ��ʼ��\n");
//	///1����һ�����̣����ҳ�ʼ�����̡�
//	char ChessBoard[ROW][COL] = { 0 };
//	init(ChessBoard);
//	char winner = 0;
//	while (1){
//		printChessBoard(ChessBoard);
//		player(ChessBoard);
//		winner = isWin(ChessBoard);
//		if (winner != 't'){
//			break;
//		}
//		computer(ChessBoard);
//		winner = isWin(ChessBoard);
//		if (winner != 't'){
//			break;
//		}
//	}
//	printChessBoard(ChessBoard);
//	if (winner == 'x'){
//		printf("��ϲ������Ӯ�ˣ�\n");
//	}
//	else if (winner == 'o'){
//		printf("���ź���\n");
//	}
//	else {
//		printf("����\n");
//	}
//}
//int main(){
//	srand((unsigned int)time(0));
//	while (1){
//		int choice = menu();
//		if (choice == 1){
//			game();
//		}
//		else if (choice == 0){
//			printf("�˳���Ϸ��\n");
//			break;
//		}
//		else{
//			printf("������������,���������룡\n");
//			continue;
//		}
//	}
//	system("pause");
//	return 0;
//}

//////////////////////////////////////////////////////////////////////


//�ع�ɨ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define MINE 10

int  menu(){
	printf("��ӭ����ɨ�ף�\n");
	printf("==========================\n");
	printf("=========1.��ʼ��Ϸ=======\n");
	printf("=========0.������Ϸ=======\n");
	printf("==========================\n");
	printf("����������ѡ��:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void init(char showMap[ROW][COL],
	char mineMap[ROW][COL]){
		//1��ʼ��show
		for (int row = 0; row < ROW; row++){
			for (int col = 0; col < COL; col++){
				showMap[row][col] = '*';
			}
		}
		//2��ʼ��mine,�Ȱ����е�λ�ö�����Ϊ��0����
		//������������ɸ���1��.
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
		printf("������Ҫ������λ�ã�");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= ROW || *col < 0
			|| *col >= COL){
			printf("������������\n");
			continue;
		}
		if (showMap[*row][*col] != '*'){
			printf("��λ���Ѿ������ˣ�\n");
			continue;
		}
		break;
	}
}void Update(char showMap[ROW][COL],
	char mineMap[ROW][COL],
	int row, int col){
	int count = 0;
	for (int r = row - 1; r <= row + 1; r++){
		for (int c = col - 1; c <= col + 1; c++){
			if (row < 0 || row >= ROW || col < 0 || col >= COL){
				continue;
			}
			if (mineMap[r][c] == '1'){
				count++;
			}
		}
	}
	//����ת��
	showMap[row][col] = count + '0';
}
void game(){
	//1��ӡ���̳�ʼ��
	char showMap[ROW][COL];
	char mineMap[ROW][COL];
	init(showMap, mineMap);
	int noMineCount = 0;
	while (1)
	{
		//2 ��ӡ��ͼ
		print(mineMap);
		printf("\n");
		print(showMap);
		//3 ��ҷ���ָ��λ�ã��������꣩
		//4 ����ҵ��������У��
		int row = 0, col = 0;
		input(showMap, &row, &col);//����ָ��ķ�ʽ����
		//5 �Ƿ�����ˣ�������ף�ֱ����Ϸʧ��
		if (mineMap[row][col] == '1'){
			print(showMap);
			printf("��Ϸʧ�ܣ�\n");
			break;
		}
		//6 ��������������һ��λ�ã���Ϸʤ��
		noMineCount++;
		if (noMineCount == ROW*COL - MINE){
			print(showMap);
			printf("��Ϸʤ����\n");
			break;
		}
		//7 ��Ϸ��Ҫ�����������ĸ��ӻ���һ������
		Update(showMap, mineMap, row, col);

}
}
int main(){
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("�˳���Ϸ��\n");
			break;
		}
		else{
			printf("����������������룡\n");
			continue;
		}
	}
	system("pause");
	return 0;
}