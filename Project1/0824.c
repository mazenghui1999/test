#include "SeqList.h"

int main(int argc, char* argv[])
{
	SeqList MyList;
	SeqListInit(&MyList, 10);

	int pos;
	ElemType item;
	//ElemType key;
	int select = 1;
	while (select)
	{
		printf("===============================\n");
		printf("*        [1] push_back         \n");
		printf("*        [2] push_front        \n");
		printf("*        [3] show_list         \n");
		printf("*        [4] pop back          \n");
		printf("*        [5] pop front         \n");
		printf("*        [6] insert            \n");
		printf("*        [7] length            \n");
		printf("*        [8] find              \n");
		printf("*        [9] erase             \n");
		printf("*        [0] quit_system       \n");
		printf("===============================\n");
		printf("��ѡ��:>");
		scanf("%d", &select);
		if (select == 0)
		{
			break;
		}
		switch (select)
		{
		case 1:
			printf("������Ҫ���������:\n");
		//	while (scanf("%d", &item), key = item, key = getchar(), key != '\n')
		//	while (scanf("%d", &item), item!=-1)
			do{
				scanf("%d", &item);
				SeqListPushBack(&MyList, item);
			} while (getchar() != '\n');
			break;
		case 2:
			printf("������Ҫ���������:\n");
			do{
				scanf("%d", &item); 
				SeqListPushFront(&MyList,item);
			} while (getchar() != '\n');
			break;
		case 3:
			ShowSeqList(&MyList);
			break;
		case 4:
		    SeqListPopBack(&MyList);
			break;
		case 5:
			SeqListPopFront(&MyList);
			break;
		case 6:
			printf("������Ҫ���������:\n");
			do{
				scanf("%d %d", &pos, &item);
				SeqListInsertByPos(&MyList,pos,item);
			} while (getchar() != '\n');
			break;
		case 7:
			printf("�����ݵĳ���Ϊ��%d\n", SeqListLength(&MyList));
			break;
		case 8:
			printf("������ҪѰ�ҵ�����:\n");
			do{
				scanf("%d", &item);
				int a = SeqListFind(&MyList, item);
				if (a == -1)
				{
					printf("���ҵ���������\n");
				}
				else
				{
					printf("λ�ã�%d\n", SeqListFind(&MyList, item));
				}
			} while (getchar() != '\n');
			break;
		case 9:
			printf("��������ɾ����λ��\n");
			do 
			{
				scanf("%d", &pos);
				SeqListErase(&MyList, pos);
			} while (getchar() != '\n');
			break;
		default:
			break;
		}
	}
//	SeqListDestory(&MyList);
	printf("bye!\n");

	system("pause");
	return 0;
}