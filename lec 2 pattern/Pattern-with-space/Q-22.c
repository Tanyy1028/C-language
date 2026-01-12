//- | - | -
//  - | - |
//    - | -
//      - |
//        -
#include <stdio.h>

void main()
{
	int i, j, d;
	for (i = 1; i <= 5; i++)
	{
		for (d = 1; d < i; d++)
		{
			printf("  ");
		}
		for (j = 5; j >= i; j--)
		{
			if (j % 2 != 0)
			{
				printf("- ");
			}
			else
			{
				printf("| ");
			}
		}
		printf("\n");
	}
}
