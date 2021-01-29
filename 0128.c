//ð������
//#include <stdio.h>
//#include <stdlib.h>
//
//void  bubblesort(int arr[], int size){
//	//��������Ԫ�صıȽϺͽ���
//	//�˴�������������
//	//���մӺ���ǰ�ı����ķ�ʽ���бȽϺͽ���
//	//ע����������� ���������������������Ľ���
//	//�˴��� bound ���ǻ���������������ʹ���������ı߽�
//	//[0��bound������������
//	//[bound��size������������
//	for (int bound = 0; bound < size; bound++){
//		// ���ѭ������һ�˱�����ʵ�֣���ʱ��Ҫ�Ӻ���ǰ
//		for (int cur = size - 1; cur >bound; cur--){
//			if (arr[cur - 1] > arr[cur]){
//				// ������ǰ���ǲ������������
//				// �˴�����������
//				// ǰһ��Ԫ�رȺ�һ��Ԫ�󣬾��ǲ����Ϲ���
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
//һ��������
//һ����Ϸ�Ļ�������
//1 �������̲���ʼ��
//2 ��ӡ����
//3 ������ӣ�����������е�����ķ�ʽ�����ӣ���
//4 �ж�ʤ����ϵ
//5 ��������
//6 �ж�ʤ����ϵ
//�ص� 2 ����ִ��
#define _CRT_SECURE_NO_WARNINGS
#define MAX_ROW 3
#define MAX_COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printfChessBoard(char chessBoard[MAX_ROW][MAX_COL]){
    //�����̴�ӡ����
	//�������е�ÿ��Ԫ�ض���Ϊ�ո�
	//�˴����õĿո���Ȼ�ܹ���ӡ�������̣����ǿ������
	//for (int row = 0; row < MAX_ROW; row++){
	//	for (int col = 0; col < MAX_COL; col++){
	//		//ע����%c����ӡ�ַ���
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
	printf("=========1.��ʼ��Ϸ=======\n");
	printf("=========0.������Ϸ=======\n");
	printf("==========================\n");
	printf("����������ѡ��:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//��������ӣ�ͨ������̨������������ķ�ʽ��ʵ��
void  playerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		printf("������������꣨row col����");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//һ��ҪУ��������������Ƿ�Ϸ���
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
			printf("������겻�ںϷ���Χ��[0,2]\n");
			continue;
		}
		if (chessBoard[row][col] != ' '){
			printf("���������Ѿ������ˣ�\n");
			continue;
		}
		//������������
		chessBoard[row][col] = 'x';
		break;
	}
}
//��������
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
//�˴�Լ�����ؽ���ĺ���
//x ��ʾ��һ�ʤ
//o ��ʾ���Ի�ʤ
// q ��ʾ����
//t ��ʾʤ��δ��
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
	//�ж����е���
	for (int row = 0; row < MAX_ROW; row++){
		if (chessBoard[row][0] != ' '
			&&chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2])
			return chessBoard[row][0];
	}
	//�ж����е���
	for (int col = 0; col < MAX_COL; col++){
		if (chessBoard[0][col] != ' '
			&&chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]){
			return chessBoard[0][col];
		}
	}
	// �ж������Խ���
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
	//�ж��Ƿ����
	//�����������Ƿ���ʣ��Ŀռ�
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
		printf("��ϲ������Ӯ�ˣ�\n");
	}
	else if (winner == 'o'){
		printf("���ź���\n");
	}
	else {
		printf("����\n");
	}
}
int main(){
	//�˴�ͨ���򵥵Ľ����˵�����ҽ������п�ʼһ����Ϸ
	srand((unsigned int )time(0));
	while(1){
	int choice = menu();
	if (choice == 1){
		game();
	}
	else if (choice == 0){
		printf("�˳���Ϸ��\n");
		break;
	}
}
	system("pause");
	return 0;
}
