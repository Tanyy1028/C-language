//* * * * *
//  * * * *
//    * * *
//      * *
//        *
#include <stdio.h>

void main()
{
	int i, j, d;
	for (i = 5; i >= 1; i--)
	{
		for (d = i; d < 5; d++)
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
