#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

#define MaxLen 255

typedef struct
{
	char ch[MaxLen];
	int length;
}SString;

bool SubString(SString &Sub, SString S, int pos, int len)
{
	if (pos + len - 1 > S.length)
		return false;
	for (int i = pos; i < pos + len; i++)
		Sub.ch[i - pos + 1] = S.ch[i];
	Sub.length = len;
	return true;
}



int main()
{

	return 0;
}








int main()
{

	return 0;
}