#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int my_strlen(char* str) //Ҫ����ǳ��ȣ����Է��صĳ�����������������int
{

}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//arr�����飬���鴫��ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
	printf("len=%d\n,len");
	return 0;
}




//#include <stdio.h>
//void print(int n)//�����������Ҫ����ֵ 
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}




//#include <stdio.h>
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//



//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//
//

//#include <stdio.h>
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}//main����������three_line,three_line������new_line




////дһ��������ÿ���û�һ������������ͻὫnum��ֵ����1
//#include <stdio.h>
//void Add(int* p)//��Ϊ����������ָ�룬����Ҫ����ָ�������ܣ���ʱ*p������ߵ�num
//{
//	(*p)++;//����д*p+��++������p������*p������Ҫд(*p++)
//}
//int main()
//{
//	int num = 0;
//	Add(&num); //��Add�����ڲ�����1������Ҫ���ô�ַ����ʽ;�������ڲ���ı亯���ⲿ������ʱ��Ҫ����ַ��
//	printf("num =%d\n", num);
//	Add(&num);
//	printf("num =%d\n", num);
//	Add(&num);
//	printf("num =%d\n", num);
//	return 0;
//}