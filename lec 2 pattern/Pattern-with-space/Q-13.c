//        A
//      B A
//    C B A
//  D C B A
// E D C B A

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
		for (j = i; j >= 'A'; j--)
		{
			printf("%c ", j);
		}
		printf("\n");
	}
}
