// Write a C program to find cube of each elements of an 1D array using Pointer.

#include <stdio.h>

void cubeArray(int *ptr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        *ptr = (*ptr) * (*ptr) * (*ptr);  
        ptr++;                            
    }
}

int main()
{
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    cubeArray(arr, n);

    printf("Cube of array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

