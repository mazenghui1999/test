//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0; //�����������ʼ��
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{//����=�ܱ�4���������ܱ�100���� + �ܱ�400������
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main(){
//		int a;
//		int b;
//		int c;
//
//		printf("��������Ҫ�����������\n");
//		scanf("%d %d", &a, &b);         //����Ҫ�����a,b
//
//		c = (a > b) ? b : a;             //��Ŀ���������С��ֵ����c
//
//		if (a%c != 0 || b%c != 0)       //���ab�޷�����c
//		{
//			c--;                        //c--�ټ�����ֱ������
//		}
//
//		printf("���Լ���ǣ�%d\n", c);//�����ʱ����
//		system("pause");
//		return 0;
//	}
//int main(){
//	for (int i = 1; i <= 100; i++){
//		if (i % 3 == 0){
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//void swap(int *x, int *y){
//	int t = *x;
//	*x = *y;
//	*y = t;
//}
//int main(){
//	int a,b,c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <b) swap(&a,&b);
//	if (c >a) swap(&a,&c);
//	if (c > b) swap(&c, &b);
//	printf("%d,%d,%d", a,b,c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (a <101)
//	{
//		b = b + a;
//		a++;
//	}
//	printf("%d", b);
//for (int i = 1; i <= 10; i++)
//{
//	printf("%d\n", i);
//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n =1 ;
//	while(n < 8)
//	{
//	if (n == 4)
//	   {
//      n++��
//		continue; n==4��ʱ��continue�˳���while��һֱС��8��ʱ��ͻ������ѭ��������Ҫ��continue��ǰ�����n++����ѭ����
//	   }
//	printf("�Ե�%d������\n", n);
//	n++;
//
//     }
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int  n= 1;
//	while (n <= 5)
//	{
//		if (n ==3)
//		{
//          printf("�Գ��˰�����\n");
//			break;
//		}
//		printf("�Ե�%d���Ѱ���\n",n);
//	    n++;
//	}
//	system("pause");
//	return 0;
//}
//for(int i = 1; i <= 10; i++)
//{
//	printf("%d\n", i);
//}
//int main(){
//	for (int i = 1; i <= 10; i++){
//		if (i == 3){
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;  ��forѭ������е������ж�����õ����Ʊ���ʱ��ֻ����������������
//		printf("123");
//	}
//	system("pasue");
//	return 0;
//}
//��ϰ����n�Ľ׳ˣ�
//int main(){
//	int result = 1;
//	int n = 0;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	for (int i= 1;i<= n;i++){
//		result = result*i;
//	}
//	printf("%d\n", result);
//
//	system("pause");
//	return 0;
//}
//�����1��10�Ľ׳˵ĺ�
//int main(){
//	int a = 1;
//	int s = 0;
//	for (int j = 1; j < 11; j++){
//	    a = a*j;
//		s = s + a;
//	}
//	printf("%d", s);
//	system("pause");
//	return 0;
//}
