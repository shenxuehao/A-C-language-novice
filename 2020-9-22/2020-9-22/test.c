#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int mark = 0;
	printf("请输入成绩的百分比:\n");
	scanf("%d",&mark);
	if (mark<0 || mark>100)
	    {
		    printf("输入的数据非法\n");
	    }
	if (mark >= 90&&mark<=100)
		{
			printf("该同学等级为：'A'\n");
		}
	if (mark <= 89 && mark >= 80)
	    {
		    printf("该同学等级为：'B'\n");
	    }
	if (mark <= 79 && mark >= 70)
		{
			printf("该同学等级为：'C'\n");
		}
	if (mark <= 69 && mark >= 60)
		{
			printf("该同学等级为：'D'\n");
		}
	if (mark < 60)
		{
			printf("该同学等级为：'E'\n");
		}
	return 0;
}
//#include <stdio.h>
//#define n 10
//int main()
//{
//	int arr[n] = { 0 };
//	printf("%d", (arr));
//	return 0;
//}
////int main()
////{
////	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}