#define _CRT_SECURE_NO_DEPRECATE
//KiKi��֪����ѧ������ѧϰ�����BoBo��ʦ��������ѧ�ڹҵĿ�Ŀ�ۼƵ�ѧ�֣���������ѧ�֣��ж�KiKiѧϰ�����10�����ϣ���Σ��(Danger++)��4~9�֣�Σ��(Danger)��0~3:Good��
//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		if (score >= 10)
//		{
//			printf("Danger++");
//		}
//		else if ((score >= 4) && (score <= 9))
//		{
//			printf("Danger");
//		}
//		else
//		{
//			printf("Good");
//		}
//	}
//	return 0;
//}

//KiKi������վ���õ�HTTP״̬�룬������֪��ʲô���壬BoBo��ʦ����������HTTP״̬�룺200��OK�������ѳɹ�����202��Accepted���������ѽ������󣬵���δ������400��Bad Request������������󣩣�403��Forbidden������ֹ����404��Not Found������ʧ�ܣ���500��Internal Server Error���������ڲ����󣩣�502��Bad Gateway���������أ���
//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		if (score >= 10)
//		{
//			printf("Danger++");
//		}
//		else if ((score >= 4) && (score <= 9))
//		{
//			printf("Danger");
//		}
//		else
//		{
//			printf("Good");
//		}
//	}
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ��������ɵ�����������ͼ����
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//#include <stdio.h>
//int main()
//{
//	int score[7] = { 0 }, i = 0, sum = 0, max = 0, min = 100;
//	double aver = 0.0;
//	for (i = 0; i<7; i++)
//	{
//		scanf("%d ", &score[i]);
//		if (score[i]>max)
//			max = score[i];
//		if (score[i] < min)
//			min = score[i];
//			sum = sum + score[i];
//	}
//	aver = (sum - max - min) / 5.0;
//		printf("%.2lf", aver);
//	return 0;
//}


// ��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int m = 0;//Ҫ���������
//	//��������
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	//����
//	for (i = n; i>0; i--)
//	{
//		if (arr[i - 1]> m)
//		{
//			arr[i] = arr[i - 1];
//		}
//		else
//		{
//			arr[i] = m;
//			break;
//		}
//	}
//	//�����������С�����е�����
//	if (i == 0)
//	{
//		arr[i] = m;
//	}
//	//��ӡ
//	for (i = 0; i<n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}