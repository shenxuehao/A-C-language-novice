#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;//(short*)为强制类型转换，把首元素地址强制转换为(short*)赋给了p，(short*)解引用一次访问两个字节，即+1向后跳两个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//只初始化两个字节，即把两个字节赋值0，p+1是跳了两个字节，把1里面的后两个字节初始化成0，跳了四次
//		//跳了两个整型，8个字节
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}//0 0 3 4 5

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (j = 0; j < sz; j++)
//	{
//		printf("[%d] ", arr1[j]);
//	}
//	printf("\n");
//	for (j = 0; j < sz; j++)
//	{
//		printf("[%d] ", arr2[j]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void reverse(int arr[], int sz)//第一个和最后一个交换，倒数第二个和第二个交换...,
////要逆序，不要返回，还是void
//{
//	int left = 0;
//	int right = sz-1;
//	int tmp = 0; //交换一对元素用临时变量
//	while (left <= right)//不是if 
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
////{
////	int i = 0;
////	for (i = sz-1; i > 0; i--)
////	{
////		printf("%d ", arr[i]);
////	}
////}
//void print(int arr[], int sz)//不需要返回信息就不返回
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 2, 2, 4, 1, 9, 4, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	//print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d\n%d\n", sizeof(str), strlen(str));
//	return 0;
//}//10 9


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, ( 3, 4 ), 5 };//逗号表达式，只有4
//	printf("%d\n", sizeof(arr));
//	return 0;//4*4=16
//}
//
//#include <stdio.h>
//int i;//全局变量不初始化就是0，即i=0
//int main()
//{
//	i--;//-1
//	if (i > sizeof(i))//sizeof计算变量/类型所占内存的大小>=0；无符号数4，
//		//当一个整数和无符号数进行运算的时候，不管是比大小还是加减乘除会把i先转换成无符号数。
//		//-1转化成无符号数，最高位就不是符号位，是个特别大的数字
//	{
//		printf(">\n");
//	}
//	if (i < sizeof(i))
//	{
//		printf("<\n");
//	}
//	return 0;
//}//>
////-1
////10000000000000000000000000000001 原码
////11111111111111111111111111111110 反码
////11111111111111111111111111111111 补码
////-1放到i里面就是-1，因为i是有符号数
////然后把i转换成无符号数，放在内存里依然是补码，
////但是第一个1不是符号位，是有效位，是个正数，整数的原反补相同，
////数字超大，必定能够大于4

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6,a=6
//	b = ++c, c++, ++a, a++;//从左向右依次计算c=8,a=7,b=7,a=8,'，'的优先级比'='低的
//	b += a++ + c;//a=9 c=8 b+=16 b=23
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}//9 23 8	

//
//#include <stdio.h>//算的补码中1的个数
//#include <stdlib.h>
//int count_bit_one(unsigned int a)//返回的是个数，用int；
////unsigned是将有符号类型转换成无符号类型
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)//&是按位与1，按位与1就得到了一个二进制位
//		{
//			count++;
//		}
//	}
//	//while (a > 0)
//	//{
//	//	if (a % 2)
//	//	{
//	//		count++;
//	//	}
//	//	a = a / 2;
//	//}
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//Change(arr,sz);
//	return count;
//}
//int main()
//{
//	int a = 13;
//	scanf("%d", &a);
//	//写一个函数求a的二进制（补码）表示中有几个1
//	int count = count_bit_one(a);
//	//-1
//	//10000000000000000000000000000001 原码
//	//11111111111111111111111111111110 反码
//	//11111111111111111111111111111111 补码
//	//00000000000000000000000000000001 用来按位与，补码向右移动一位
//	printf("count=%d\n", count);
//	//system("pause");//暂停,再按一下才会结束
//	return 0;
//}
//
//
//#include <stdio.h>//算的补码中1的个数
//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//n = n&(n-1);//每一次消掉最右边一个1，这种方法不用循环32次
//13
//1101 n
//1100 n-1
//1100 &,n
//1011 n-1
//1000 &,n
//0111 n-1
//0000 &,n


//
//int main()
//{
//	int a = 13;
//	scanf("%d", &a);
//	//写一个函数求a的二进制（补码）表示中有几个1
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	//system("pause");//暂停,再按一下才会结束
//	return 0;
//}

//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//
//int get_diff_bit(int m,int n)
//{
//	int count = 0;
//	int tmp = m^n;
//	int count_bit_one(tmp);
//	return count;
//}
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d\n", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n");
//	return 0;
//}

