#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("%p\n", arr1);
//	printf("%p\n", arr1+1);
//	printf("%p\n", &arr1[0]);
//	printf("%p\n", &arr1[0]+1);
//	printf("%d\n", *arr1);//1
//	printf("%p\n", &arr1);//��������ĵ�ַ,���н����1��3һ��������1��3����Ԫ�صĵ�ַ ��2��4Ҳһ�� 
//	printf("%p\n", &arr1+1);//��ַ���������4*9=36
//	return 0;
//}





//#include <stdio.h>
//void bubble_sort(int arr[],int sz)//��������У�����Ҫʲô����ֵ
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//���豾��Ҫ����������Ѿ�������
//		int j = 0;
//		for (j = 0; j < sz-i-1; j++)//��i�˵�ʱ��Ҫ�Ƚ�sz-i-1��
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//Ҫ�����ˣ�˵�����������������ʵ���������
//			}
//		}
//		if (flag == 1)//�Ѿ������ˣ��������ˣ�ֱ������ȥ
//		{
//			break;//�˴�if����forѭ�����棬break������for
//		}
//		//ÿһ��ð������
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 6, 9, 5 };//��arr�ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]); //sizeof(arr[0]��4
//	bubble_sort(arr,sz);//ð�������� //arr����ַ���൱�ڴ���ȥ&arr[0]���β���ʵ�ε�һ����ʱ�������ٴ���һ���ռ���˷ѿռ�
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
//


//#include <stdio.h>
//int main()
//{
//	char arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i,j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("a[%d][%d]�ĵ�ַΪ%p\n",i ,j , &arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	//int arr[][] = { { 1, 2, 3 }, { 4, 5 } };//error 
//	//int arr[][] = {  1, 2, 3  4, 5  };//errar ȱ���±�
//	//int arr[3][] = { { 1, 2, 3 }, { 4, 5 } };//�в���ʡ��
//	int arr2[][4] = { { 1, 2, 3 }, { 4, 5 } };//�п���ʡ��
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	{
//		for (i = 0; i < sz; i++)
//		{
//			int* p = &arr1[i];	
//			printf("&arr[i]=%p\n", p);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";// [a][b][c][d][e][f][\0]//�������������sizeof����Ϊ�и�\0
//	//printf("%c\n", arr[3]);
//	for (i = 0; i < (int)strlen(arr); i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//	return 0;//a b c d e f ��\0�����ᱻ��ӡ����
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";//a b c \0
//	char arr2[] = { 'a', 'b' ,'c' };//ֻ��a b c
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//��Ϊ�Ҳ���\0���ͳ����˸�����
//	return 0;
//}//4 3 3 15
//
