#define _CRT_SECURE_NO_DEPRECATE  //һ��Ҫ����Դ�ļ��ĵ�һ��
#include <stdio.h>
//int a = 100;
//int main()
//{
//	printf("%d\n",a);
//	return 0;
//}
int main()
{
	//�����������ĺ�
	int num1=0 ;//���ڴ������ĸ��ֽڣ���Ϊint���ĸ��ֽڵ�
	int num2=0 ;//��=0��ָ���Ǳ�����ʼ��
	int sum = 0;
	//��������,ʹ���������뺯��scanf
	//����ʾ��scanf("%d%d",num1,num2);
	scanf("%d%d",&num1, &num2);
	//&Ϊȡ��ַ������˼�ǰѵ�ַȡ��������һ��������������ַŵ�num1��num2�ĵ�ַ��.�ȶ��������������ٰ�ֵ¼��ȥ
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
	
}
