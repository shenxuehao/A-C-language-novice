#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdio.h>
struct Book
{
	char name[20];
	short price;
	char author[10];
	int kanhao;
};
int main()
{
	struct Book b1 = { "C语言程序设计", 55, "户凯亭", 226200 };
	struct Book* pb = &b1;
	printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);
	printf("作者:%s\n", b1.author);
	printf("刊号:%d\n", b1.kanhao);
	b1.price = 5;
	printf("修改后的价格:%d\n", b1.price);
	strcpy(b1.name, "C++");	
	printf("修改后的书名:%s\n", b1.name);
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	return 0;
}








//int main()
//{
//
//	char ch = 'A';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	double d = 3.1415926;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
	/*printf("%p\n", pd);
	printf("%lf\n", d);
//	printf("%d\n", pd);*/
//	return 0;
//}
////int main()
//{
//	int a;
//	int* p;
//	p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;
//	printf("a=%d\n", a);
//	return 0;
//}