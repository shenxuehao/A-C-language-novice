#define _CRT_SECURE_NO_DEPRECATE
//��ɸѡ����n���ڵ�������ɸѡ��������Ϊ����2~n֮������������������ڴ洢����������2֮��������ܱ�2����������0���ٽ�3֮��������ܱ�3����������0 ���Դ����ƣ�ֱ��nΪֹ�������в�Ϊ0 ������Ϊ������
//#include <stdio.h>
//int main()
//{
//	int arr[110] = { 0 }, i = 0, n = 0,  j = 0;
//	scanf("%d", &n);
//	int count = 0;
//	for (i = 2; i <= n; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 2; i <= n; i++)
//	{
//		for (j = i+1; j <= n; j++)
//		{
//			if (arr[j] % i == 0)
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//	for (i = 2; i <= n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d\n", n-count-1);
//	return 0;
//}



//����������ͬ��С�ĺڰ�ͼ����0-1���󣩱�ʾ�������ǵ����ƶȡ�������ͼ������ͬλ���ϵ�����
//����ɫ��ͬ����������ڸ�λ�þ�����ͬ�����ص㡣����ͼ������ƶȶ���Ϊ��ͬ���ص���ռ�����ص�
//���İٷֱȡ�
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0, m = 0, n = 0, arr1[100][100] = { 0 }, arr2[100][100] = { 0 },count=0;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	printf("%.2f\n", 100.0*count / (m*n));
//	return 0;
//}


//�и����ϵͳ��¼���û���������Ϊ���û�����admin�����룺admin�����û������û��������룬��
//���Ƿ��¼�ɹ���
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char name[20] = { 0 };
//	char password[20] = { 0 };
//	while (scanf("%s %s", name, password) != EOF)
//	{
//		if ((strcmp(name, "admin") == 0) && (strcmp(password, "admin") == 0))
//		{
//			printf("Login Success!\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//	return 0;
//}

