// A B C D E
//   B C D E
//     C D E
//       D E
//         E

#include <stdio.h>

void main()
{
	char i, j;
	int d;

	for (i = 'A'; i <= 'E'; i++)
	{
		for (d = 'A'; d < i; d++)
		{
			printf("  ");
		}
		for (j = i; j <= 'E'; j++)
		{
			printf("%c ", j);
		}
		printf("\n");
	}
}
