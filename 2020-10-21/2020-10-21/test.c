#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int *pa = &a;
	//int *pb = &b;
	//int *pc = &c;
	//��������-�������
	//�ַ�����-����ַ�
	//ָ������-���ָ��
	//int arr[10];//arrΪ������
	int* arr2[3] = { &a, &b, &c };//ָ�����飬ÿһ��Ԫ�ض���int*��ָ��
	int i = 0;//�������飬��a b c����ֵ��ӡ����
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *arr2[i]);
	}
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr[0]+1);
//	return 0;
//}
//005CFEAC
//005CFEAC
//005CFEAC
//005CFEB0
//005CFED4
//005CFEB0