#define _CRT_SECURE_NO_DEPRECATE
//дһ��������ʵ��һ��������������Ķ��ֲ��ң��ҵ��˷����±꣬�Ҳ�������-1
#include <stdio.h>
//F10����� //F11����� 
binary_search(int arr[], int k, int sz) //�β����ֿ��Ժ�ʵ����ͬ
{	//�㷨��ʵ�� 
	//�����ڴ��ε�ʱ�򣬴��Ĳ����������飬���Ǵ�������ĵ�һ��Ԫ�صĵ�ַ��
	//���ȫ������ȥ�Ļ�������ɿռ���˷�
	//�����ϣ������arr��һ��ָ�룬��ָ����32λϵͳ�е�ռ��4���ֽڣ�64λϵͳ��ռ��8���ֽڣ�
	//��arr[0]Ϊ��һ��Ԫ�أ�Ϊ���Σ���СҲ��4
	int left, right, mid, i;
	left = 0;
	right = sz - 1;
	while (left <= right) //left=right��ʱ��Ҳ���Ա�����
	{
		mid = (left + right) / 2;//��仰���ܷŵ����棬Ҫ��Ȼ�Ļ���ֻ����һ��   
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz); //binary_search��˼�Ƕ��ֲ��ң����ҽ��շ���ֵ
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n",ret);
	}//��д������ô�ã���д������ôʵ��
	return 0;
}


////��ӡ�����е�����
//#include <stdio.h>
//int is_leap_year(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//		return 1;
//}
//int main()
//{
//	int t,i;
//	int year;
//	int count = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		//printf("���������:>");
//		//scanf("%d", &year);
//		t = is_leap_year(year);
//		if (t == 1)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("�ܹ���%d��\n", count);
//	return 0;
//}






////дһ�����������ж�һ�����ǲ�������
//#include <stdio.h>
//#include <math.h>
//int is_prime(int x) //����������1 ������������0
//{
//	int i = 0;
//	for (i = 2; i < sqrt(x); i++)
//	{
//		if (x%i == 0)
//			return 0;
//	}
//	return 1;
//}
//		//if (x>i&&x%i == 0)
//		//	break;
//		//if (x == i)
//		//	return 1;
//int main()
//{
//	int a, t;
//	int k = 1;
//	do
//	{
//		printf("������һ����:>");
//		{
//			scanf("%d", &a);
//		}
//		t = is_prime(a);
//		if (t == 1)
//			printf("%dΪ����\n", a);
//		else
//		{
//			printf("%d��Ϊ����\n", a);
//		}
//		printf("������(1/0):>" );
//	again:
//		scanf("%d", &k);
//		if (k == 0)
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		if (k != 0&&k != 1)
//		{
//			printf("����������\n");
//			goto again;
//		}
//	} while (k==1);
//	return 0;
//}
