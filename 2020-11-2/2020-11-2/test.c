#define _CRT_SECURE_NO_DEPRECATE


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//地址往后挪了i次，每次四个字节
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//就是找下标为i的元素，那么arr[i]等价于*(arr+i)，
//		//其实就是访问以arr为起始地址，下标为i的元素 
//		//所以 arr[i]==*(arr+i)==*(p+i)==p[i]
//		printf("%d ", p[i]);//其实就是访问以p为起始地址，下标为i的元素 
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//void print2(int(*p)[5], int x, int y)//一维数组的地址，数组的地址应该放到数组指针里去，
////只不过数组指针不是指向二维数组，而是指向第一行，是一维数组
////这里参数是数组的形式
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);//这也是可以的//p+1就是第二列
//		
//			//printf("%d ", *(*(p + i) + j));//*(p + i)相当于拿到了这一行的数组名，也就是首元素，+j就是往后挪j次，取地址就是取出该值
//			printf("%d ", *(p[i] + j));//*(p + i)就是p[i]
//			printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print1(int arr[3][5], int x, int y)//打印数组的内容//int arr[3][5]是数组形式，p此时此刻就是有能力指向一行
////指向整型+1跳过一个整型，那么指向数组+1跳过一个数组
////这里参数是指针的形式
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);//打印一行
//		}
//		printf("\n");//换行
//	}
//}
//int main(void)
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);//行和列一起传过去//这里的arr和上面的不一样，是数组名，就是首元素地址，除了&数组名与sizeof
//	print2(arr, 3, 5);
//	//把arr想象成一维数组，就有三个元素，每行就是一个元素，又因为数组名是首元素地址，所以数组名是第一行的地址，首元素就是第一行
//	//第一行又是一维数组，每一行5个元素，每个元素是int
//	//arr可以表示首元素地址，首元素是第一行，第一行的地址就是一维数组的地址，第一行是五个元素，每个元素为整型，一维数组的地址就可以指向一维数组的指针里面去，这个时候参数部分就可以写成指针了，就可以以指针的形式来访问二维数组
//	return 0;
//}


