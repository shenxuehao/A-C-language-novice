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
//	p = NULL;// ��ָ��p��ά�����ռ䣬���ռ���free���ز���ϵͳ֮��p���ǻ�ǵ����ռ�ĵ�ַ������Ҫ��pҲ�����
//}
//
//calloc Allocates an array in memory with elements initialized to 0.//���ڴ��п��ٿռ䲢��Ԫ�س�ʼ����0
//
//
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//����Ԫ�أ�ÿ��Ԫ�ؼ����ֽڣ�Ҳ���ڶ��Ͽ���
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
//	free(p);//free�����������ͷŶ�̬���ٵĿռ��
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
//	//��������ʹ��malloc���ٵĿռ�
//	//����20���ֽڲ�������ʹ��Ҫ���ˣ�ϣ����40��
//	//������realloc��������̬���ٵ��ڴ�
//	//void *realloc(void *memblock, size_t size);//void *memblockΪҪ�����ĵ�ַ��memblock,Pointer to previously allocated memory block��size,New size in bytes
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr == NULL)//׷��ʧ��
//	{
//		printf("׷��ʧ��\n");
//	}
//	else
//	{
//		p = ptr;
//		p = (int*)realloc(p, 4000000);//��ʱp����
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
////realloc����ʹ�õ�ע�����	���ԭ���Ŀռ�ĺ���Ŀռ��㹻�࣬�Ǿͼ���׷�ӣ����ؾɵĵ�ַ��ȥ
////��������ã�һ���Կ���һ������Ҫ����µĿռ䣬����ԭ���ɿռ��ֵ�����µĿռ䣬realloc�������ͷžɵĿռ䣬�����¿ռ�ĵ�ַ
////pҲ����һ��ȫ�µ�ֵ
////3.realloc����ʧ�ܵ�ʱ�򣬻᷵�ؿ�ָ���p����p�ĵ��ˣ����Է���ֵ����ֱ�Ӹ�p��Ҫ����һ���µı���������realloc�����ķ���ֵ
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
//	free(p);//�ᱨ��
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