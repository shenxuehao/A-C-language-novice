#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;//(short*)Ϊǿ������ת��������Ԫ�ص�ַǿ��ת��Ϊ(short*)������p��(short*)������һ�η��������ֽڣ���+1����������ֽ�
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//ֻ��ʼ�������ֽڣ����������ֽڸ�ֵ0��p+1�����������ֽڣ���1����ĺ������ֽڳ�ʼ����0�������Ĵ�
//		//�����������ͣ�8���ֽ�
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}//0 0 3 4 5

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (j = 0; j < sz; j++)
//	{
//		printf("[%d] ", arr1[j]);
//	}
//	printf("\n");
//	for (j = 0; j < sz; j++)
//	{
//		printf("[%d] ", arr2[j]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void reverse(int arr[], int sz)//��һ�������һ�������������ڶ����͵ڶ�������...,
////Ҫ���򣬲�Ҫ���أ�����void
//{
//	int left = 0;
//	int right = sz-1;
//	int tmp = 0; //����һ��Ԫ������ʱ����
//	while (left <= right)//����if 
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
////{
////	int i = 0;
////	for (i = sz-1; i > 0; i--)
////	{
////		printf("%d ", arr[i]);
////	}
////}
//void print(int arr[], int sz)//����Ҫ������Ϣ�Ͳ�����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 2, 2, 4, 1, 9, 4, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	//print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d\n%d\n", sizeof(str), strlen(str));
//	return 0;
//}//10 9


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, ( 3, 4 ), 5 };//���ű��ʽ��ֻ��4
//	printf("%d\n", sizeof(arr));
//	return 0;//4*4=16
//}
//
//#include <stdio.h>
//int i;//ȫ�ֱ�������ʼ������0����i=0
//int main()
//{
//	i--;//-1
//	if (i > sizeof(i))//sizeof�������/������ռ�ڴ�Ĵ�С>=0���޷�����4��
//		//��һ���������޷��������������ʱ�򣬲����Ǳȴ�С���ǼӼ��˳����i��ת�����޷�������
//		//-1ת�����޷����������λ�Ͳ��Ƿ���λ���Ǹ��ر�������
//	{
//		printf(">\n");
//	}
//	if (i < sizeof(i))
//	{
//		printf("<\n");
//	}
//	return 0;
//}//>
////-1
////10000000000000000000000000000001 ԭ��
////11111111111111111111111111111110 ����
////11111111111111111111111111111111 ����
////-1�ŵ�i�������-1����Ϊi���з�����
////Ȼ���iת�����޷������������ڴ�����Ȼ�ǲ��룬
////���ǵ�һ��1���Ƿ���λ������Чλ���Ǹ�������������ԭ������ͬ��
////���ֳ��󣬱ض��ܹ�����4

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6,a=6
//	b = ++c, c++, ++a, a++;//�����������μ���c=8,a=7,b=7,a=8,'��'�����ȼ���'='�͵�
//	b += a++ + c;//a=9 c=8 b+=16 b=23
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}//9 23 8	

//
//#include <stdio.h>//��Ĳ�����1�ĸ���
//#include <stdlib.h>
//int count_bit_one(unsigned int a)//���ص��Ǹ�������int��
////unsigned�ǽ��з�������ת�����޷�������
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)//&�ǰ�λ��1����λ��1�͵õ���һ��������λ
//		{
//			count++;
//		}
//	}
//	//while (a > 0)
//	//{
//	//	if (a % 2)
//	//	{
//	//		count++;
//	//	}
//	//	a = a / 2;
//	//}
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//Change(arr,sz);
//	return count;
//}
//int main()
//{
//	int a = 13;
//	scanf("%d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count = count_bit_one(a);
//	//-1
//	//10000000000000000000000000000001 ԭ��
//	//11111111111111111111111111111110 ����
//	//11111111111111111111111111111111 ����
//	//00000000000000000000000000000001 ������λ�룬���������ƶ�һλ
//	printf("count=%d\n", count);
//	//system("pause");//��ͣ,�ٰ�һ�²Ż����
//	return 0;
//}
//
//
//#include <stdio.h>//��Ĳ�����1�ĸ���
//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//n = n&(n-1);//ÿһ���������ұ�һ��1�����ַ�������ѭ��32��
//13
//1101 n
//1100 n-1
//1100 &,n
//1011 n-1
//1000 &,n
//0111 n-1
//0000 &,n


//
//int main()
//{
//	int a = 13;
//	scanf("%d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	//system("pause");//��ͣ,�ٰ�һ�²Ż����
//	return 0;
//}

//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//
//int get_diff_bit(int m,int n)
//{
//	int count = 0;
//	int tmp = m^n;
//	int count_bit_one(tmp);
//	return count;
//}
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d\n", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n");
//	return 0;
//}

