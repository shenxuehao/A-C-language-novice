#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int my_strlen(const char* str)//求字符串长度，肯定不希望内容发生改变
{
	int count = 0;
	assert(str != NULL);//断言，保证指针的有效性
	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//#include <stdio.h>
//void my_strcpy(char* dest, char* src)//要的是指针
//对src指针解引用，就能获得b，*(src++)得到i
//arr1是字符数组的数组名，也是首元素的地址，首元素的地址就是char的地址
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//字符指针解引用能访问第一个字符
//		//src++;//指针++向后走一步，跳过一个字符，因为是字符指针，所以只跳一个
//		//dest++;
//	}
//	*dest = *src;//'\0'
//}

//void my_strcpy(char* dest, char* src)//要的是指针
//{
//	if ("dest!=NULL&&*src != NULL")//防止传过来的是空指针，但不能知道参数有问题,所以改进如下
//	{
//		while (*dest++ = *src++)//0的ascii码值是0，0放在判断条件处为假，为假while循环停下来了		
//		{
//			;
//		}
//	}
//}

//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);//char *strcpy( char *strDestination, const char *strSource );Destination目的地、Source源头
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);//会只显示bit，因为他把\0也拷贝过去了
//	return 0;
//}

//#include <assert.h>
//void my_strcpy(char* dest, char* src)//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest!=NULL);//断言,如果表达式结果作为真，什么都不发生，如果表达式结果作为假，报错
//	assert(src!= NULL);//会报错
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);//char *strcpy( char *strDestination, const char *strSource );Destination目的地、Source源头
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);//会只显示bit，因为他把\0也拷贝过去了
//	return 0;
//}
//{
//	int i = 0;
//	while (src[i] != '\0')
//	{
//		dest[i] = src[i];
//		i++;
//	}
//}


//void Get(char src[])
//{
//	printf("%p\n", src);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	Get(arr);
//	printf("%p\n", arr);
//	return 0;
//}

//int main()
//{
//	int n = 100;
//	int num = 20;
//	int* const p = &num;
//	//*p = 30;
//	p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int* p = &num;//int* const p;
//	//const int* const p;此时 ①和②都不能执行
//	*p = 0;//①//在const int* p = &num;的条件下，执行了②，①就不能执行了
//	p = &n;//②//在int* const p;的条件下，执行了①，②就不能执行了
//	printf("%d\n", num);
//}