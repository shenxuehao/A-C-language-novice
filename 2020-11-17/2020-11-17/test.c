#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
char* my_strcpy(char* dest, char* src)//����srcָ����ַ�����destָ��Ŀռ䣬����\0
{
	assert(dest != NULL);
	assert(src != NULL);
	//while (*src!='\0')
	//{
	//	*dest = *src;
	//	dest++;
	//	src++;
	//}
	//*dest = *src;//����\0//��������
	//while (*src != '\0')
	//{
	//	*dest++ = *src++;
	//}//������һ��
	char* ret = dest;//dest��䣬��ǰ��������
	while (*dest++ = *src++)//����++���Ƚ����ã���Ӽ�
	{//���ʽ����ȥ֮���൱���ж�arr2���ǲ���\0��\0��ascii��ֵ��0��ѭ��ֹͣ
		;//strcpy���ص���Ŀ�ĵصĵ�ַ
	}
	return ret;
}
int main()
{
	char arr1[] = "abcdefgi";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
//#include <stdio.h>
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1+my_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abfhbiea";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)//const���ε���ָ�룬��strָ������ݲ��ܸı�
//{
//	assert(str != NULL);//����������ָ�룬ָ��Ķ��Աز�����
//	int count = 0;
//	while (*str != '\0')//����while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");//����ȥ����a�ĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}

//FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1; //(x,y)Ϊ���Ͻǵ�Ԫ��
//while (x <= col - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}//������������ܰ��������ȥ
//ʱ�临�Ӷ�С��O(n);��һ��Ԫ���Ƿ���ڣ���������n�Σ�����O(n)
//FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1; //(x,y)Ϊ���Ͻǵ�Ԫ��
//	while (x <= *py - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;//���൱�ڰѺ����ڵ�x,y�ŵ������x��yȥ��
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���(%d,%d)\n", x, y);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
////��str1����׷��һ��str1��abcdefabcdef ��תһ���ַ�����bcdefa cdefab defabc...��������ת֮���ȫ�������ԣ�����ֻҪ�ж�arr2�ǲ��������Ӵ�����
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.��str1����׷��һ��str1�ַ��� strcat ctrncat
//	//strcat(str1, str1);//str1����׷��һ��str1����strcat�����Լ����Լ�׷��
//	strncat(str1, str1, 6);//6����˼��׷��6���ַ�
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr�������������Ӵ���
//	char* ret = strstr(str1, str2);//��str1������һ����û��str2����ַ������ҵ��Ļ������ص�һ��Ԫ�صĵ�ַ���������ַ��ĵ�ַ
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	//�ж�arr2�ܷ�ͨ��arr1��ת����
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

////������ת��
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////abcdef=>ab cdef=>��������ba fedc=>��������cdefab
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char *arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k < len);
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//ÿ����תһ������
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//		return 0;
//	}
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("Yes\n");
//	}
//
//}


//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

////������ⷨ
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////void left_move(char arr[], int k)//Ҳ����дchar* arr
////{
////
////}
//void judge(char* arr, char* arr2,int sz)
//{
//	//ֻҪ��ָ�룬�ͻ��н����ò������ͻ���ָ����Ч�Ե�����
//	assert(arr);//���arr�ǿ�ָ�룬�ͻᱨ��
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(arr + i) != *(arr + i + 1))
//		{
//			printf("��ƥ��\n");
//			break;
//		}
//	}
//}
//void left_move(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//��תһ���ַ�
//		char tmp = *arr;//��Ԫ���ó���
//		int j = 0;
//		for (int j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;//*(arr + len - 1)���һ���ַ�������
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char arr2[] = "hajdha";
//	int sz = 0;
//	int sz2 = 0;
//	sz = strlen(arr);
//	sz2 = strlen(arr2);
//	if (sz == sz2)
//	{
//		left_move(arr, 2);
//		judge(arr, arr2, sz);
//		printf("%s\n", arr);
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//void left_rotate(char* str, int sz,int k)
//{
//	char tmp;
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		for (i = 0; i < sz - 1; i++)
//		{
//			tmp = *(str + i);
//			*(str + i) = *(str + i + 1);
//			*(str + i + 1) = tmp;
//		}
//	}
//}
//int main()
//{
//	char str[10];
//	int k = 0;
//	printf("�������ַ���\n");
//	scanf("%s", str);
//	printf("��������ת��λ��\n");
//	scanf("%d", &k);
//	int sz = strlen(str);
//	left_rotate(str,sz,k);
//	printf("%s", str);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); 
//	return 0;
//}


//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d",*(a + 1),*(ptr - 1));
//	return 0;
//}