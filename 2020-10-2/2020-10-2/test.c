#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("***********************\n");
	printf("***1.play     0.exit***\n");
	printf("***********************\n");
}

void game()
{
	//1.����һ�������2.������
	int ret = 0;//��������� //seed����//calling����  
	int guess = 0;
	//��ʱ����������������������ʼ�� 
	ret = rand()%100+1;
	//printf("%d\n",ret);
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("�¶���\n");
			break;
		}
			
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //ǿ������ת��,NULLΪ��ָ��//srand�����ֻҪ�ڴ���������һ�ξ��У���Ҫ��һ������һ�ε�Ƶ�������� //time_t
	do //���ٻ��ȥһ�Σ�������do-while 
	{	
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		    case 1:
				game();
			    break;
			caes2:
				printf("�˳���Ϸ\n");
			    break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	return 0;
}





//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[1];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}



//
//
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//		printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		    sum = sum + flag*1.0 / i;
//			flag = -flag;
//	}
//	printf("sum=%.20f\n", sum);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		 if (i / 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("\nһ����%d��", count);
//	return 0;
//}





//#include <stdio.h> //�ж�һ�����Ƿ�Ϊ����
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int t = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (t = 2; t < sqrt(i);t++)
//		if (i % t == 0)
//		{
//			break;
//		}
//		if (t > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\nһ����%d��", count);
//	return 0;
//}