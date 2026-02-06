// Write a C program that defines a function to print a reverse 1D array elements and print sum of all elements.

#include <stdio.h>

void reverseAndSum(int arr[], int n) {
    int sum = 0;

    printf("Reverse array:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }

    printf("\nSum = %d", sum);
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseAndSum(arr, n);
}

