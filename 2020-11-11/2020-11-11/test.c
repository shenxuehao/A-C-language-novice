#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		//�ж�i�Ƿ�Ϊ������
		//��һ��������i��λ��n
		//�ڶ�����nλ��������i��ÿһλ��n�η�֮��
		//�Ƚ�
	}
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;//��һ��0*10+2���ڶ���2*10+2=22��22*10+2=222
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//}

//#include <stdio.h>
//int my_pow(int x,int y)
//{
//	int sum1 = 1;
//	int j = 0;
//	for (j = 0; j < y; j++)
//	{
//		sum1 = sum1*x;
//	}
//	return sum1;
//}
//
//int sum(int a,int n)
//{
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = my_pow(10, i);
//		sum = sum +a*tmp ;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int ret = { 0 };
//	int i = 0;
//	int Final = 0;
//	printf("input a:>");
//	scanf("%d", &a);
//	for (i = 1; i <= 5; i++)
//	{
//		ret = sum(a, i);
//		Final = Final + ret;
//	}
//	printf("%d\n",Final);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void nixu(char* str)
//{
//	assert(str);//��ָ֤�����Ч�ԣ����Ժ���
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;// str + len - 1Ϊ���һ���ַ��ĵ�ַ
//	while (left<=right)//��Ⱦ���ָ��ͬһ��Ԫ�أ���������
//	{
//	char tmp=*left;//*left���ǵ�һ��Ԫ��
//	*left = *right;
//	*right = tmp;
//	left++;
//	right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//����scanf�����ո��ٶ�ȡ
//	gets(arr);//getsΪ��ȡһ�зŵ�arr��
//	nixu(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 }; 
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d��%d\n",*pulPtr,*(pulPtr + 3));
//	return 0;
//}