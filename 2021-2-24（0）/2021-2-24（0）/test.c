#define _CRT_SECURE_NO_DEPRECATE
//����һ���༶5��ѧ����5�Ƴɼ������5��ѧ����5�Ƴɼ����ܷ֡�
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	double arr[5][5] = { 0.0 }, sum[5] = { 0.0 };
//	for (i = 0; i<5; i++)
//	{
//		for (j = 0; j<5; j++)
//		{
//			scanf("%lf", &arr[i][j]);
//		}
//	}
//	for (i = 0; i<5; i++)
//	{
//		for (j = 0; j<5; j++)
//		{
//			printf("%.1lf ", arr[i][j]);
//			sum[i] = sum[i] + arr[i][j];
//		}
//		printf("%.1lf\n", sum[i]);
//	}
//	return 0;
//}



//KiKi�õ���һ��n��m�еľ�����������֪����x�е�y�е�ֵ�Ƕ��٣��������������������
//#include <stdio.h>
//int main()
//{
//	int n = 0, m = 0, arr[10][10] = { 0 }, i = 0, j = 0, x = 0, y = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d %d", &x, &y);
//	printf("%d\n", arr[x-1][y-1]);
//	return 0;
//}