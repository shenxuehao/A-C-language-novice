#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	double d = 1E10;
	printf("%lf\n", d);
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 补码要存到a里面去的话，a只有一个字节，要8个比特位
//	//10000000//1是符号位，高位补1，提升得到11111111111111111111111110000000
//	printf("%u\n", a);//%u十进制的无符号数字
//	//11111111111111111111111110000000 补码
//	//但%u是我让你按照无符号的形式进行打印，我认为内存里放的无符号数，无符号数原反补相同，直接打印
//	return 0;//4294967168
//}

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);//睡眠100ms
//	}//这里i永远大于等于0
//	return 0;
//}


