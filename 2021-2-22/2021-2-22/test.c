#define _CRT_SECURE_NO_DEPRECATE
//用筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数。
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



//给出两幅相同大小的黑白图像（用0-1矩阵）表示，求它们的相似度。若两幅图像在相同位置上的像素
//点颜色相同，则称它们在该位置具有相同的像素点。两幅图像的相似度定义为相同像素点数占总像素点
//数的百分比。
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


//有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），用户输入用户名和密码，判
//断是否登录成功。
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

