#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//int main()
//{
//	//char arr1[] = "hello";//���������Ϊhello���ڵ��ַ���ֻ�ܷ�5���ַ�����world�ź��棬�����Խ�����
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);//arr2������׷�ӵ�arr1����ȥ
//	printf("%s\n", arr1);
//	return 0;
//}

//Ϊ�˼���ܲ��ܰ�arr2�е�\0����ȥ����arr1���ó�char arr1[30] = "hello\0xxxxxxxxx";
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxx";//�����\0����˼�ǣ�Դͷ��Ŀ�ĵص�\0��λ�ô���ʼ׷��
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}//�����helloworld��˵��\0Ҳ����ȥ

//��ôstrcat��ôʵ����
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)//Դͷ�����ݲ��ᷢ���仯
//{
//	char* ret = dest;
//	assert(dest&&src);
//	//1.�ҵ�dest�ַ�����\0��λ�ã���dest�����������
//	//while (*++dest)
//	//{
//	//	;
//	//}//�Դ�
//	while (*dest != 0)
//	{
//		dest++;
//	}
//	//2.׷��
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
//	//if ("abcdef" == "sqwer");//����ȵ���a��s�ĵ�ַ
//	int ret = strcmp(p1, p2);//aС��s��С���ַ����ڵ��ַ���С������һ���ַ�����ͬ�Ļ����͵ڶ���
//	printf("%d\0", ret);//-1
//	return 0;
//}

////ʵ��strcmp
//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	//�Ƚ�
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
//	strcpy(arr1, arr2);//strcpy�����ں�arr1���ܲ��ܷ�arr2����strcpy�Ͳ�һ����
//	strncpy(arr1, arr2, 4);//4�Ǹ������ƣ�����԰�ȫ��
//	char arr3[20] = "abcdef";
//	char arr4[] = "abc";
//	strncpy(arr1, arr2, 4);//arr4����ַ�û��4������������\0���㣬����λ��ʼ����arr3��ԭ������
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
//}//��arr1��ǰ3���ַ�����arr��\0λ�ÿ�ʼ����ţ�������������֮�󣬼Ӹ�\0�����滹��arrԭ��������

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//strncmp
//	//int strncmp( const char *string1, const char *string2, size_t count );
//	const char* p1 = "abcdef";//������ǳ����ַ�����Ӧ�üӸ�const
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);//���ԱȽ�ǰ�����ַ�
//	printf("%d\n", ret);
//	return 0;
//}


#include <stdio.h>
int main()
{
	char* p1 = "abcdef";

	return 0;
}