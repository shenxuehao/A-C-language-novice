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
//		printf("�Ҳ�����Ӧ���Ӵ�\n");
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
//	//��Ѹո��Ǵ�������192 168 31 121����ʽ�õ�����strtok
//	//char* strock(char* str, const char* sep)
//	//strҪ���ָ���ַ�������ʼλ��
//	//sep���ַ�����ʼλ��
//	char arr[] = "sxh@biredu.tech";
//	char* p = "@.";
//	//strtok(arr, p);
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;//���ؿ�ָ���ʱ�򣬾���Ҳ�Ҳ�����
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//strtok(NULL,p)Ҫ�õڶ����������������ĸ������
//	{//	��һ�η���s��//strtok�����Լ����ס��һ���ҵ��ķָ����λ��Ҳ����\0��λ��
//		printf("%s\n", ret);
//	}  
//	//�и�buf�е��ַ���
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
//	//0 1 2 3 4�Ǵ����룬No such file or directory��Щ�Ǵ�����Ϣ��C���Կ⺯��ִ�е�ʱ��
//	//strerror���ǰѴ�����ת���ɴ�����Ϣ��Ȼ�󷵻����ĵ�ַ
//	char* str = strerror(errno);//errno��һ��ȫ�ֵĴ�����ı�������C���ԵĿ⺯����ִ�еĹ����з������󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��erron�У�
//	//C���Կ��Դ��ļ���fopen()
//	FILE* pf = fopen("test.txt", "r");//�����������һ��FILE*��ָ��ŵ�pf����ȥ
//	if (pf == NULL)//���ļ�ʧ��
//	{
//		printf("%s\n", strerror(errno));//��û������ļ������Ի���ʾNo such file or directory
//	}
//	else//���ļ��ɹ�
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
//	int ret = islower(ch);//�ж�ch�Ƿ�ΪСд��ĸ��Сд��ĸ���ط���ֵ������Сд�ַ�������0
//	printf("%d\n", ret);
//}



//#include <stdio.h>
//int main()
//{
//	char ch = tolower('Q');
//	putchar(ch);//��ӡһ���ַ�
//	return 0;
//}



#include <stdio.h>
int main()
{
	char arr[] = "I am a student";//ȫ���ĳɴ�д��ĸ
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