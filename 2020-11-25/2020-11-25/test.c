#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strlen(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;// 找指针p来维护这块空间，这块空间用free还回操作系统之后，p还是会记得这块空间的地址，所以要把p也给清空
//}
//
//calloc Allocates an array in memory with elements initialized to 0.//在内存中开辟空间并把元素初始化成0
//
//
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//几个元素，每个元素几个字节，也是在堆上开辟
//	if (p == NULL)
//	{
//		printf("%s\n", strerrorr(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);//free函数是用来释放动态开辟的空间的
//	p = NULL;
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在在使用malloc开辟的空间
//	//假设20个字节不能满足使用要求了，希望有40个
//	//这里用realloc来调整动态开辟的内存
//	//void *realloc(void *memblock, size_t size);//void *memblock为要调整的地址，memblock,Pointer to previously allocated memory block。size,New size in bytes
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr == NULL)//追加失败
//	{
//		printf("追加失败\n");
//	}
//	else
//	{
//		p = ptr;
//		p = (int*)realloc(p, 4000000);//此时p变了
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
////realloc函数使用的注意事项：	如果原来的空间的后面的空间足够多，那就继续追加，返回旧的地址回去
////如果不够用，一次性开辟一个满足要求的新的空间，并把原来旧空间的值赋给新的空间，realloc函数会释放旧的空间，返回新空间的地址
////p也会变成一个全新的值
////3.realloc开辟失败的时候，会返回空指针给p，把p改掉了，所以返回值不能直接给p，要建立一个新的变量来接受realloc函数的返回值
//



//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(1000);
//	if (p == NULL)
//	{
//		printf("%s\n", strerrorr(errno));
//	}
//	free(p);
//	free(p);//会报错
//	return 0;
//}




#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
void test()
{
	int* p = (int*)malloc(1000000000000);
	if (NULL != 0)
	{
		*p = 20;
	}
	return 0;
}

int main()
{
	test();
	while (1);
}