#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int my_strlen(const char* str)//���ַ������ȣ��϶���ϣ�����ݷ����ı�
{
	int count = 0;
	assert(str != NULL);//���ԣ���ָ֤�����Ч��
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
//void my_strcpy(char* dest, char* src)//Ҫ����ָ��
//��srcָ������ã����ܻ��b��*(src++)�õ�i
//arr1���ַ��������������Ҳ����Ԫ�صĵ�ַ����Ԫ�صĵ�ַ����char�ĵ�ַ
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//�ַ�ָ��������ܷ��ʵ�һ���ַ�
//		//src++;//ָ��++�����һ��������һ���ַ�����Ϊ���ַ�ָ�룬����ֻ��һ��
//		//dest++;
//	}
//	*dest = *src;//'\0'
//}

//void my_strcpy(char* dest, char* src)//Ҫ����ָ��
//{
//	if ("dest!=NULL&&*src != NULL")//��ֹ���������ǿ�ָ�룬������֪������������,���ԸĽ�����
//	{
//		while (*dest++ = *src++)//0��ascii��ֵ��0��0�����ж�������Ϊ�٣�Ϊ��whileѭ��ͣ������		
//		{
//			;
//		}
//	}
//}

//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);//char *strcpy( char *strDestination, const char *strSource );DestinationĿ�ĵء�SourceԴͷ
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);//��ֻ��ʾbit����Ϊ����\0Ҳ������ȥ��
//	return 0;
//}

//#include <assert.h>
//void my_strcpy(char* dest, char* src)//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest!=NULL);//����,������ʽ�����Ϊ�棬ʲô����������������ʽ�����Ϊ�٣�����
//	assert(src!= NULL);//�ᱨ��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);//char *strcpy( char *strDestination, const char *strSource );DestinationĿ�ĵء�SourceԴͷ
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);//��ֻ��ʾbit����Ϊ����\0Ҳ������ȥ��
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
//	//const int* const p;��ʱ �ٺ͢ڶ�����ִ��
//	*p = 0;//��//��const int* p = &num;�������£�ִ���ˢڣ��پͲ���ִ����
//	p = &n;//��//��int* const p;�������£�ִ���ˢ٣��ھͲ���ִ����
//	printf("%d\n", num);
//}