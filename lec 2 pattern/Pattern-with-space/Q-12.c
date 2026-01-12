//        *
//      * *
//    * * *
//  * * * *
//* * * * *
#include <stdio.h>

void main()
{
	int i, j, d;
	for (i = 1; i <= 5; i++)
	{
		for (d = 5; d > i; d--)
		{
			printf("  ");
		}
		for (j = i; j >= 1; j--)
		{
			printf("* ", j);
		}
		printf("\n");
	}
}
