#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    printf("Frequency of each letter:\n");

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c => %d\n", i, freq[i]);
        }
    }

}

