#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//�����Ƕ�void*�Ľ���
//int main()
//{
//	int a = 0;
//	//int* pa = &a;
//	//char pc = &a;//�����⾯��Ļ�����û���⣬��Ϊpc�ŵ���
//	//��ô��û��һ��ָ���ܹ������������͵�Ԫ�صĵ�ַ�أ�
//	//�� 
//	//char ch = 'w';
//	void* p = &a;
//	//p������Ϊvoid*��������ָ��,void*���͵�ָ����Խ����������͵ĵ�ַ
//	//*p = 0;�ᱨ��pΪ������ָ�룬�����õ�ʱ�򣬲�֪��Ҫ���ʼ����ֽڣ���Ϊָ�����;������ҽ����õ�ʱ����ʼ����ֽ�
//	//p++;   �ᱨ����Ϊָ����мӼ��˳���ʱ��Ҳ��ȷ��ĳ������
//	//p = &ch; //Ҳ��û�����
//}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//void qsort(void *base,size_t num,size_t width,int(__cdecl *compare)(const void *elem1, const void *elem2)//��һ������ָ�룬ָ��ĺ�������������const void *e1, const void *e2);
//void Bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//
//	for (j = 0; j < sz;j++)
//	{
//		for (i = 0; i < sz-j; i++)//sz��Ԫ��ֻҪ����sz-1��ð���������
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				arr[i] = arr[i] ^ arr[i + 1];
//				arr[i + 1] = arr[i] ^ arr[i + 1];
//				arr[i] = arr[i] ^ arr[i + 1];
//			}
//		}
//	}
//}

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)//Ӧ��Ҫ����(__cdecl *compare)�ķ������������//�Ƚ���������ֵ�ĺ���������cmpָ�룬e1��e2����Ҫ�Ƚϵ�����Ԫ�صĵ�ַ������Ҫ�Ƚϵ�����Ԫ�صĵ�ַ����cmpָ�룬��ΪcmpҲ��֪����Ҫ�Ƚϵ�����Ԫ�ص����ͣ��ɴ�дvoid*
{
	//*e1,*e2����Ϊ��void�͵�ָ��
	//�����Խ������²���
	//*(int*)e1; *(int*)e2//��e1ǿ������ת����int*���ͱ����һ�����͵ĵ�ַ,��Ϊ�������˸�����
	return *(int*)e1 - *(int*)e2;//�Ƚ���������ֵ��
}

int cmp_float(const void* e1, const void* e2)
{
//����һ
//	return *(float*)e1 - *(float*)e2;//1>d:\test\2020-11-6\2020-11-6\test.c(63): warning C4244: ��return��: �ӡ�float��ת������int�������ܶ�ʧ����
//������
//	if (*(float*)e1 == *(float*)e2)
//	return 0;
//	if (*(float*)e1 > *(float*)e2)
//	return 1;
//	if (*(float*)e1 < *(float*)e2)
//	return -1;
//������
	return (int)(*(float*)e1 - *(float*)e2);
}

int  cmp_struct_Stu_byage(const void* e1, const void* e2)
{
	return (int)(((struct Stu*)e1)->age - ((struct Stu*)e2)->age);//����������Ҫ�ҵ�e1�������Ԫ�أ����Ȱ�e1��void*ǿ������ת����struct Stu*�������͵Ľṹ��ָ�룬�Ե�ַ�����û�ȡ�ṹ����ô��Ŀռ��ֵ
}

int cmp_struct_Stu_byname(const void* e1, const void* e2)//cmp_struct_Stu_byname�������յ��ǵ�ַ����(char*)base + j*width, (char*)base + (j + 1)*width������ַ
{
	//�Ƚ����־��ǱȽ��ַ������ַ����ıȽϲ���ֱ����><=��Ӧ����strcmp������strcmpΪ�ַ����ȽϺ���
	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);//strcmp�ķ���ֵ��qsortһ���ģ���ͬ����0�����ڷ���1��С�ڷ���-1
}

