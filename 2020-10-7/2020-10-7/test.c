#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int my_strlen(char* str) //要求的是长度，所以返回的长度是整数，所以用int
{

}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//arr是数组，数组传过去的不是整个数组，而是首元素的地址
	printf("len=%d\n,len");
	return 0;
}




//#include <stdio.h>
//void print(int n)//这个函数不需要返回值 
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}




//#include <stdio.h>
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//



//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//
//

//#include <stdio.h>
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}//main函数调用了three_line,three_line调用了new_line




////写一个函数，每调用换一次这个函数，就会将num的值增加1
//#include <stdio.h>
//void Add(int* p)//因为传过来的是指针，所以要走用指针来接受，此时*p就是外边的num
//{
//	(*p)++;//不能写*p+，++作用于p，不是*p，所以要写(*p++)
//}
//int main()
//{
//	int num = 0;
//	Add(&num); //在Add函数内部增加1，所以要采用传址的形式;当函数内部想改变函数外部变量的时候，要传地址。
//	printf("num =%d\n", num);
//	Add(&num);
//	printf("num =%d\n", num);
//	Add(&num);
//	printf("num =%d\n", num);
//	return 0;
//}