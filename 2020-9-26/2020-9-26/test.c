#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		i++;
//		if (i == 5)
//		continue;
//		printf("%d\n",i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 9999)
//	{
//			printf("fuck! %d\n",i);
//			i++;
//    }
//	return 0;
//}
//int main()
//{
//	int day;
//	printf("����������:>");
// 	scanf("%d", &day);
// 	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//	}
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	printf("������һ����\n");
//	scanf("%d", &a);
//	b = a % 2;
//	if (b == 0)
//		printf("aΪż��");
//	else
//		printf("aΪ����");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i%2==1)
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
