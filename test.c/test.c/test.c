#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	if (n > 2)
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n, ret;
	printf("������n:>");
	scanf("%d", &n);
	ret=Fib(n);
	printf("��%d��쳲�������Ϊ%d",n,ret);
	return 0;
}





int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*Fac2(n - 1);//Fac(n)=nFac(n-1)
}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	printf("������n:>");
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//int my_strlen(char* str) //���صĳ���Ϊ���� ������int,
//str��������bit�ĵ�һ���ַ��ĵ�ַ��
//��һ��ָ�������һ��ָ������ҵ�b��
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//ָ��+1
//	}
//	return count;
//} //�˷�����Ҫ���ⴴ������
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	return 0;
//} //�ȵݺ��
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�
//	//����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ���Ǹ�ָ�롣
//	printf("len=%d\n", len);
//	return 0;
//}
