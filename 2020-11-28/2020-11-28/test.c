//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int* test()
//{
//	//static int a = 10;//��̬��
//	int a = 10;//ջ��
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
//	int *ptr = malloc(100);//������ֻ����ptr���ָ��������ֲ�������������ָ����ǿ�100���ֽڿռ仹�ڣ�100���ռ�ĵ�ַ���ص�pȥ��
//	return ptr;//�����Ŀռ�ֻ��free�Ż���գ�����
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
//}//������һ���Ѿ������˵Ŀռ�ĵ�ַ
//
//
//int *f2(void)
//{
//	int *ptr;//ptr��Ұָ�룬Ĭ�Ϸŵ����ֵ
//	*ptr = 10; //��ʱֱ�ӽ����û���ڷǷ����ʵ�����
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


