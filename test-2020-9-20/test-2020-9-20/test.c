#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
int main()
{
	int line = 0;
	printf("加入比特\n");
	while(line <= 20000)
	{
		printf("敲一行代码%d\n",line);
		line++;
	}
	if (line>20000)
	printf("好offer\n");
	return 0;
}
//int main()
//{
//	printf("%c\n",'\'');
//	return 0;
//}
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//enum Coluor
//{
//	Yellow,
//	Red,
//	Blue
//};
//int main()
////{
////	enum Colour colour = Blue;
////    /*printf("%d\n", Yellow);
////	printf("%d\n", Red);
//	printf("%d\n", Blue);*/
//	return 0;
//}
// 
////
////{
////	return0;
////}
////enum Sex
////{
////	MALE,
////	FEMALE,
////	SECRET
////};
////int main()
////{
////	printf("%d\n", MALE);
////	printf("%d\n", FEMALE);
//////	printf("%d\n", SECRET);
//////	return 0;
////}
