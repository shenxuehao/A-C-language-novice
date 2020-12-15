#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//void GetMemory(char **p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}


//int* test()
//{
//	//static int a = 10//正确，a不在栈区，在静态区
//	int a = 10;//a是局部变量，在栈区，，error
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//}


int* test()
{
	int* ptr = malloc(100);//malloc在堆上
	return ptr;
}
int main()
{
	int *p = test();
	return 0;
}