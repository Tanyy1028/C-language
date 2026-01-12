//        1
//      2 2
//    3 3 3
//  4 4 4 4
// 5 5 5 5 5

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
			printf("%d ", i);
		}
		printf("\n");
	}
}
