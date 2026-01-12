// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1

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
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}
