#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int i;
	char arr1[] =  "2398444863" ;
	char arr2[] =  "0000000000" ;
	for (i = 1; i <= 3; i++)
	{
		printf("������ʮλ��������:>");
		scanf("%s", &arr2);
		if (strcmp(arr2, arr1)==0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		printf("�������\n");
	}
	return 0;
}




















//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	//welcom to bit!!!!
//	char arr1[] = "welcom to NanJing Agriculture University";
//	char arr2[] = "                                                                      ";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[1])-2;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//	    arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(5);//����
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}









//int main()
//{
//	int k ;
//	printf("������k:>");
//	scanf("%d", &k);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 16, 19, 25, 26, 30, 65, 92, 112, 159, 168, 199 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	int left = 0; //���±�
//	int right = sz - 1;//���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//		if (left>right)
//		{
//			printf("�Ҳ���\n");
//		}
//		return 0;
//}
