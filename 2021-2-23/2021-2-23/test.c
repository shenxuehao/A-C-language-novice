#define _CRT_SECURE_NO_DEPRECATE
//������2019�꣬KiKi��֪��1~2019���ж��ٸ���������9�������������ֵ�����ָ��ĳһλ�ǡ�9�����������硰2019������199���ȡ�
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0, count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		j = i;
//		while (j)
//		if (j % 10 == 9)
//		{
//			count++;
//			break;
//		}
//		else
//		{
//			j /= 10;
//		}
//		
//	}
//	printf("%d ", count);
//	return 0;
//}

//��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
//#include <stdio.h>
//int main()
//{
//	int n = 0, even = 0, odd = 0, i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			even++;
//		}
//		else
//		{
//			odd++;
//		}
//	}
//	printf("%d %d\n", odd, even);
//	return 0;
//}


//����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
//#include <stdio.h>
//int main()
//{
//	double max = 0.0, min = 100.0, aver = 0.0, tmp = 0.0,sum = 0.0;
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &tmp);
//		if (max < tmp)
//		{
//			max = tmp;
//		}
//		if (min > tmp)
//		{
//			min = tmp;
//		}
//		sum += tmp;
//		
//	}
//	printf("%.2f %.2f %.2f\n", max, min, sum / n);
//	return 0;
//}

//BMIָ��������������ָ�����������ع����������������ƽ���ó������֣�
//��Ŀǰ�����ϳ��õĺ����������ݳ̶��Լ��Ƿ񽡿���һ����׼��
//���磺һ���˵����Ϊ1.75�ף�����Ϊ68ǧ�ˣ�����BMI=68/(1.75^2)=22.2��ǧ��/��^2����
//��BMIָ��Ϊ18.5��23.9ʱ�������������ʾ������ڽ������ա�����ж����彡�������
//#include <stdio.h>
//int main()
//{
//	double height = 0, weight = 0;
//	scanf("%lf %lf", &height, &weight);
//	double bmi = weight / (height*height);
//	if ((bmi >= 18.5) && (bmi <= 23.9))
//	{
//		printf("Normal");
//	}
//	else
//	{
//		printf("Abnormal");
//	}
//	return 0;
//}



//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
//#include <stdio.h>
//int main()
//{
//	char arr[100] = { 0 };
//	int count_a = 0, count_b = 0;
//	char ch = 0;
//	while (((ch = getchar()) != '0') && (ch != EOF))
//	{
//		if (ch == 'A')
//		{
//			count_a++;
//		}
//		if (ch == 'B')
//		{
//			count_b++;
//		}
//		getchar();
//	}
//	if (count_a > count_b)
//	{
//		printf("A");
//	}
//	else if (count_a < count_b)
//	{
//		printf("B");
//	}
//	else
//	{
//		printf("E");
//	}
//	return 0;
//}


//��Ŀ�ж����������ݣ�ÿһ������������������Χ��1 ~231-1�����ÿո�ָ���
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a > b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//		else if (a < b)
//		{
//			printf("%d<%d\n", a, b);
//		}
//		else
//		{
//			printf("%d=%d\n", a, b);
//		}
//	}
//	return 0;
//}

//��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
//#include <stdio.h>
//int main()
//{
//	int n = 0, tmp = 0, i = 0, j = 0;
//	int arr[60] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &tmp);
//	for (i = 0; i < n; i++)
//	{
//		if ((arr[i]<tmp) && (arr[i + 1]>tmp))
//		{
//			for (j = n-1; j > i; j--)
//			{
//				arr[j+1] = arr[j];
//			}
//			arr[i + 1] = tmp;
//			break;
//		}
//		else if (tmp < arr[0])//���ȥ�ľ�����С��
//		{
//			for (j = n - 1; j >= 0; j--)
//			{
//				arr[j + 1] = arr[j];
//			}
//			arr[0] = tmp;
//		}
//		else if (tmp > arr[n - 1])//���ȥ��������
//		{
//			arr[n] = tmp;
//		}
//	}
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//�û���¼��վ��ͨ����Ҫע�ᣬһ����Ҫ�����������롣�����ж���������������Ƿ�һ�£�һ�������same������һ�������different��
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100] = { 0 };
	char s2[100] = { 0 };
	scanf("%s %s", s1, s2);
	if (strcmp(s1, s2) == 0)
	{
		printf("same\n");
	}
	else
	{
		printf("different\n");
	}
	return 0;
}