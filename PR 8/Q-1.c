#include <stdio.h>

int main()
{
    char text[100];
    char *p;
    int length = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", text);   // accepts spaces also

    p = text;

    while (*p != '\0')   // loop till end of string
    {
        length++;
        p++;
    }

    printf("Length of the given string is: %d\n", length);

    return 0;
}
