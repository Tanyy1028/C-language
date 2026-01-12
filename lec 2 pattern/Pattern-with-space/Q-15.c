// A B C D E
//   A B C D
//     A B C
//       A B
//         A

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
		for (j = 'E'; j >= i; j--)
		{
			printf("%c ", j);
		}
		printf("\n");
	}
}
