#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int i = 0;
	int* arr[5];//���Ԫ�ص����飬ÿ��Ԫ�ض���Int*
	//int(*pa)(int,int) = Add;//paΪ����ָ��,pa���Add�ĵ�ַ��paҲ���Դ��Sub��Mul��Div�����ĵ�ַ
	//����붼������������Ҫһ�����飬���������Դ��4�������ĵ�ַ������Ǻ���ָ�����飬����ź���ָ�������
	//���ֱ�Ӽӷ���int(*pa[4])(int,int) = Add;��˵���Ǹ����飬�ĸ�Ԫ�أ���������[4]ȥ����ʣ�µ���
	//ʣ�µ���int(*)(int,int)��������ָ�����ͣ�������˵����pa�Ǹ����飬�ĸ�Ԫ�أ�ÿ��Ԫ�ض��Ǻ�����ָ�룬������ָ������
	int(*pa[4])(int, int) = { Add, Sub, Mul, Div};//��ʱpa���Ǻ���ָ������
	for (i = 0; i < 4; i++)
	{
		printf("%d ",pa[i](2,3));//���������ÿһ��Ԫ�أ�ÿһ��Ԫ�����Ǻ����ĵ�ַ��pa�Ѿ��ǵ�ַ�ˣ��Ͳ��ý�������
	}
	return 0;
}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//	printf("%d\n", Add(2, 3));
//	return 0;
//}

//#include <stdio.h>
//void Print(char*str)
//{
//	printf("%s\n",str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello");
//	return 0;
//}

//#include <stdio.h>
//
//void test(int arr[3][5])//���й��оص�д������һ�����飬��һ���������
////���鴫�ε�ʱ�򣬲������ֿ���д������
//{}
//void test1(int arr[][5])//��ά���鴫�ε�ʱ�����ǿ���ʡ�Ե��ģ������в���
//{}
////void test2(int arr[][])//
////{}
//void test3(int* arr)//���У�arr�Ƕ�ά���飬��ά�������������ʾ������Ԫ�أ�Ӧ���ǵ�һ�У���Ԫ�صĵ�ַӦ���ǵ�һ�еĵ�ַ����һ������һά���飬��Ԫ�ص�ַ����һά����ĵ�ַ
////һά����ĵ�ַ���ܷŽ�����ָ������ȥ������ָ��ֻ������������͵ĵ�ַ
//{}
//void test4(int** arr)//����������Ԫ�صĵ�ַ���ڶ�ά�������ǵ�һ�еĵ�ַ����һ�еĵ�ַ������ĵ�ַ������ĵ�ַ�޷��ŵ�����ָ������ȥ 
//{}
//void test5(int(*arr)[5])//��һ����������ͣ�arr���Ⱥ�*��ϣ���ָ�룬ָ�����飬������5��Ԫ�أ�ÿ��Ԫ��Ϊint��������ָ��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��ά���鴫��
//	return 0;
//}