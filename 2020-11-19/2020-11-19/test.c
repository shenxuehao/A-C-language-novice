#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	char* p1 = "abcdefdjau";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//��ӡret��ָ��Ĵ��������p1��"def"������ַ�Ҳ�������defdjau
//	}
//	return 0;
//}

////�Լ�ʵ��strstr
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
	char* cur = p1;//cur��¼�п���ƥ��ɹ���λ��
	if (*p2=='\0')
	{
		return p1;
	}
	while (*cur)//���������ǲ��ǻ���û���ַ����Ա�����
	{
		s1 = cur;//������s1�����ƥ�䲻�ɹ�����s1�ص�cur��λ��
		s2 = p2;//������s2��p2������λ���������û��ƥ��ɹ�s2�ͷ�����λ
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
	
}//abbbcdef����ȥ��bbc

int main()
{
	char* p1 = "abcdefgh";
	char* p2 = "def";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("�ִ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}


