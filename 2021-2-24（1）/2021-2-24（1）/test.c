#define _CRT_SECURE_NO_DEPRECATE
//KiKi���ڵõ�һ������n*m�������������У���������Ҫ����n*m������˳��滮��һ��n��m�еľ�������������������������
//#include <stdio.h>
//int main()
//{
//	int i = 0, j=0,m = 0, n = 0, arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//KiKi���n��m�еķ���������ҵ������ߵ��˵�λ�ã��������������������
//#include <stdio.h>
//int main()
//{
//	int n = 0, m = 0, i = 0, j = 0, max = 0, x = 0, y = 0, arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d", x+1, y+1);
//	return 0;
//}



//KiKi�õ�������n��m�еľ�������֪�����������Ƿ���ȣ�����ش�����(�����������Ӧ����Ԫ�ض����ʱ�����������)��
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0, arr1[10][10] = { 0 }, arr2[10][10] = { 10 }, i = 0, j = 0, count = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	if (count == m*n)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}



//KiKi��֪��һ��n�׷����Ƿ�Ϊ�����Ǿ������������ж��������Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0, n = 0, arr[10][10] = { 0 }, count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				
//				count++;
//				break;
//			}
//		}
//	}
//	if (count == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������
//#include <stdio.h>
//int main()
//{
//	int i = 0,j = 0, arr1[10][10] = { 0 }, arr2[10][10] = { 0 }, n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr1[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//KiKi��һ����������֪������k���б任���б任��õ��ľ������̰������
//#include <stdio.h>
//int main()
//{
//	int n = 0, m = 0, arr[10][10] = { 10 }, i = 0, j = 0, k = 0, a = 0, b = 0, tmp = 0;
//	char t = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d", &k); 
//	
//	while (k)
//	{	
//		getchar();
//		scanf("%c %d %d", &t, &a, &b);
//		if (t == 'r')
//		{
//			for (i = 0; i < m; i++)
//			{
//				tmp = arr[a-1][i];
//				arr[a - 1][i] = arr[b - 1][i];
//				arr[b - 1][i] = tmp;
//			}
//		}
//		if (t == 'c')
//		{
//			for (i = 0; i < n; i++)
//			{
//				tmp = arr[i][a - 1];
//				arr[i][a - 1] = arr[i][b - 1];
//				arr[i][b - 1] = tmp;
//			}
//		}
//		k--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//KiKi֪��ʲô���������֮���������ǲ�����Ũ�����Ȥ������֪��������ǵ�ǰn�У����̰������������ǣ��������Ƕ���ʽ(a+b)��n�η�չ��������ϵ���ųɵ������Ρ������ʰ�����ÿ�еĶ˵���Ϊ1�� һ����ҲΪ1��ÿ�������������Ϸ����Ϸ�������֮�͡�
#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 0, arr[30][30] = { 0 };
	scanf("%d", &n);
	arr[0][0] = 1;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if ((j == 0) || (i == j))
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i][j]!=0)
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}