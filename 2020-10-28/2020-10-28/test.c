#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "#############";
	char arr2[] = "bit";
	strcpy(arr1, arr2);//char *strcpy( char *strDestination, const char *strSource );DestinationĿ�ĵء�SourceԴͷ
	printf("%s\n", arr2);
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("i�ĵ�ַΪ  %p\n", &i);
//	printf("arr�ĵ�ַΪ%p\n", arr);
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//ʵ��1!+2!+3!+4!......+n!
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 1;
//	int n = 0;
//	int j = 0;
//	int ret = 0;
//	int count = 0;
//	printf("������n��ֵ:>");
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		count = j;
//		sum = 1;
//		for (i = 1; i <= j; i++)
//		{
//			sum = sum*i;
//		}
//		ret = sum + ret;
//	}
//	printf("ret=%d\n", ret);
//	//printf("sum=%d\n", sum);
//	return 0;
//}