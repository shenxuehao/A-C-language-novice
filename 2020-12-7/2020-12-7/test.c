#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100, 3.14f, "abcdef" };
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	sscanf(buf, "%d %f %s", &tmp.n, &tmp.score, tmp.arr);
	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
	return 0;
}