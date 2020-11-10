#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
typedef int ElemType;
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