void test1()
{
	int arr[] = { 4, 6, 8, 5, 4, 1, 2, 5, 1, 2, 6, 5, 1, 4, 6, 4, 1, 8, 9, 4, 5, 1, 6, 5, 4, 1, 6, 5, 3, 4, 1, 5, 8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);// cmp_int�ǱȽ�����Ԫ�صķ�ʽ
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);// cmp_int�ǱȽ�����Ԫ�صķ�ʽ//������ֱ�����ʼλ�ã�����Ԫ�أ���һ��Ԫ�صĴ�С��
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
}

void test3()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } }; //�ṹ������
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct_Stu_byage);
	qsort(s, sz, sizeof(s[0]), cmp_struct_Stu_byname);
	//�ĸ������ֱ��ǣ�
	//Start of target array��Ŀ���������ʼλ��,��Ҫ������������ʼλ��
	//Array size in elements���м���Ԫ��
	//Element size in bytes��Ԫ�ش�С����λΪ�ֽ�
	//Comparison function���ȽϺ����Ǻ���ָ�룬�Ƚ�����Ԫ�����õĺ����ĵ�ַ���������ʹ�����Լ�ʵ�֣�����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
	//�˴��ṹ�岻��ӡ�������Ե���
	printf("\n");
}

void Swap(char* buf1, char* buf2, int width)//��Ϊ�Ѿ���ǿ������ת����char*�ˣ�������char*��ָ�������ա����յ��Ǹ�ָ�룬����������ַ��ָ���Ԫ�ؽ�������Ҫ����Swap��Ҫ���������ֽڣ��м��ԣ����Կ��ҲҪ������
{//һ���ַ���һ���ַ�������buf1��buf2����ָ����ַ�������������֮��++ָ����һ���ַ�
	int i = 0;
	for (i = 0; i < width; i++)//������ô����ַ�
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1,void*e2))//���ܴ����ͣ����ܴ�ÿ�������ж�󣬼�width//���ĸ������Ǻ���ָ�룬�����ķ�������Ϊint����Ϊ�᷵��0��-1��1�����ҳ���ԱҲ��֪�����Ƚϵ��������������ͣ�void*e1�Ϳ��Խ��������Ҫ�Ƚϵ�����Ԫ�صĵ�ַ��
{//width��λΪ�ֽ�//��ͬ�����ݣ��ȽϷ�����һ���������ǾͰѱȽϷ��������һ������cmp
	//��ΪԪ�ص����Ͳ�һ������Ȼ��Ԫ�صĵ�ַҲ��һ�������յľͲ�����ĳ�̶ֹ�ָ������ͣ�������void*�͵�ָ�룬�޾������ͣ����Խ�����һ���͵�ָ�����ַ��szֻҪ����ϵͳ���򼸸�Ԫ�أ����ֲ�֪����ʲô���ͣ��͸�����ȣ�����ϵͳÿ��Ԫ�ؼ����ֽڣ�Ȼ��ȷ��Ԫ�ظ�����������Ȼ�����������ڱȽϵĶ���
	//�����������鲻һ��������Ԫ�صıȽϷ���Ҳ��һ�������Ϳ���ֱ����<>=���ṹ����������֣��������ȣ���Ȼ�Ƚϵķ�ʽ��һ�����ǿ��԰ѱȽϷ�ʽ������������Ծͷ��˺���ָ��int(*cmp)(void*e1,void*e2)���ѱȽϵķ����ĵ�ַ�����������ݵ�ַȥ���ñȽϺ���������������������ÿ���������յ�����Ҫ�Ƚϵ�������Ԫ�صĵ�ַ
	//������void*����ΪҪ�Ƚϵ�ʱ��Ҳ��֪������������ʲô���͵ģ�������void*����ʲô���͵�ָ�붼���Դ�������ȥ��������Ԫ�صĵ�ַ����(char*)base + j*width��(char*)base + (j + 1)*width������ȥ֮���������ַ��ָ�������Ԫ�رȽϣ��������ֵ����0��˵����һ��Ԫ�ش��ڵڶ���Ԫ�أ�����ý��������Է�װһ��swap����������
	//ʹ��cmp����Ҫ�ҵ���������Ԫ�صĵ�ַ��base��void��ָ���ʱ���ǲ���ֱ�ӼӼ��ģ�ת����char*��Ŀ����������ת��ʱ��+1��һ���ֽڣ�һ������j����ȵ��ֽ� 
	int i = 0;
	//����
	for (i = 0; i <sz - 1 ; i++)
	{
		//ÿһ�˱ȽϵĶ���Ϊsz-1-i
		int j = 0;
		for (j = 0; j <sz - 1 - i; j++)
		{
			//����Ԫ�صıȽϣ�������Ԫ�رȽϵķ�ʽ����ȥ
			if ((cmp((char*)base + j*width, (char*)base + (j + 1)*width))>0)//cmp((char*)base),+1��һ���ֽڣ�+2�������ֽڣ�+width������width���ֽڣ�cmp(base,(char*)base+width)�ͺܺõ�ָ���˵�һ���͵ڶ���Ԫ�صĵ�ַ�ˣ�cmp((char*)base+i*width,(char*)base+(i+1)*width)�������Ƕ���ָ�룡������������width��4����ô����1��5��9��13�ĵ�ַ��һ��һ���Ƚ�
			{//cmp_struct_Stu_byname�������յ��ǵ�ַ����(char*)base + j*width, (char*)base + (j + 1)*width������ַ
				//����
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}

void test4()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
	//����Ӧ��֪����αȽϴ����������е�Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int); //bubble_sort�����źܶ����͵����飬�������ͣ��ṹ��
}

void test5()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_struct_Stu_byage);
	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_Stu_byname);//cmp_struct_Stu_byname���ǳ���Ա��Ƚϵķ���
}

