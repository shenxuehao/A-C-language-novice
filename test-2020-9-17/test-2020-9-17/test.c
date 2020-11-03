#define _CRT_SECURE_NO_DEPRECATE  //一定要放在源文件的第一行
#include <stdio.h>
//int a = 100;
//int main()
//{
//	printf("%d\n",a);
//	return 0;
//}
int main()
{
	//计算两个数的和
	int num1=0 ;//向内存申请四个字节，因为int是四个字节的
	int num2=0 ;//“=0”指的是变量初始化
	int sum = 0;
	//输入数据,使用数据输入函数scanf
	//错误示范scanf("%d%d",num1,num2);
	scanf("%d%d",&num1, &num2);
	//&为取地址符，意思是把地址取出来，把一会输入的两个数字放到num1和num2的地址处.先定义两个变量，再把值录进去
	//C语言语法规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
	
}
