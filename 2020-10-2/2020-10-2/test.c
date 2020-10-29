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
	//1.生成一个随机数2.猜数字
	int ret = 0;//生成随机数 //seed设置//calling调用  
	int guess = 0;
	//拿时间戳来设置随机数的生成起始点 
	ret = rand()%100+1;
	//printf("%d\n",ret);
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
			
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //强制类型转换,NULL为空指针//srand的起点只要在代码里设置一次就行，不要玩一次设置一次地频繁的设置 //time_t
	do //至少会进去一次，所以用do-while 
	{	
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		    case 1:
				game();
			    break;
			caes2:
				printf("退出游戏\n");
			    break;
			default:
				printf("选择错误\n");
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
//	printf("\n一共有%d个", count);
//	return 0;
//}





//#include <stdio.h> //判断一个数是否为素数
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
//	printf("\n一共有%d个", count);
//	return 0;
//}