#include "list.h"


void main(int argc, void* argv[])
{
	list MyList;
	InitSList(&MyList);
	int select=1;
	int item;
	while (select)
	{
		printf("================\n");
		printf("[1] ListPushBack\n");
		printf("[2] ShowList\n");
		printf("[3] ListPushFront\n");
		printf("[4] ListPopBack\n");
		printf("[5] ListPopFront\n");
		printf("[6] SListFind\n");
		printf("[7] SListInsertAfter\n");
		printf("[7] SListEraseAfter\n");
		printf("[0] quit\n");
		printf("«Î ‰»Îƒ„µƒ—°‘Ò£∫\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("«Î ‰»Î£∫\n");
			do 
			{
				scanf("%d", &item);
				SListPushBack(&MyList,item);
			} while (getchar()!='\n');
			break;
		case 2:
			SListPrint(MyList);
			break;
		case 3:
			printf("«Î ‰»Î£∫\n");
			do
			{
				scanf("%d", &item);
				SListPushFront(&MyList, item);
			} while (getchar() != '\n');
			break;
		case 4:
			SListPopBack(&MyList);
			break;
		case 5:
			SListPopFront(&MyList);
			break;
		case 6:
			printf("«Î ‰»Î£∫\n");
			scanf("%d", &item);
			SListNode* res=SListFind(MyList,item);
			if (res != NULL)
			{
				printf("%d \n", res->data);
			}
			else
			{
				printf("NULL\n");
			}
			break;
		case 7:
			printf("«Î ‰»Î£∫\n");
			scanf("%d", &item);
			SListInsertAfter(MyList, item);
			break;
		case 8:
			SListEraseAfter(MyList);
			break;
		default:
			break;
		}
	}
	SListDestory(MyList);
	printf("bye!\n");
	system("pause");


}