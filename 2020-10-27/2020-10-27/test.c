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
//}//release�汾���ӡ13��hehe ��Debug�汾����ѭ��
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
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)//ֻ�����ӡ������Ҫ����ֵ
//{
//	printf("name:%s\n", tmp.name);
//	printf("age :%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex :%s\n", tmp.sex);
//}//���ṹ�����.��Ա��������
//void Print2(Stu* ps)//Stu��ǰ��������������Stu,�ǽṹ�����Stu*Ϊ�ṹ��ָ��
////���û���ض��� Ҫд�� struct Stu*
//{
//	printf("name:%s\n",ps->name);
//	printf("age :%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex :%s\n", ps->sex);
//}//->����Խṹ��ָ���
//int main()
//{//��ӡ�ṹ�����ݵ����ַ���
//	//Print1��Print2�ĸ����ã�Print2��Print1����������һ��ռ䣬��Ϊ�β���ʵ�ε�һ����ʱ����
//	//��Print2�Ǵ��˵�ַ��ȥ����ַ�޷���4��8���ֽ�
//	Stu s = { "����", 40, "19852805385", "����" };//ͨ��Stu����s
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
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };//arr����Ԫ�ص�ַ
//	printf("%s\n", t.ch );//hehe
//	printf("%d\n", t.s.a );//100
//	printf("%lf\n", t.s.d);//3.140000
//	printf("%c\n", t.s.c);//w
//	printf("%s\n", t.s.arr);//hello world
//	printf("%s\n", t.pc);//hello bit //arr��Ҳ������Ԫ�ص�ַ������pc,*pc������hello bit
//	return 0;
//}
//#include <stdio.h> 
//typedef struct Stu//����һ���ṹ�����ͣ���ռ�ռ�
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//typedef�������ṹ����������������ֽ�Stu��Stu������
//     //struct Stu�����˸��������־ͽ�Stu
//
//struct Stu//����һ���ṹ�����ͣ���ռ�ռ�
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};//����д��"}s1,s2,s3;"��������ȫ�ֵĽṹ����������Ǿ�������ȫ�ֱ���
//
//int main()
//{
//	struct Stu s1;//�ֲ��Ľṹ�����
//	struct Stu s2;//����ֱ��дStu s1;Stu s2;!!!����Ҫ��struct��
//	//struct Stuֻ��һ�����ͣ�s���Ǳ���
//	return 0;
//}