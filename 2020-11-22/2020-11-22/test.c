#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	//if (dest<src || dest>(char*)src + count)
//	//{
//	//	//��ǰ���󿽱�
//	//}
//	//else
//	//{
//	//	//�Ӻ���ǰ����
//	//}//����һ
//	if (dest < src)//�Ƚϴ�С��ʱ�������û�й�ϵ��������void*�ͣ�������
//	{
//		//��ǰ��󿽱�
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);//���countһ��ʼ��20����ô����--֮�����19��+19�͵������һ���ֽ�
//		}
//	}
//	return ret;
//}
//
//void* my_memcpy(void* dest, const void* src, size_t count)//�����������ݵ����Ͳ��������������ͣ��ṹ�壬�ַ���
//{//constָ�����*src��Ҳ����srcָ������ݲ��ܱ��ı�
//	char* ret = dest;
////ϣ���ܼ�⵽�µ�Ŀ�ĵط����仯	
//	assert(dest&&src);
//
//	while (count--)//count�ĵ�λ���ֽ�
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//(char*)dest++;����ǿ������ת�������ȼ��ϵͣ�������ִ��++
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[10] = { 0 };
//	//arr1�е����ֿ�����arr2�У�������strcpy��
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//��12345������34567��
//	//my_memcpy(arr3 + 2, arr3, 20);//my_memcpy���������ص��ڴ�Ŀ�������memmove
//	//memmove(arr3 + 2, arr3, 20);//memmove����ʤ���ص�����������ʵmemcpy����ʵ���������	//C���Եı�׼memcpy  ���Կ������ص��Ϳ����ˣ�������vs2013�����£����Դ����ص������������������
//	my_memmove(arr3 + 2, arr3, 20);;
//	return 0;
//}





//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	//int ret = memcmp(arr1, arr2, 8);//�������ֽڣ��ֽڣ��ֽڣ�������//0
//	int ret = memcmp(arr1, arr2, 9);//-1
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr[10] = "";//buffers��Ϊ������
//	memset(arr, '#', 10);
//	memset(arr, 1, 10);//�����Ǹ���ʮ���ֽ�
//	return 0;
//}




//#include <stdio.h>
//struct Stu //����һ���ṹ������//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������/����
//	//����ѧ�������ԣ����֣��绰���Ա�structΪ�ṹ��ؼ��֡�StuΪ�ṹ���ǩ
//{
//	char name[20];//�ṹ��ĳ�Ա����
//	char tele[12];//�ṹ��ĳ�Ա����
//	char sex[10];//�ṹ��ĳ�Ա����
//	int age;//�ṹ��ĳ�Ա����
//}s6,s4,s5;//ȥ��s6,s4,s5�Ǹ��ṹ������//s6,s4,s5��ȫ�ֱ���
//struct Stu s3;//s3Ϊȫ�ֱ���
//int main()
//{
//	int num;//ֻҪ�����;Ϳ�������������������struct Stu�ǽṹ�����ͣ���ôҲ���Դ����ṹ�����
//	struct Stu s1;
//	struct Stu s2;//s1��s2Ϊ�ֲ�����
//	return 0;
//}



struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

struct S3
{
	double d;
	char c2;
	int a;
};

struct S4
{
	char c1;
	struct S3;
	double d1;
};

int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	struct S3 s3 = { 0 };
	printf("%d\n", sizeof(s3));
	struct S4 s4 = { 0 };
	printf("%d\n", sizeof(s4));
	return 0;
}