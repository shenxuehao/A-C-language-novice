#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	//�������飬������Σ�10��
	int arr[10] = { 1, 2, 3 };//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr2[5] = "ab";//������Ԫ�طŵ���"\0" //{ a, b };(��������)
	char arr3[5] = { 'a', 'b' };
	char arr4[5] = { 'a', 98 };//������Ȼ��ab	
	char arr5[] = "abcdef";//û��ָ����С��ʱ�򣬱���Ҫ��ʼ����
	//������ݳ�ʼ����������ȷ�������м���Ԫ�� ��7��Ԫ�� ���и�"\0"
	printf("%d\n", sizeof(arr5));//����arr4��ռ�ռ�Ĵ�С������7��Ԫ�أ�ÿ��Ԫ���Ǹ�char 7*1=7
	printf("%d\n", strlen(arr5));//�ַ�������
	//int n = 5;
	//char ch[n];//error ����Ϊ����
	return 0;
}














//#include <stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;//���Ե�����쳲��������ļ������
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	
//} //̫����
//#include <stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--; //�������4�� 1+1=2,1+2=3��һ������
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n;
//	int ret;
//	printf("������n:>");
//	scanf("%d", &n);
//	if (n<=0)
//	{
//		printf("�������\n");
//	}
//	if (n > 0)
//	{
//		ret = Fib(n);
//		printf("%d\n", ret);
//	}
//	return 0;	
//}