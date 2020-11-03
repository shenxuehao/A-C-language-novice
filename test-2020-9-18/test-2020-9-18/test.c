#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
//	const int num = 4; const指的是常属性，此时num就是const修饰的常变量，本质还是变量，只是具有了常属性 
//	printf("%d\n", num);
//	num = 8;
//	printf('%d\n', num);
//	return 0;           这是错误的
int num = 4;//num是变量并且赋值4
printf("%d\n", num);
num = 8;
printf("%d\n", num);
return 0;
}
