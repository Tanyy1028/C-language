//        A
//      A B
//    A B C
//  A B C D
// A B C D E

#include <stdio.h>

void main()
{
	char i, j;
	int d;
	for (i = 'A'; i <= 'E'; i++)
	{
		for (d = 'E'; d > i; d--)
		{
			printf("  ");
		}
		for (j = 'A'; j <= i; j++)
		{
			printf("%c ", j);
		}
		printf("\n");
	}
}
