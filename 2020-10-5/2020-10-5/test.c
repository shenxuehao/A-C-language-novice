#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//void Change2()
//{
//	int a,b,c = 0;
//	int* pa = &a;
//	int* pb = &b;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}

//
//int main()
//{
//	int a = 0;
//	int* pa = &a; //pa������a�ĵ�ַ
//	*pa = 20; //�����ò�����ͨ��pa��ĵ�ַ�ҵ�����ָ�������
//	printf("a=%d", a);
//	return 0;
//}


//void Change1(int x, int y)
//{
//	int a,b,c = 0;
//	int* p = &a;
//	int* q = &b;
//	c = *p;
//	*p = *q;
//	*q = c;
//}
//
void Change2(int* pa, int* pb)
{
	int c = 0;
	c = *pa;
	*pa = *pb;
	*pb = c;
}


int main()
{
	int x = 0;
	int y = 0;
	printf("������x��y:>");
	scanf("%d\n%d", &x, &y);
	printf("x=%d y=%d\n",x,y);
	Change2(&x, &y);
	printf("x=%d y=%d\n", x,y);
	return 0;
}





//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////timt_t
//
//void menu()
//{
//	printf("##### Ҫ��һ����?#####\n");
//	printf("#####1.��  0.���#####\n");
//	printf("#####   ��ѡ��   #####\n");
//	return;
//}
//
//
//
//void game()
//{
//	int a = 0;
//	int ret = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//	printf("������:>");
//	scanf("%d", &a);
//		if (a > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (a < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//	return;
//}
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("��������");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		else 
//		{
//			printf("��Ч����\n");
//		}
//	} while (input);
//
//	return 0;
//}
//
//
