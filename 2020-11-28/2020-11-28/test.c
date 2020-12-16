//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int* test()
//{
//	//static int a = 10;//静态区
//	int a = 10;//栈区
//	return &a;
//}
// int main() 
//{
//	int*p = test();
//	*p = 20; 
//	return 0; 
//}
//
//int* test()
//{
//	int *ptr = malloc(100);//堆区，只销毁ptr这个指针变量（局部变量），但是指向的那块100个字节空间还在，100个空间的地址返回到p去了
//	return ptr;//堆区的空间只有free才会回收！！！
//}
//int main()
//{
//	int *p = test();
//	return 0;
//}
//
//
//int *f1(void) 
//{
//	int x = 10;
//	return (&x);
//}//返回了一个已经销毁了的空间的地址
//
//
//int *f2(void)
//{
//	int *ptr;//ptr是野指针，默认放的随机值
//	*ptr = 10; //此时直接解引用会存在非法访问的问题
//	return ptr;
//}
//
//
//void GetMemory(char* p)
//{ 
//	p = (char*)malloc(100); 
//}
//void test(void) 
//{
//	char* str = NULL; 
//	GetMemory(str);
//	strcpy(str, "hello wor1d");
//	printf (str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//
//
//void GetMemory(char **p ,int num)
//{
//	*p = (char*)ma11oc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str,100); 
//	strcpy(str,"he11o");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//
//void Test(void)
//{
//	char *str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//void GetMemory(char* p)
//{ 
//	p = (char*)malloc(100); 
//}
//void Test(void) 
//{
//	char* str = NULL; 
//	GetMemory(str);
//	strcpy(str, "hello wor1d");
//	printf (str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//


