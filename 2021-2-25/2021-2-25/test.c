#define _CRT_SECURE_NO_DEPRECATE
//KiKi��BoBo�� ���������塣Ҳ�����ھŹ����У�ֻҪ�����С��У���������Խ��������������������ͬ
//�����ӣ����ܻ�ʤ�����������״̬���жϵ�ǰ��Ӯ
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	char arr[3][3] = { 0 }, flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%c", &arr[i][j]);
//			getchar();
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]))
//		{
//			flag = arr[i][0];
//			break;
//		}
//		if ((arr[0][i] == arr[1][i]) && (arr[1][i] == arr[2][i]))
//		{
//			flag = arr[0][i];
//			break;
//		}
//	}
//	if ((arr[0][0] == arr[1][1]) && (arr[2][2] == arr[1][1]))
//	{
//		flag = arr[1][1];
//	}
//	if ((arr[0][2] == arr[1][1]) && (arr[2][0] == arr[1][1]))
//	{
//		flag = arr[1][1];
//	}
//	if (flag == 'K')
//	{
//		printf("KiKi wins!");
//	}
//	else if (flag == 'B')
//	{
//		printf("BoBo wins!");
//	}
//	else
//	{
//		printf("No winner!");
//	}
//	return 0;
//}


//С�����ڿ���ѧϰ�˶����ư˽�����ʮ�����ƺ󣬶Խ���ת��������Ũ�����Ȥ����Ϊ��������������
//6����������֪��һ������ʾΪ�����ƺ�Ľ����������������������⡣
//#include <stdio.h>
//int main()
//{
//	int n = 0, arr[100] = { 0 }, i = 0,count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		arr[count++] = n % 6;
//		n /= 6;
//	}
//	for (i = count-1; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}




//��ͺ���
#include <stdio.h>
int main()
{
	int i = 0, sum = 0;
	while (scanf("%d", &i) != EOF)
	{
		sum = 0;
		while (i)
		{
			sum += i;
			i--;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}