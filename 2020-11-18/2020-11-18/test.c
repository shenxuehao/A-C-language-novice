#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//int main()
//{
//	//char arr1[] = "hello";//会崩溃，因为hello所在的字符串只能放5个字符，把world放后面，造成了越界访问
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);//arr2的内容追加到arr1后面去
//	printf("%s\n", arr1);
//	return 0;
//}

//为了检测能不能把arr2中的\0传过去，把arr1设置成char arr1[30] = "hello\0xxxxxxxxx";
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxx";//这里加\0的意思是，源头从目的地的\0的位置处开始追加
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}//结果是helloworld，说明\0也传过去

//那么strcat怎么实现呢
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)//源头的数据不会发生变化
//{
//	char* ret = dest;
//	assert(dest&&src);
//	//1.找到dest字符串的\0的位置，让dest往后遍历即可
//	//while (*++dest)
//	//{
//	//	;
//	//}//自创
//	while (*dest != 0)
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	//if ("abcdef" == "sqwer");//这里比的是a和s的地址
//	int ret = strcmp(p1, p2);//a小于s，小的字符所在的字符串小于另外一个字符，相同的话，就第二个
//	printf("%d\0", ret);//-1
//	return 0;
//}

////实现strcmp
//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else 
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char* p1 = "bcdef";
//	char* p2 = "abcdef";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bie";
//	strcpy(arr1, arr2);//strcpy并不在乎arr1内能不能放arr2，但strcpy就不一样了
//	strncpy(arr1, arr2, 4);//4是个数限制，会相对安全，
//	char arr3[20] = "abcdef";
//	char arr4[] = "abc";
//	strncpy(arr1, arr2, 4);//arr4里的字符没有4个，不够的用\0补足，第五位开始保持arr3的原样！！
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	char arr[30] = "hello\0xxxxxxxx";
//	char arr1[] = "world";
//	strncat(arr, arr1, 3);
//	printf("%s\n", arr);
//	return 0;
//}//把arr1的前3个字符，从arr的\0位置开始往后放，并在三个放完之后，加个\0，后面还是arr原来的内容

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//strncmp
//	//int strncmp( const char *string1, const char *string2, size_t count );
//	const char* p1 = "abcdef";//本身就是常量字符串，应该加个const
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);//各自比较前三个字符
//	printf("%d\n", ret);
//	return 0;
//}


#include <stdio.h>
int main()
{
	char* p1 = "abcdef";

	return 0;
}