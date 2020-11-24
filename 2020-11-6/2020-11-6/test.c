#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//首先是对void*的讲解
//int main()
//{
//	int a = 0;
//	//int* pa = &a;
//	//char pc = &a;//不介意警告的话，就没问题，因为pc放得下
//	//那么有没有一种指针能够接受任意类型的元素的地址呢？
//	//有 
//	//char ch = 'w';
//	void* p = &a;
//	//p的类型为void*，无类型指针,void*类型的指针可以接收任意类型的地址
//	//*p = 0;会报错，p为无类型指针，解引用的时候，不知道要访问几个字节，因为指针类型决定了我解引用的时候访问几个字节
//	//p++;   会报错，因为指针进行加减乘除的时候也得确定某种类型
//	//p = &ch; //也是没问题的
//}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//void qsort(void *base,size_t num,size_t width,int(__cdecl *compare)(const void *elem1, const void *elem2)//是一个函数指针，指向的函数有两个参数const void *e1, const void *e2);
//void Bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//
//	for (j = 0; j < sz;j++)
//	{
//		for (i = 0; i < sz-j; i++)//sz个元素只要进行sz-1趟冒泡排序就行
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				arr[i] = arr[i] ^ arr[i + 1];
//				arr[i + 1] = arr[i] ^ arr[i + 1];
//				arr[i] = arr[i] ^ arr[i + 1];
//			}
//		}
//	}
//}

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)//应该要按着(__cdecl *compare)的返回类型来设计//比较两个整型值的函数，传给cmp指针，e1和e2是你要比较的两个元素的地址，把你要比较的两个元素的地址传给cmp指针，因为cmp也不知道你要比较的两个元素的类型，干脆写void*
{
	//*e1,*e2，因为是void型的指针
	//但可以进行如下操作
	//*(int*)e1; *(int*)e2//把e1强制类型转化成int*，就变成了一个整型的地址,认为里面存放了个整型
	return *(int*)e1 - *(int*)e2;//比较两个整型值的
}

int cmp_float(const void* e1, const void* e2)
{
//方法一
//	return *(float*)e1 - *(float*)e2;//1>d:\test\2020-11-6\2020-11-6\test.c(63): warning C4244: “return”: 从“float”转换到“int”，可能丢失数据
//方法二
//	if (*(float*)e1 == *(float*)e2)
//	return 0;
//	if (*(float*)e1 > *(float*)e2)
//	return 1;
//	if (*(float*)e1 < *(float*)e2)
//	return -1;
//方法三
	return (int)(*(float*)e1 - *(float*)e2);
}

int  cmp_struct_Stu_byage(const void* e1, const void* e2)
{
	return (int)(((struct Stu*)e1)->age - ((struct Stu*)e2)->age);//按年龄排序，要找到e1里的年龄元素，首先把e1从void*强制类型转换成struct Stu*这种类型的结构体指针，对地址解引用获取结构体这么大的空间的值
}

int cmp_struct_Stu_byname(const void* e1, const void* e2)//cmp_struct_Stu_byname函数接收的是地址，是(char*)base + j*width, (char*)base + (j + 1)*width两个地址
{
	//比较名字就是比较字符串，字符串的比较不能直接用><=，应该用strcmp函数，strcmp为字符串比较函数
	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);//strcmp的返回值和qsort一样的，相同返回0，大于返回1，小于返回-1
}

void test1()
{
	int arr[] = { 4, 6, 8, 5, 4, 1, 2, 5, 1, 2, 6, 5, 1, 4, 6, 4, 1, 8, 9, 4, 5, 1, 6, 5, 4, 1, 6, 5, 3, 4, 1, 5, 8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);// cmp_int是比较两个元素的方式
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);// cmp_int是比较两个元素的方式//括号里分别是起始位置，几个元素，第一个元素的大小，
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
}

void test3()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } }; //结构体数组
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct_Stu_byage);
	qsort(s, sz, sizeof(s[0]), cmp_struct_Stu_byname);
	//四个参数分别是：
	//Start of target array，目标数组的起始位置,你要排序的数组的起始位置
	//Array size in elements，有几个元素
	//Element size in bytes，元素大小，单位为字节
	//Comparison function，比较函数是函数指针，比较两个元素所用的函数的地址，这个函数使用者自己实现，函数指针的两个参数是：待比较的两个元素的地址
	//此处结构体不打印，但可以调试
	printf("\n");
}