//Ҫʹbubble_sort�ܹ�������������

int main()
{
	//test1();//��������
	//test2();//����������
	//test3();//�ṹ������
	//test4();
	test5();
	//Bubble_sort(arr,sz);
	return 0;
}




//#include <stdio.h>
//int Add(int x, int y)//������Add,����int int ����������int
//{
//	return x + y;
//}
//int main()
//{
//	//ָ������
//	int* arr[10];
//
//	//����ָ��
//	int* (*pa)[10] = &arr;//�ó�����ĵ�ַ������ĵ�ַҪ���������÷ŵ�һ��ָ���������
//	//pa��һ��ָ�������ָ�룬[]����˼��ָ��һ������(*pa)[10]������Ϊint*
//
//	//����ָ�룬�������е�ַ�ģ���������ȡ��ַ���������Ǻ����ĵ�ַ
//	int(*paAdd)(int, int) = Add;//����&AddҲ��;//Add����������ʵ���Ǻ����ĵ�ַ��Ҫ���������ŵ�paADD����ȥ��
//	//�����ĵ�ַAdd�ŵ�ָ�����paAdd����ȥ��ָ�����paAdd�����Ļ����Ǹ���ַ��paAdd��Add��һ���£�������һ����ֵ����ȻAdd����ֱ��(1,2)����ôPaAddҲ����
//	int sum = (*paAdd)(1, 2);//(*paADD)���ڵ��ú�����(1,2)���ڴ���
//	int sum = paAdd(1, 2);//Ҳ������ôд����ǰ��ADD(1, 2)
//	printf("%d\n", sum);
//	//����ָ�������
//	int(*paArr[10])(int, int);//����int(*paAdd)(int, int)����
//	//ָ������ָ�������ָ��
//	int(*(*ppArr)[10])(int, int) = &paArr;//paArr�����飬ppArr��ָ�������ָ��//����int(*paArr[10])(int, int);����
//	return 0;
//}