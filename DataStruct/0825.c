#include "seqlist.h" 

void main(int argc, char* argv[])
{
	Seqlist Mylist;
	SeqlistInit(&Mylist, 10);


	int select = 1;
	ElemType item;
	ElemType pos;
	while(select)
	{
		printf("=============================\n");
		printf("        [1] push_back        \n");
		printf("        [2] show_data        \n");
		printf("        [3] clear            \n");
		printf("        [4] delete           \n");
		printf("        [5] find             \n");
		printf("        [6] find_data        \n");
		printf("        [7] erase_data       \n");
		printf("        [8] reverse          \n");
		printf("        [9] sort             \n");
		printf("        [0] quit             \n");
		printf("=============================\n");
		printf("����������ѡ�� ");
		scanf("%d", &select);
		if (select >= 10)
		{
			printf("��������������������\n");
		}

		switch (select)
		{
		case 1:
			printf("��������ѡ������ݣ�\n");
			do 
			{
				scanf("%d", &item);
				SeqlistPushBack(&Mylist,item);
			} while (getchar()!='\n');
			break;
		case 2:
			SeqlistShow(&Mylist);
			break;
		case 3:
			SeqlistClear(&Mylist);
			break;
		case 4:
			printf("��������Ҫɾ����λ�ã�\n");
			do 
   			{  
				scanf("%d", &item);
				SeqlistDelete(&Mylist, item);
			} while (getchar()!='\n');
			break;
		case 5:
			printf("��������Ҫ���ҵ�λ�ã�\n");
			scanf("%d", &pos);
			printf("%d\n", SeqlistFind(&Mylist, pos));
			break;
		case 6:
			printf("�����������ҵ����ݣ�\n");
			scanf("%d", &item);
			pos = SeqlistFindData(&Mylist, item);
			if (pos == -1)
			{
				printf("���ݲ�����!\n");
			}
			else
			{
				printf("%d\n", pos);
			}
			break;
		case 7:
			printf("���������ݣ�\n");
			scanf("%d", &item);
			SeqlistErase(&Mylist,item);
			break;
		case 8:
			SeqlistReverse(&Mylist);
			break;
		case 9:
			SeqlistSort(&Mylist);
			break;
		default:
			break; 
		}
	}
  printf("bye!\n");
  SeqlistDestory(&Mylist);
  system("pause");
}