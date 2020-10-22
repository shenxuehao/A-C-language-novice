#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	//printf("%c\n", ch);
	printf("%d\n", sizeof pc );
	printf("%d\n", sizeof (char*));
	printf("%d\n", sizeof (double*));
	printf("%d\n", sizeof (int*));
	printf("%d\n", sizeof (short*));

	return 0;
}