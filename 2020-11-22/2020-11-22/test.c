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
//	//	//从前到后拷贝
//	//}
//	//else
//	//{
//	//	//从后往前拷贝
//	//}//方法一
//	if (dest < src)//比较大小的时候和类型没有关系，可以是void*型，方法二
//	{
//		//从前向后拷贝
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);//如果count一开始是20，那么经过--之后就是19，+19就到了最后一个字节
//		}
//	}
//	return ret;
//}
//
//void* my_memcpy(void* dest, const void* src, size_t count)//传过来的数据的类型不定，可能是整型，结构体，字符型
//{//const指向的是*src，也就是src指向的内容不能被改变
//	char* ret = dest;
////希望能检测到新的目的地发生变化	
//	assert(dest&&src);
//
//	while (count--)//count的单位是字节
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//(char*)dest++;这里强制类型转换的优先级较低，所以先执行++
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[10] = { 0 };
//	//arr1中的数字拷贝到arr2中，不能用strcpy，
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//把12345拷贝到34567上
//	//my_memcpy(arr3 + 2, arr3, 20);//my_memcpy不能用来重叠内存的拷贝，用memmove
//	//memmove(arr3 + 2, arr3, 20);//memmove可以胜任重叠拷贝，但其实memcpy可能实现这个功能	//C语言的标准memcpy  可以拷贝不重叠就可以了，但发现vs2013环境下，可以处理重叠拷贝，超额完成任务
//	my_memmove(arr3 + 2, arr3, 20);;
//	return 0;
//}





//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	//int ret = memcmp(arr1, arr2, 8);//比两个字节，字节，字节！！！！//0
//	int ret = memcmp(arr1, arr2, 9);//-1
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr[10] = "";//buffers译为缓冲区
//	memset(arr, '#', 10);
//	memset(arr, 1, 10);//这里是改了十个字节
//	return 0;
//}




//#include <stdio.h>
//struct Stu //声明一个结构体类型//声明一个学生类型，是想通过学生类型来创建学生对象/变量
//	//描述学生：属性：名字，电话，性别。struct为结构体关键字。Stu为结构体标签
//{
//	char name[20];//结构体的成员变量
//	char tele[12];//结构体的成员变量
//	char sex[10];//结构体的成员变量
//	int age;//结构体的成员变量
//}s6,s4,s5;//去掉s6,s4,s5是个结构体类型//s6,s4,s5是全局变量
//struct Stu s3;//s3为全局变量
//int main()
//{
//	int num;//只要有类型就可以拿来创建变量，而struct Stu是结构体类型，那么也可以创建结构体变量
//	struct Stu s1;
//	struct Stu s2;//s1和s2为局部变量
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