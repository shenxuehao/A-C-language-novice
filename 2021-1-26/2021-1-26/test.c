#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>


//int main()
//{
//	double a = 0.0, b = 0.0, res = 0.0;
//	char flag = 0;
//	while (scanf("%lf %c %lf", &a, &flag, &b) != EOF)
//	{
//		if ((flag != '+') && (flag != '-') && (flag != '*') && (flag != '/'))
//		{
//			printf("Invalid operation!");
//			continue;
//		}
//		else
//		{
//			if (flag == '+')
//			{
//				res = a + b;
//				printf("%.4lf+%.4lf=%.4lf\n", a, b, res);
//			}
//			else if (flag == '-')
//			{
//				res = a - b;
//				printf("%.4lf-%.4lf=%.4lf\n", a, b, res);
//			}
//			else if (flag == '*')
//			{
//				res = a * b;
//				printf("%.4lf*%.4lf=%.4lf\n", a, b, res);
//			}
//			else if (flag == '/')
//			{
//				if (b == 0.0)
//					printf("Wrong!Division by zero!");
//				else
//				{
//					res = a / b;
//					printf("%.4lf/%.4lf=%.4lf\n", a, b, res);
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0, y = 0;
//	int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)||(y%400 == 0)) && (m == 2))
//		{
//			printf("29\n");
//		}
//		else
//		{
//			printf("%d\n", arr[m - 1]);
//		}
//	}
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	double a = 0.0, b = 0.0, c = 0.0, flag = 0.0;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		flag = b*b - 4 * a*c;
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			if (flag == 0)
//			{
//				printf("x1=x2=%.2f\n", -b / (2 * a));
//			}
//			else if (flag > 0)
//			{
//				printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(flag)) / (2 * a), (-b + sqrt(flag)) / (2 * a));
//			}
//			else
//			{
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", (-b) / (2 * a), sqrt(-flag) / (2 * a), (-b) / (2 * a), sqrt(-flag) / (2 * a));
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	double bmi = 0.0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		bmi = a / ((b / 100.0)*(b / 100.0));
//		if (bmi < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (bmi >= 18.5&&bmi <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (bmi>3.9&&bmi <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else
//		{
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b&&b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b) || (a == c) || (b == c))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int t = 0, f = 0;
//	while (scanf("%d",&t) != EOF)
//	{
//		if (t > 0)
//		{
//			printf("1\n");
//		}
//		else if (t == 0)
//		{
//			printf("0.5\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//		getchar();
//	}
//	
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch) == 1)
//		{
//			printf("%c\n", ch + 32);
//		}
//		else
//		{
//			printf("%c\n", ch - 32);
//		}
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//
//	return 0;
//}




//int main(void)
//{
//	int i = 0, ch = 0, flag = 0;
//	char arr[10] = { 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' };
//	while ((ch = getchar()) != EOF)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				flag = 1;
//				break;
//			}
//			
//		}
//		if (flag != 1)
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}



//int main()
//{
//	int score[3];
//	while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF);
//	{
//		if (score[0] > score[1] && score[0] > score[2])
//		{
//			printf("%d", score[0]);
//		}
//		else if (score[1] > score[0] && score[1] > score[2])
//		{
//			printf("%d", score[1]);
//		}
//		else
//		{
//			printf("%d", score[2]);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	long a = 0;
//	while (scanf("%ld", &a) != EOF)
//	{
//		if ( a % 2 == 0)
//		{
//			printf("Even\n");
//		}
//		else
//		{
//			printf("Odd\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while (1)
//	{
//		scanf("%d", &ch);
//	
//		if (ch >= 60)
//		{
//			printf("Pass");
//		}
//		else
//		{
//			printf("Fail");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	scanf("%d", &ch);
//	if ((ch >= 90) && (ch <= 100))
//	{
//		printf("Perfect");
//	}
//	return 0;
//}



//int main()
//{
//	int ch = getchar();
//	if (ch > 0)
//	{
//		printf("Genius");
//	}
//	getchar();
//	return 0;
//}