#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	char* p1 = "abcdefdjau";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//打印ret所指向的串，但会把p1中"def"后面的字符也给打出来defdjau
//	}
//	return 0;
//}

////自己实现strstr
//#include <stdio.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	while(*str2 != 0)
//	{
//		while (*str1 != *str2)
//		{
//			str1++;
//		}
//		char* ret = str1;
//		while (*str1++ == *str2++);
//		return ret;
//	}
//	return NULL;
//}
//int main()
//{



#include <stdio.h>
#include <assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1&&p2);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;//cur记录有可能匹配成功的位置
	if (*p2=='\0')
	{
		return p1;
	}
	while (*cur)//看看后面是不是还有没有字符可以被查找
	{
		s1 = cur;//动的是s1，如果匹配不成功，让s1回到cur的位置
		s2 = p2;//动的是s2，p2用来定位，如果发现没有匹配成功s2就返回首位
		while ((*s1 != '\0') && (*s2 != '\0') && *s1)
		{
			if (*s1 == *s2)
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
			{

			}
			cur++;
		}
	}
	
}//abbbcdef里面去找bbc

int main()
{
	char* p1 = "abcdefgh";
	char* p2 = "def";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("字串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}


