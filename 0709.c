//#include <stdio.h>
//#include <stdlib.h>
//
//int fun(a){
//
//	a = 1 + a;
//	return a;
//}
//int*  fun(a){
//	a = a + 1;
//	return &a;
//}///////////ָ�뺯��   ����ֵΪָ��ĺ���
//void main(){
//	int ar[3] = { 1, 2, 3 };
//	int(*pa)[3] = ar;  //����ָ��
//
//
//	int * ar[3] = {0,10,2};   //  ָ������ 
//
//
//	int(*pfun)(int);
//	pfun = fun;//����ָ��
//
//}

///    (*(void(*)())0)();
////  �����0����Ϊ��һ������ָ�� 


//#include <stdio.h>
//#include <stdlib.h>
//int Max(int ar[],int n){
//	int a = ar[0];
//	for (int i = 0; i < n; i++){
//		if (a < ar[i]){
//			a = ar[i];
//		}
//	}
//	return a;
//}
//
//int main(){
//
//	int ar[] = { 1, 2, 2, 2, 23, 4, 4, 5 };
//	int n = sizeof(ar) / sizeof(ar[0]);
//	printf("%d\n", Max(ar, n));
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int com_char(const void *a, const void *b){
//	const char **sa = (const char **)a;
//	const char **sb = (const char **)b;
//	return strcmp(*sa,*sb);
//}
//int main(){
//	char*  str[] = { "abc", "kfc", "pa", "adc", "sup" };
//	int n = sizeof(str) / sizeof (str[0]);
//	qsort(str, n, sizeof (char*), com_char);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Student
//{
//	int id;
//	char name[10];
//	char sex[4];
//	int age;
//}student;
//int com_id(const void *a,const void *b)
//{
//	student *pa = (student *)a;
//	student *pb = (student *)b;
//	return (pa->id - pb->id);
//}
//int com_age(const void *a, const void *b){
//	student *pa = (student *)a;
//	student *pb = (student *)b;
//	return (pa->age - pb->age);
//
//}
//void main(){
//	student stu[] = { { 2000, "����", "��", 20 }, { 1599, "������", "Ů", 18 }, { 2100, "ޱ��", "Ů", 16 } };
//	qsort(stu, 3, sizeof(student), com_age);
//	system("pause");
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int  main(){
//	char arr[] = { 'a', 'b', 'c', 'g', 'h' };
//	printf("%d\n", strlen(arr));   //��֪��\0��λ�ôӶ����Ϊ�����
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *p = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(p - 1));
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a[4] = { 1, 2, 3, 4 };
//	int *p1 = (int *)(&a + 1);
//	int *p2 = (int *)((int)a + 1);
//	printf("%x,%x",p1[-1], *p2);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//  1,3,5,0,0,0   ע������
//	int a[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };
//
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	int a[5][5] ;   //5���ռ� 
//	int(*p)[4];     // 4���ռ�
//	p = a;     //����Ŀռ䲻ͬ    �ص� p��4����Ϊһ���ռ䡣
// 	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");   // Ԫ�صĸ���
//	return 0;
//}

