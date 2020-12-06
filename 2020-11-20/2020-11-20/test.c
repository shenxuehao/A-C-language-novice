#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1&&p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = (char*)p1;
//	if (!*s2)
//	return p1;
//	if (!*s1)
//	return NULL;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//			s1++, s2++;
//		if (!*s2)
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abbbbbcdefg";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("找不到对应的子串\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	//192.168.31.121
//	//想把刚刚那串函数以192 168 31 121的形式拿到，用strtok
//	//char* strock(char* str, const char* sep)
//	//str要被分割的字符串的起始位置
//	//sep是字符的起始位置
//	char arr[] = "sxh@biredu.tech";
//	char* p = "@.";
//	//strtok(arr, p);
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;//返回空指针的时候，就再也找不到了
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//strtok(NULL,p)要拿第二个，第三个，第四个标记了
//	{//	第一次返回s，//strtok函数自己会记住上一次找到的分割符的位置也就是\0的位置
//		printf("%s\n", ret);
//	}  
//	//切割buf中的字符串
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}


//#include <stdio.h>
//#include <errno.h>
//int main()
//{
//	//char* str = strerror(0);
//	//printf("%s\n", str);//No error
//	//char* str = strerror(1);	
//	//printf("%s\n", str); //Operation not permitted
//	//char* str = strerror(2);
//	//printf("%s\n", str);//No such file or directory
//	//...
//	//0 1 2 3 4是错误码，No such file or directory这些是错误信息，C语言库函数执行的时候
//	//strerror就是把错误码转换成错误信息，然后返回它的地址
//	char* str = strerror(errno);//errno是一个全局的错误码的变量，当C语言的库函数在执行的过程中发生错误，就会把对应的错误码赋值到erron中，
//	//C语言可以打开文件，fopen()
//	FILE* pf = fopen("test.txt", "r");//这个函数返回一个FILE*的指针放到pf里面去
//	if (pf == NULL)//打开文件失败
//	{
//		printf("%s\n", strerror(errno));//并没有这个文件，所以会显示No such file or directory
//	}
//	else//打开文件成功
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char ch = 'w';
//	int ret = islower(ch);//判断ch是否为小写字母，小写字母返回非零值，不是小写字符，返回0
//	printf("%d\n", ret);
//}



//#include <stdio.h>
//int main()
//{
//	char ch = tolower('Q');
//	putchar(ch);//打印一个字符
//	return 0;
//}



#include <stdio.h>
int main()
{
	char arr[] = "I am a student";//全部改成大写字母
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			tolower();
		}
	}
	
	return 0;
}