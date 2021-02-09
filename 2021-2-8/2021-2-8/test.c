#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
int main()
{
	char str[8000];
	int num1 = 0, i = 0, sum = 0, j = 0,num2 = 0, k = 0;
	while (scanf("%s", &str) != EOF)//输入字符串
	{
		for (i = 0; i < strlen(str); i++)//先找C
		{
				if (str[i] == 'C')//如果找到'C'
				{
					num1 = i;//记忆C的位置
					for (j = num1 + 1; j < strlen(str); j++)//开始找H
					{
						if (str[j] == 'H')//如果找到H
						{
							num2 = j;//记忆H的位置
							for (k = num2 + 1; k < strlen(str); k++)//开始找N
							{
								if (str[k] == 'N')
								{
									sum++;
								}
							}
						}
					}
				}
		}
		printf("%d\n", sum);
	}
	
	return 0;
}



////老师给了小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。
////但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, x = 0, y = 0;
//	int arr[100000] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &x);
//			arr[x] = x;
//		}
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i])
//				printf("%d ", arr[i]);
//		}
//	}
//	
//	return 0;
//}
