#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
void unionL(List *La, List Lb)//union ²¢¼¯
{
	int La_len, Lb_len, i;
	ElemType e;
	La_len = Listlength(*La);
	Lb_len = Listlength(*Lb);
	for (i = 1; i <= Lb_len; i++)
	{
		GetElem(Lb, i, &e); 
		if (!LocateElem(*La, e))
		{
			ListInsert(La, ++La_len, e);
		}
	}
}










//int main()
//{
//	//int ta[2][] = { { 0, 1, 2 }, { 3, 4, 5 } };
//	//int ta[][3] = { { 0, 1, 2 }, { 3, 4, 5 } };
//	//int ta[2][4] = { { 0, 1, 2 }, { 3, 4 }, { 5 } };
//	int ta[][3] = { { 0, 1, 2 }, {}, { 3, 4, 5 } };
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, };
//	int arr2[] = { 1, 2, 3, 4, 5, 6, };
//	//int arr3[] = ( 1, 2, 3, 4, 5, 6, );
//	int arr4[10] = { 0 };
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d", a);
//}