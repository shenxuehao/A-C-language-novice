#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
int main()
{
	char str[8000];
	int num1 = 0, i = 0, sum = 0, j = 0,num2 = 0, k = 0;
	while (scanf("%s", &str) != EOF)//�����ַ���
	{
		for (i = 0; i < strlen(str); i++)//����C
		{
				if (str[i] == 'C')//����ҵ�'C'
				{
					num1 = i;//����C��λ��
					for (j = num1 + 1; j < strlen(str); j++)//��ʼ��H
					{
						if (str[j] == 'H')//����ҵ�H
						{
							num2 = j;//����H��λ��
							for (k = num2 + 1; k < strlen(str); k++)//��ʼ��N
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



////��ʦ����С����һ�����������У�Ҫ��С���ְ��������ȥ�غ󰴴�С��������
////������ʦ����������̫���ˣ�С����û�취���ĵ�ȥ�ز����������������
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