void Swap(char* buf1, char* buf2, int width)//因为已经被强制类型转换成char*了，所以用char*的指针来接收。接收的是个指针，把这两个地址所指向的元素交换，但要告诉Swap，要交换几个字节，有几对，所以宽度也要传过来
{//一对字符，一对字符交换，buf1与buf2各自指向的字符交换，交换完之后++指向下一个字符
	int i = 0;
	for (i = 0; i < width; i++)//交换这么多对字符
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1,void*e2))//不能传类型，但能传每个类型有多大，即width//第四个参数是函数指针，函数的返回类型为int，因为会返回0，-1，1，而且程序员也不知道待比较的两个函数的类型，void*e1就可以接收任意的要比较的两个元素的地址了
{//width单位为字节//不同的数据，比较方法不一样，那我们就把比较方法抽象成一个函数cmp
	//因为元素的类型不一样，当然首元素的地址也不一样，接收的就不能是某种固定指针的类型，所以用void*型的指针，无具体类型，可以接收任一类型的指针与地址，sz只要告诉系统排序几个元素，但又不知道是什么类型，就给个宽度，告诉系统每个元素几个字节，然后确定元素个数与趟数，然后是两两相邻比较的对数
	//传过来的数组不一样，两个元素的比较方法也不一样，整型可以直接用<>=，结构体可以拿名字，年龄来比，既然比较的方式不一样，那可以把比较方式抽离出来，所以就放了函数指针int(*cmp)(void*e1,void*e2)，把比较的方法的地址传进来，根据地址去调用比较函数，函数有两个参数，每个参数接收的是你要比较的那两个元素的地址
	//类型是void*，因为要比较的时候也不知道两个数据是什么类型的，但用了void*，就什么类型的指针都可以传。传进去相邻两个元素的地址，即(char*)base + j*width与(char*)base + (j + 1)*width，传进去之后把两个地址所指向的两个元素比较，如果返回值大于0，说明第一个元素大于第二个元素，升序得交换，所以分装一个swap函数来交换
	//使用cmp函数要找到相邻两个元素的地址，base是void型指针的时候是不能直接加减的，转换成char*的目的是让他跳转的时候+1跳一个字节，一共跳过j个宽度的字节 
	int i = 0;
	//趟数
	for (i = 0; i <sz - 1 ; i++)
	{
		//每一趟比较的对数为sz-1-i
		int j = 0;
		for (j = 0; j <sz - 1 - i; j++)
		{
			//两个元素的比较，把两个元素比较的方式传进去
			if ((cmp((char*)base + j*width, (char*)base + (j + 1)*width))>0)//cmp((char*)base),+1跳一个字节，+2跳两个字节，+width就跳过width个字节，cmp(base,(char*)base+width)就很好的指向了第一个和第二个元素的地址了，cmp((char*)base+i*width,(char*)base+(i+1)*width)，且他们都是指针！！！！！假设width是4，那么就是1，5，9，13的地址，一个一个比较
			{//cmp_struct_Stu_byname函数接收的是地址，是(char*)base + j*width, (char*)base + (j + 1)*width两个地址
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}

void test4()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubble_sort的程序员一定知道自己排序的是什么数据
	//他就应该知道如何比较待排序数组中的元素
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int); //bubble_sort可以排很多类型的数组，比如整型，结构体
}

void test5()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_struct_Stu_byage);
	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_Stu_byname);//cmp_struct_Stu_byname这是程序员想比较的方法
}

//要使bubble_sort能够排序任意类型

int main()
{
	//test1();//整型排序
	//test2();//浮点型排序
	//test3();//结构体排序
	//test4();
	test5();
	//Bubble_sort(arr,sz);
	return 0;
}




//#include <stdio.h>
//int Add(int x, int y)//函数名Add,参数int int ，返回类型int
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	int* arr[10];
//
//	//数组指针
//	int* (*pa)[10] = &arr;//拿出数组的地址，数组的地址要存起来，得放到一个指针变量里面
//	//pa是一个指向数组的指针，[]的意思是指向一个数组(*pa)[10]，类型为int*
//
//	//函数指针，函数是有地址的，函数名和取地址函数名就是函数的地址
//	int(*paAdd)(int, int) = Add;//或者&Add也行;//Add函数名，其实就是函数的地址，要存起来，放到paADD里面去，
//	//函数的地址Add放到指针变量paAdd里面去，指针变量paAdd里面存的还是那个地址，paAdd和Add是一回事，里面存的一样的值，既然Add可以直接(1,2)，那么PaAdd也可以
//	int sum = (*paAdd)(1, 2);//(*paADD)是在调用函数，(1,2)是在传参
//	int sum = paAdd(1, 2);//也可以这么写，以前是ADD(1, 2)
//	printf("%d\n", sum);
//	//函数指针的数组
//	int(*paArr[10])(int, int);//根据int(*paAdd)(int, int)来改
//	//指向数组指针数组的指针
//	int(*(*ppArr)[10])(int, int) = &paArr;//paArr是数组，ppArr是指向数组的指针//根据int(*paArr[10])(int, int);来改
//	return 0;
//}