#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define MINE 10
int menu(){
	printf("===================\n");
	printf(" ��ӭ����ɨ����Ϸ��\n");
	printf("===================\n");
	printf("====1.��ʼ��Ϸ=====\n");
	printf("====0.�˳���Ϸ=====\n");
	printf("===================\n");
	printf("����������ѡ��\n");
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
   //����ת��
	showMap[row][col] = count + '0';
}
void game(){
	 //1������ͼ����ʼ��
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
			printf("�˳��ˣ�\n");
			break;
		}
		else{
			printf("���������������������룡\n");
		}
	}
		system("pause");
		return 0;
}