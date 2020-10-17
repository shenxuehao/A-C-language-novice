#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++&&++b&&d++;1 2 3 4
	//i = a++ || ++b || d++;//1 3 3 4
	//i = ++b&&d++&&a++;//1335
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++&&++b&&d++;//2 3 3 5
	i = a++ || ++b || d++;//2 2 3 4
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	//int a = 3.14;//会丢失数据
//	int a = (int)3.14;//不会报错
//	printf("%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%d\n", a++);
//	printf("%d\n", ++a);
//	return 0;
//}