#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
char* my_strcpy(char* dest, char* src)//拷贝src指向的字符串到dest指向的空间，包含\0
{
	assert(dest != NULL);
	assert(src != NULL);
	//while (*src!='\0')
	//{
	//	*dest = *src;
	//	dest++;
	//	src++;
	//}
	//*dest = *src;//拷贝\0//不够精简
	//while (*src != '\0')
	//{
	//	*dest++ = *src++;
	//}//精简了一点
	char* ret = dest;//dest会变，提前保存起来
	while (*dest++ = *src++)//后置++，先解引用，后加加
	{//表达式赋过去之后，相当于判断arr2里是不是\0，\0的ascii码值是0，循环停止
		;//strcpy返回的是目的地的地址
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
//int my_strlen(const char* str)//const修饰的是指针，即str指向的内容不能改变
//{
//	assert(str != NULL);//传过来的是指针，指针的断言必不可少
//	int count = 0;
//	while (*str != '\0')//或者while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");//传过去的是a的地址
//	printf("%d\n", len);
//	return 0;
//}

//FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1; //(x,y)为右上角的元素
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
//}//这个方法并不能把坐标带回去
//时间复杂度小于O(n);找一个元素是否存在，最坏的情况找n次，就是O(n)
//FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1; //(x,y)为右上角的元素
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
//			*py = y;//就相当于把函数内的x,y放到外面的x，y去了
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
//		printf("找到了\n");
//		printf("下标是(%d,%d)\n", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
////在str1后面追加一组str1，abcdefabcdef 旋转一个字符就是bcdefa cdefab defabc...包含了旋转之后的全部可能性，所以只要判断arr2是不是他的子串就行
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.在str1后面追加一组str1字符串 strcat ctrncat
//	//strcat(str1, str1);//str1后面追加一个str1，但strcat不能自己给自己追加
//	strncat(str1, str1, 6);//6的意思是追加6个字符
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr函数是用来找子串的
//	char* ret = strstr(str1, str2);//在str1里面找一找有没有str2这个字符串，找到的话，返回第一个元素的地址，即返回字符的地址
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
//	//判断arr2能否通过arr1旋转得来
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

////三步翻转法
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////abcdef=>ab cdef=>逆序左右ba fedc=>逆序整体cdefab
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
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//每次旋转一个就行
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

////暴力求解法
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////void left_move(char arr[], int k)//也可以写char* arr
////{
////
////}
//void judge(char* arr, char* arr2,int sz)
//{
//	//只要是指针，就会有解引用操作，就会有指针有效性的问题
//	assert(arr);//如果arr是空指针，就会报错
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(arr + i) != *(arr + i + 1))
//		{
//			printf("不匹配\n");
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
//		//旋转一个字符
//		char tmp = *arr;//首元素拿出来
//		int j = 0;
//		for (int j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;//*(arr + len - 1)最后一个字符的内容
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
//		printf("错误\n");
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
//	printf("请输入字符串\n");
//	scanf("%s", str);
//	printf("请输入旋转的位数\n");
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