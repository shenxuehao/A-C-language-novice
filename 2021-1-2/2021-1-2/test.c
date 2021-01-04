#define _CRT_SECURE_NO_DEPRECATE
	#include <stdio.h>
	int main()
	{
		char n = 0;
		int i = 0;
		int j = 0;
		int k = 0;
		scanf("%c", &n);
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 4-i; j++)
			{
				printf(" ");
			}
			for (k = 0; k < i+1; k++)
			{
				printf("%c", n);
				printf(" ");
			}
			printf("\n");
		}
		return 0;
	}

//int main()
//{
//	char ram = 0;
//	
//	while ((ram=getchar())!=EOF)
//	{
//		if ((ram<='z' && ram>='a') || (ram<='Z' && ram>='A'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	float c_score = 0.0;
//	float math_score = 0.0;
//	float eng_score = 0.0;
//	scanf("%d;%f,%f,%f", &num, &c_score, &math_score, &eng_score);
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.",num, c_score, math_score, eng_score);
//	return 0;
//}