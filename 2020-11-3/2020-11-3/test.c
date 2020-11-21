#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int i = 0;
	int* arr[5];//五个元素的数组，每个元素都是Int*
	//int(*pa)(int,int) = Add;//pa为函数指针,pa存放Add的地址，pa也可以存放Sub，Mul，Div函数的地址
	//如果想都存起来，就需要一个数组，这个数组可以存放4个函数的地址，这就是函数指针数组，即存放函数指针的数组
	//如果直接加方块int(*pa[4])(int,int) = Add;就说明是个数组，四个元素，数组名和[4]去掉，剩下的是
	//剩下的是int(*)(int,int)，即函数指针类型，整体来说就是pa是个数组，四个元素，每个元素都是函数的指针，即函数指针数组
	int(*pa[4])(int, int) = { Add, Sub, Mul, Div};//此时pa就是函数指针数组
	for (i = 0; i < 4; i++)
	{
		printf("%d ",pa[i](2,3));//访问数组的每一个元素，每一个元素又是函数的地址，pa已经是地址了，就不用解引用了
	}
	return 0;
}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//	printf("%d\n", Add(2, 3));
//	return 0;
//}

//#include <stdio.h>
//void Print(char*str)
//{
//	printf("%s\n",str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello");
//	return 0;
//}

//#include <stdio.h>
//
//void test(int arr[3][5])//最中规中矩的写法，给一个数组，拿一个数组接收
////数组传参的时候，参数部分可以写成数组
//{}
//void test1(int arr[][5])//二维数组传参的时候，行是可以省略掉的，但是列不行
//{}
////void test2(int arr[][])//
////{}
//void test3(int* arr)//不行，arr是二维数组，二维数组的数组名表示的是首元素，应该是第一行，首元素的地址应该是第一行的地址，第一行又是一维数组，首元素地址就是一维数组的地址
////一维数组的地址不能放进整型指针里面去，整型指针只能用来存放整型的地址
//{}
//void test4(int** arr)//数组名是首元素的地址，在二维数组中是第一行的地址，第一行的地址是数组的地址，数组的地址无法放到二级指针里面去 
//{}
//void test5(int(*arr)[5])//第一行是五个整型，arr首先和*结合，是指针，指向数组，数组有5个元素，每个元素为int，是数组指针
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组传参
//	return 0;
//}