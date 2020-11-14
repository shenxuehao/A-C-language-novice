#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
void test2()
{
	printf("hehe\n");
}
void test1()
{
	test2();
}
void test()
{
	test1();
}
int main()
{
	test();
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d ",i);
//	}
//	for (i = 0; i <= 100; i++)
//	{
// 		printf("%d ",10-i);
//	}
//	return 0;
//}//release版本会打印13个hehe 而Debug版本会死循环
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);	
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)//只负责打印，不需要返回值
//{
//	printf("name:%s\n", tmp.name);
//	printf("age :%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex :%s\n", tmp.sex);
//}//“结构体变量.成员变量名”
//void Print2(Stu* ps)//Stu是前面重命名产生的Stu,是结构体变量Stu*为结构体指针
////如果没有重定义 要写成 struct Stu*
//{
//	printf("name:%s\n",ps->name);
//	printf("age :%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex :%s\n", ps->sex);
//}//->是针对结构体指针的
//int main()
//{//打印结构体数据的两种方法
//	//Print1和Print2哪个更好？Print2。Print1会另外生成一块空间，因为形参是实参的一份临时拷贝
//	//而Print2是传了地址过去，地址无非是4或8个字节
//	Stu s = { "李四", 40, "19852805385", "中性" };//通过Stu创建s
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };//arr是首元素地址
//	printf("%s\n", t.ch );//hehe
//	printf("%d\n", t.s.a );//100
//	printf("%lf\n", t.s.d);//3.140000
//	printf("%c\n", t.s.c);//w
//	printf("%s\n", t.s.arr);//hello world
//	printf("%s\n", t.pc);//hello bit //arr，也就是首元素地址赋给了pc,*pc里面是hello bit
//	return 0;
//}
//#include <stdio.h> 
//typedef struct Stu//定义一个结构体类型，不占空间
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//typedef把整个结构体类型重新起个名字叫Stu，Stu是类型
//     //struct Stu被改了个名字名字就叫Stu
//
//struct Stu//定义一个结构体类型，不占空间
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};//可以写成"}s1,s2,s3;"定义三个全局的结构体变量，但是尽量少用全局变量
//
//int main()
//{
//	struct Stu s1;//局部的结构体变量
//	struct Stu s2;//不能直接写Stu s1;Stu s2;!!!必须要加struct。
//	//struct Stu只是一个类型，s才是变量
//	return 0;
//}