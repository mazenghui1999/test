#include "SeqList.h"

int main(int argc, char* argv[])
{
	SeqList MyList;
	SeqListInit(&MyList, 10);


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
		printf("*        [0] quit_system       \n");
		printf("===============================\n");
		printf("请选择:>");
		scanf("%d", &select);
		if (select == 0)
		{
			break;
		}
		switch (select)
		{
		case 1:
			printf("请输入要插入的数据:\n");
		//	while (scanf("%d", &item), key = item, key = getchar(), key != '\n')
		//	while (scanf("%d", &item), item!=-1)
			do{
				scanf("%d", &item);
				SeqListPushBack(&MyList, item);
			} while (getchar() != '\n');
			break;
		case 2:
			printf("请输入要插入的数据:\n");
			do{
				scanf("%d", &item); 
				SeqListPushFront(&MyList, item);
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
		default:
			break;
		}
	}
	printf("bye!\n");

	system("pause");
	return 0;
}