#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>//���ַ��� 1.strlen() 2.�ݹ飬ģ��ʵ��strlen����������ʽ 3.my_strlen
int my_strlen(char* str)//��char*����Ϊ������������Ԫ�ص�ַ��strָ��ָ�����ַ�����ʼλ��
{//�����и�ָ��endָ��\0
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;//ָ���ȥָ��
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//�������Ԫ�ص�ַ�Ž�ȥ����һ�����ȳ���������һ�����ͷŵ�lem��������ȥ
	printf("%d\n", len);
	return 0; 
}
//#include <stdio.h>
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	printf("%d\n", &arr[9] - &ch[0]);//���������ۻ��ǰ����ַ����ۣ�ָ���ȥָ��һ����ָ��ͬһ��ռ��
//	//1>d:\test\2020-10-20\2020-10-20\test.c(8): warning C4133: ��-��: �ӡ�char *������int *�������Ͳ�����
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];//ȡ����ʮ��Ԫ�صĵ�ַ
//	for (i = 0; i < sz/2; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;//�������������
//	}
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//������������Ԫ�ص�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;//�����һ������
//	}
//	return 0;
//}



//#include <stdio.h>
//int* test()
//{
//	int arr[10] = { 0 };
//	return arr;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;//���ص�����ʱ��������������
//}
//
//


//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;//a����Ԫ�ص�ַ,p�����ľ�����Ԫ�ص�ַ
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}