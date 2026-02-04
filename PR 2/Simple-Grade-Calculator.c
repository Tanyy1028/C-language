#include <stdio.h>

int main()
{
    int n, i, marks, total = 0;
    float percentage;
    char grade;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    printf("\n Enter marks out of 100: \n");
    for (i = 1; i <= n; i++)
    {
        printf("Subject %d: ", i);
        scanf("%d", &marks);
        total = total + marks;
    }

    percentage = total / (float)n;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\nResult\n");
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
