#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
void print(char* str)//print��������Ϊ�ص�����
{
	printf("hehe:%s",str);
}

void test(void(*p)(char*))//�������ֽ��յ��Ǻ��������֣��Ǿ��ǽ��պ����ĵ�ַ�����������дָ������һ��������ָ��
//��Print�����ĵ�ַ����pָ�룬��Ϊp�Ķ����Ǻ���ָ����������Դ�ź����ĵ�ַ��ָ��ָ��char*������void��Ҫ�õĻ�ֱ�ӽ����þ���(*p)("bit")��Ҳ���Բ������ã�pֱ��p("bit");ע��()�Ǻ������ò����������δ��˸��ַ�����ȥ�����ַ�ָ��char*���գ�*����д�ü���(*p),(**p),(***p)��*ֻ�ǰ��裬����ɾ��
{//��test�������ڲ�ͨ���������ĺ����ĵ�ַȥ������ָ��ĺ���
	printf("test\n");
	p("bit");//�ں����ڲ���ĳ�ֳ����µ�������������ú�����ͨ��pȥ�����������
}

int main()
{
	test(print);//��print�����ĵ�ַ���ݸ�test����
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
//	int(*pf)(int, int);//pf���Ǻ���ָ��
//	//����ָ������ֻҪ��pf����ӷ���[10]����int(*pf[10])(int, int)
//	//�����õ�һ��ָ���������ָ�룬ֻ��Ҫint(*(*pf)[10])(int, int)����pf�ĳ�(*pf)������
//	int(*p)[10]=&arr;//ȡ������ĵ�ַ:(*p)��ָ�룬ָ��int[10](����)
//	int(*pfArr[4])(int, int);//��ź�����ַ�����飬pfArr[4]�����飬��pfArr[4]ȥ����ʣ�����ľ������ͣ�������ָ�����飬(*pfArr[4])��ָ�룬ָ����Ǻ���(int, int)����������int
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//ȡ���������ĵ�ַ��ҲҪ��һ��ָ��ָ��������飬�ͽ�ָ����ָ�������ָ��
//	//(*ppfArr)˵��pfArr��һ��ָ�룬��(*ppfArr)��ϵ���[4]������*��������ָ�����顣ȥ��(*ppfArr)[4]����ʣ�����ͣ��������ĸ�Ԫ��ÿ��Ԫ�ص�������int(*)(int, int)���Ǻ���ָ��
//	//ppfArr��ָ�룬ָ��ָ����������ĸ�Ԫ�أ�ָ��������ÿ��Ԫ�ص�������һ������ָ��--int(*)(int, int)
//	//��ʵ����һ������ָ��
//	int(*(*ppfArr[4])[4])(int, int);
//	//���ָ����ָ�������ָ�������
//	return 0;
//}


//������
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
//int Xor(int x, int y)//���
//{
//	return x^y;
//}
//
//void Calc(int(*pf)(int, int))//int(*pfArr)(int, int)�Ǻ���ָ��
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n",(*pf)(x, y));//����pfָ��ĺ���
//}
//
//int main()
//{
//	int input = 0;
//	//int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };//Ҫ������ɸ������ĵ�ַ,int(*pfArr)(int, int)�Ǻ���ָ�룬int(*pfArr[4])(int, int)�Ǻ���ָ������
//	//0��Ӧ�±�0, Add��Ӧ�±�1, Sub��Ӧ�±�2, Mul��Ӧ�±�3, Div��Ӧ�±�4�����Բ�д�±ֱ꣬��дint(*pfArr[])(int, int)��
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����"); 
//		}
//		//if (input >= 1 && input <= 5)
//		//{
//		//	printf("����������������:>");
//		//	scanf("%d%d", &x, &y);
//		//	int ret = pfArr[input](x, y); //pfArr�ŵļ��������ĵ�ַ��inputǡ�ö�Ӧ����Ԫ�أ��ټ�(x,y)�����������
//		//	printf("%d\n", ret);
//		//}
//		//else if (input == 0)
//		//{
//		//	printf("�˳�\n");
//		//}
//		//else
//		//{
//		//	printf("ѡ�����\n");
//		//}
//	} while (input);
//	return 0;
//}


//���д�ö���䣬case��Խ��Խ�� 



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
//int Xor(int x, int y)//���
//{
//	return x^y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };//Ҫ������ɸ������ĵ�ַ,int(*pfArr)(int, int)�Ǻ���ָ�룬int(*pfArr[4])(int, int)�Ǻ���ָ������
//	//0��Ӧ�±�0, Add��Ӧ�±�1, Sub��Ӧ�±�2, Mul��Ӧ�±�3, Div��Ӧ�±�4�����Բ�д�±ֱ꣬��дint(*pfArr[])(int, int)��
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y); //pfArr�ŵļ��������ĵ�ַ��inputǡ�ö�Ӧ����Ԫ�أ��ټ�(x,y)�����������
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}
//
//		//switch (input)
//		//{
//		//case 1:
//		//	printf("����������������:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Add(x, y));
//		//	break;
//		//case 2:
//		//	printf("����������������:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Sub(x, y));
//		//	break;
//		//case 3:
//		//	printf("����������������:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Mul(x, y));
//		//	break;
//		//case 4:
//		//	printf("����������������:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Div(x, y));
//		//	break;
//		//case 0:
//		//	printf("�˳�����\n");
//		//	break;
//		//default:
//		//	printf("ѡ�����");
//		//}//���д�ö���䣬case��Խ��Խ�� 



//char*my_strcpy(char* dest, const char*src);
//1.дһ������ָ�� pf���ܹ�ָ��my_strcpy
//char*(*pf)(char*, const char*)//ָ����Ǻ�������Բ���ţ���������char*
//2��дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char*(*pfArr[4])(char*, const char*)
//char*(*)(char*, const char*)��ָ�룬ָ��������������Ϊchar*