#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("%p\n", arr1);
//	printf("%p\n", arr1+1);
//	printf("%p\n", &arr1[0]);
//	printf("%p\n", &arr1[0]+1);
//	printf("%d\n", *arr1);//1
//	printf("%p\n", &arr1);//整个数组的地址,运行结果和1、3一样，但是1、3是首元素的地址 ，2和4也一样 
//	printf("%p\n", &arr1+1);//地址相对增加了4*9=36
//	return 0;
//}





//#include <stdio.h>
//void bubble_sort(int arr[],int sz)//排完序就行，不需要什么返回值
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设本次要排序的数据已经有序了
//		int j = 0;
//		for (j = 0; j < sz-i-1; j++)//第i趟的时候，要比较sz-i-1对
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//要交换了，说明本趟排序的数据其实不是有序的
//			}
//		}
//		if (flag == 1)//已经有序了，不用排了，直接跳出去
//		{
//			break;//此处if放在for循环里面，break作用于for
//		}
//		//每一趟冒泡排序
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 6, 9, 5 };//对arr排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]); //sizeof(arr[0]是4
//	bubble_sort(arr,sz);//冒泡排序函数 //arr传地址，相当于传过去&arr[0]，形参是实参第一份临时拷贝，再创建一个空间会浪费空间
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
//


//#include <stdio.h>
//int main()
//{
//	char arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i,j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("a[%d][%d]的地址为%p\n",i ,j , &arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	//int arr[][] = { { 1, 2, 3 }, { 4, 5 } };//error 
//	//int arr[][] = {  1, 2, 3  4, 5  };//errar 缺少下标
//	//int arr[3][] = { { 1, 2, 3 }, { 4, 5 } };//列不能省略
//	int arr2[][4] = { { 1, 2, 3 }, { 4, 5 } };//行可以省略
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	{
//		for (i = 0; i < sz; i++)
//		{
//			int* p = &arr1[i];	
//			printf("&arr[i]=%p\n", p);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";// [a][b][c][d][e][f][\0]//这里求个数不用sizeof，因为有个\0
//	//printf("%c\n", arr[3]);
//	for (i = 0; i < (int)strlen(arr); i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//	return 0;//a b c d e f 而\0并不会被打印出来
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";//a b c \0
//	char arr2[] = { 'a', 'b' ,'c' };//只有a b c
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//因为找不到\0，就出来了个乱码
//	return 0;
//}//4 3 3 15
//
