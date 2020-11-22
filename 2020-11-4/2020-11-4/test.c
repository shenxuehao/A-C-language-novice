#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
void print(char* str)//print函数被称为回调函数
{
	printf("hehe:%s",str);
}

void test(void(*p)(char*))//参数部分接收的是函数的名字，那就是接收函数的地址，那括号里就写指向这样一个函数的指针
//把Print函数的地址交给p指针，因为p的定义是函数指针变量，可以存放函数的地址，指针指向char*，返回void，要用的话直接解引用就行(*p)("bit")，也可以不解引用，p直接p("bit");注意()是函数调用操作符，传参传了个字符串过去，给字符指针char*接收，*可以写好几个(*p),(**p),(***p)，*只是摆设，可以删掉
{//在test函数的内部通过传过来的函数的地址去调用它指向的函数
	printf("test\n");
	p("bit");//在函数内部的某种场景下调用这个函数调用函数，通过p去调用这个函数
}

int main()
{
	test(print);//把print函数的地址传递给test函数
	return 0;
}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*pf)(int, int);//pf就是函数指针
//	//函数指针数组只要在pf后面加方块[10]即可int(*pf[10])(int, int)
//	//如果想得到一个指向函数数组的指针，只需要int(*(*pf)[10])(int, int)，把pf改成(*pf)就行了
//	int(*p)[10]=&arr;//取出数组的地址:(*p)是指针，指向int[10](数组)
//	int(*pfArr[4])(int, int);//存放函数地址的数组，pfArr[4]是数组，把pfArr[4]去掉，剩下来的就是类型，即函数指针数组，(*pfArr[4])是指针，指向的是函数(int, int)，返回类型int
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//取出这个数组的地址，也要有一个指针指向这个数组，就叫指向函数指针数组的指针
//	//(*ppfArr)说明pfArr是一个指针，与(*ppfArr)结合的是[4]而不是*，所以是指针数组。去除(*ppfArr)[4]，就剩下类型，数组有四个元素每个元素的类型是int(*)(int, int)，是函数指针
//	//ppfArr是指针，指针指向的数组有四个元素，指向的数组的每个元素的类型是一个函数指针--int(*)(int, int)
//	//其实就是一个数组指针
//	int(*(*ppfArr[4])[4])(int, int);
//	//存放指向函数指针数组的指针的数组
//	return 0;
//}


//计算器
//#include <stdio.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("***   1.abb 2.sub   ***\n");
//	printf("***   3.mul 4.div   ***\n");
//	printf("***   5.xor 0.exit  ***\n");
//	printf("***********************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)//异或
//{
//	return x^y;
//}
//
//void Calc(int(*pf)(int, int))//int(*pfArr)(int, int)是函数指针
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n",(*pf)(x, y));//调用pf指向的函数
//}
//
//int main()
//{
//	int input = 0;
//	//int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };//要存放若干个函数的地址,int(*pfArr)(int, int)是函数指针，int(*pfArr[4])(int, int)是函数指针数组
//	//0对应下标0, Add对应下标1, Sub对应下标2, Mul对应下标3, Div对应下标4。可以不写下标，直接写int(*pfArr[])(int, int)。
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误"); 
//		}
//		//if (input >= 1 && input <= 5)
//		//{
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &x, &y);
//		//	int ret = pfArr[input](x, y); //pfArr放的几个函数的地址，input恰好对应几个元素，再加(x,y)调用这个函数
//		//	printf("%d\n", ret);
//		//}
//		//else if (input == 0)
//		//{
//		//	printf("退出\n");
//		//}
//		//else
//		//{
//		//	printf("选择错误\n");
//		//}
//	} while (input);
//	return 0;
//}


//如果写好多语句，case会越来越长 



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)//异或
//{
//	return x^y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };//要存放若干个函数的地址,int(*pfArr)(int, int)是函数指针，int(*pfArr[4])(int, int)是函数指针数组
//	//0对应下标0, Add对应下标1, Sub对应下标2, Mul对应下标3, Div对应下标4。可以不写下标，直接写int(*pfArr[])(int, int)。
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y); //pfArr放的几个函数的地址，input恰好对应几个元素，再加(x,y)调用这个函数
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//
//		//switch (input)
//		//{
//		//case 1:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Add(x, y));
//		//	break;
//		//case 2:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Sub(x, y));
//		//	break;
//		//case 3:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Mul(x, y));
//		//	break;
//		//case 4:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Div(x, y));
//		//	break;
//		//case 0:
//		//	printf("退出程序\n");
//		//	break;
//		//default:
//		//	printf("选择错误");
//		//}//如果写好多语句，case会越来越长 



//char*my_strcpy(char* dest, const char*src);
//1.写一个函数指针 pf，能够指向my_strcpy
//char*(*pf)(char*, const char*)//指向的是函数，用圆括号，返回类型char*
//2．写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char*(*pfArr[4])(char*, const char*)
//char*(*)(char*, const char*)是指针，指向函数，返回类型为char*