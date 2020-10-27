#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a, b, max;
//	printf("请输入a的值：");
//	scanf("%d", &a);
//	printf("请输入b的值：");
//	scanf("%d", &b);
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	printf("较大值为:%d", max);
//	return 0;






//
//#include <stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	printf("请输入num1\n");
//		scanf("%d", &num1);
//	printf("请输入num2");
//		scanf("%d", &num2);
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a );
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof arr );
//	//printf("%d\n", sizeof int );
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n",b);
//	return 0;
//}




#include <stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("a=%d,b=%d\n",a,b);
	return 0;
}