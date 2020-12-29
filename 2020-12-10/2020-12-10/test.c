#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf = NULL)
	{
		return 0;
	}
	//fseek(pf, -2, SEEK_END);
	int ch = fgetc(pf);
	printf("%d\n", ch);
	//int pos = ftell(pf);
	fclose(pf);
	pf = NULL;
	return 0;
}