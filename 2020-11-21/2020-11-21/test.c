#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <string.h>
//struct s
//{
//	char name[20];
//	int age;
//	
//};
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 0 };
//	struct s arr3[] = { { "zhangsan", 20 },{ "lisi", 30 } };
//	struct s arr4[3] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));//ע��sizeof(arr1)����ʱarr1��ʾ��������
//	memcpy(arr4, arr3, sizeof(arr3));
//	//strcpy(arr2, arr1);
//	return 0;
//}



//#include <stdio.h>
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)//��Դͷ����Ŀ�ĵ�����ȥ������Ŀ�ĵصĿռ䷢���仯������num���ֽ�
//{
//	assert(dest&&src);
//	void* ret = dest;
//	//*dest//�ᱨ�����	1	error C2100: �Ƿ��ļ��Ѱַ	d:\test\2020-11-21\2020-11-21\test.c	28	1	2020-11-21
//	//�ɴ�һ���ֽ�һ���ֽ���
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//��ת������ǰ��++
//		++(char*)src;
//	}
//	return ret;
//}
//struct s
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 0 };
//	struct s arr3[] = { { "zhangsan", 20 },{ "lisi", 30 } };
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//}




#include <stdio.h>
void* my_memmove(void* dest, void* src, size_t num)
{

}
//��12345������34567����ȥ���Ȱ�5Ų��7��4Ų��6����Ҳ������memmove()�������ڴ��ص������
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	//memmove(arr1 + 2, arr1, 20);
	my_memmove(arr1 + 2, arr1, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}//memcpyֻҪ�����ص��Ŀ����Ϳ�����,memmove�ȿ��Դ����ص��Ŀ�����Ҳ���Դ����ص��ڴ�Ŀ���
