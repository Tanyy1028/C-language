//        5
//      5 4
//    5 4 3
//  5 4 3 2
// 5 4 3 2 1

#include <stdio.h>

void main()
{
	int i, j, d;
	for (i = 5; i >= 1; i--)
	{
		for (d = i; d > 1; d--)
		{
			printf("  ");
		}
		for (j = 5; j >= i; j--)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}
