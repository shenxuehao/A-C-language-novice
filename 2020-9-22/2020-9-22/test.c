#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int mark = 0;
	printf("������ɼ��İٷֱ�:\n");
	scanf("%d",&mark);
	if (mark<0 || mark>100)
	    {
		    printf("��������ݷǷ�\n");
	    }
	if (mark >= 90&&mark<=100)
		{
			printf("��ͬѧ�ȼ�Ϊ��'A'\n");
		}
	if (mark <= 89 && mark >= 80)
	    {
		    printf("��ͬѧ�ȼ�Ϊ��'B'\n");
	    }
	if (mark <= 79 && mark >= 70)
		{
			printf("��ͬѧ�ȼ�Ϊ��'C'\n");
		}
	if (mark <= 69 && mark >= 60)
		{
			printf("��ͬѧ�ȼ�Ϊ��'D'\n");
		}
	if (mark < 60)
		{
			printf("��ͬѧ�ȼ�Ϊ��'E'\n");
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