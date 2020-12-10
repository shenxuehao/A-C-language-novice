#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	struct S
//	{
//		char a : 3;
//		char b : 4;
//		char c : 5;
//		char d : 4;
//	};
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//#include <stdio.h>
//enum Sex//枚举类型
//{//枚举的可能类型
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	s = FEMALE;//不能赋其他值
//	return 0;
//}



//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//#include <stdio.h>
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

int main()
{
	union Un2
	{
		short c[7];
		int i;
	};
	printf("%d\n", sizeof(union Un2));
	return 0;
}

