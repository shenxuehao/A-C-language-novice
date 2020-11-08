#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	//*pa = 0;
	printf("%p\n", pa);
	printf("%p\n", pa+1);
	printf("%p\n", pc);
	printf("%p\n", pc+1);
	return 0;
}




//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	printf("%p\n", p);
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	a = (i++) + (++i);
//	printf("%d\n%d\n",i,a);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c = 0xb6000000)
//	{
//		printf("c");
//	}
//	return 0;
//}
//
//
//
//
//







//#include <stdio.h>
//int main()
//{
//	char a = 3;
//	char b = 6;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}