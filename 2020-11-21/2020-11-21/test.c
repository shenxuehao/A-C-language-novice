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
//	memcpy(arr2, arr1, sizeof(arr1));//注意sizeof(arr1)，此时arr1表示整个数组
//	memcpy(arr4, arr3, sizeof(arr3));
//	//strcpy(arr2, arr1);
//	return 0;
//}



//#include <stdio.h>
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)//把源头拷进目的地里面去，期望目的地的空间发生变化，拷贝num个字节
//{
//	assert(dest&&src);
//	void* ret = dest;
//	//*dest//会报错错误	1	error C2100: 非法的间接寻址	d:\test\2020-11-21\2020-11-21\test.c	28	1	2020-11-21
//	//干脆一个字节一个字节拿
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//先转换，再前置++
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
//把12345拷贝到34567里面去，先把5挪到7，4挪到6，但也可以用memmove()来处理内存重叠的情况
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
}//memcpy只要处理不重叠的拷贝就可以了,memmove既可以处理不重叠的拷贝，也可以处理重叠内存的拷贝
