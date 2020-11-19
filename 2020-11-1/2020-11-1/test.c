#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int(*p)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10;i++)
	printf("%d ", (*p + i));
	return 0;
}

//#include <stdio.h>
//int main(void)
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;//数组的地址取出来应该放数组指针里去
//	//pa是一个指针变量名
//}

//int main(void)
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = &arr;//不行，整型指针不能存放数组的地址
//	int(*p)[10] = &arr;
//	//p是指针，指向的是int[10]，int[10]为数组类型，指针指向数组，数组有十个元素，都是int型的指针
//	//p就是数组指针
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	const char str1[] = "abc";
//	const char str2[] = "abc";
//	const char* p1 = "abc";
//	const char* p2 = "abc";
//	printf("str1的地址为%p\n", &str1);
//	printf("str2的地址为%p\n", &str2);
//	printf("p1的地址为  %p\n", &p1);
//	printf("p1的地址为  %p\n", &p2);
//	printf("%p\n", str1);
//}


//int main()
//{
//	const char* p = "abcdef";//const修饰的是*p，p所指向的内容不能被修改，p里面存放的是a的地址
//	//既然是个常量字符串，就不能修改
//	*p = 'W';//会报错
//	return 0;
//}

//int main(void)
//{
//	char* p = "abcdef";//abcdef放进p有7个字符，但p是指针，指针只有4个字节的大小
//	//不是把字符串赋给p，而是把首地址赋过去了，p里面存放的是地址，p是指针。"abcdef"是一个常量字符串
//	printf("%c\n", *p);//a
//	//p里面存的是a的地址，*p里面存的就是a
//	printf("%s\n", p);//从p里面存的地址处打印一个字符串
//	return 0;
//}

//int main(void)
//{
//	char arr[] = "abcdef"; 
//	char* pc = arr;
//	printf("%s\n", arr);//abcdef
//	printf("%s\n", pc);//abcdef
//	return 0;
//}

//#include <stdio.h>
//void test(int arr[])
//{
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",sz);//1，如果是64位，应该是8/4=2，指针8个字节，元素4个字节
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 9;
//	// 00000000000000000000000000001001 补码
//	//
//	float *pFloat = (float *)&n;
//	printf("n的值为:%d\n", n);//9
//	printf("*pFloat的值为:%f\n", *pFloat);//以*pFloat拿出来，内存中放的那个二进制序列我认为是浮点数的形式存在
//	//0(S) 00000000(E) 00000000000000000001001(M)
//	//E全为0 (-1)^0*0.00000000000000000001001*2^(1-127=-126)
//	//但是%f仅仅打印小数点后面的6位 就是0.000000
//	*pFloat = 9.0;//按照浮点数的形式往里存
//	//1001.0
//	//(-1)^0*1.001*2^3	
//	//0 10000010 00100000000000000000000
//	printf("num的值为:%d\n", n);//站在n的角度，我认为n里面存的是一个整数，是个补码
//	//01000001000100000000000000000000 
//	//是个正数，原码是本身1091567616
//	printf("*pFloat的值为:%f\n", *pFloat);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S=0
//	//M=1.011 前面的1不存 
//	//E=2,应该加上127放进去，是129
//	//0 10000001 01100000000000000000000
//	//M有23个比特位，要补全
//	//在内存中以二进制存储，十六进制展示
//	//01000000101100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40B00000
//	return 0;
//}

