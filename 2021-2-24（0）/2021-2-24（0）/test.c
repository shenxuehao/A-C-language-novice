#define _CRT_SECURE_NO_DEPRECATE
//输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分。
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



//KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少，请你帮助他完成这个任务。
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