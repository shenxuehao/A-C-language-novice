#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int a, b, c, d ;
	int i = 0;
	for (a = 0; a <= 1; a++)
	{
		for (b = 0; b <= 1; b++)
		{
			for (c = 0; c <= 1; c++)
			{
				for (d = 0; d <= 1; d++)
				{
					for (i = 0; i < 5; i++)
					{
						if (((!((b != 1) || (d == 1))) + !((b != 1) || (c == 1)) + !((a != 1) || (b == 1)) + ((d != 1)) == i) && (a + b + c + d == 1))
						{
								if (a == 1)
								{
									printf("a������\n");
								}
								if (b == 1)
								{
									printf("b������\n");
								}
								if (c == 1)
								{
									printf("c������\n");
								}
								if (d == 1)
								{
									printf("d������\n");
								}
						}
					}
				}
			}
		}
	}
	
	
	return 0;
}