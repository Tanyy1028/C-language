#include <stdio.h>

/* arithmetic functions */
float sum(float x, float y) {
    return x + y;
}

float difference(float x, float y) {
    return x - y;
}

float product(float x, float y) {
    return x * y;
}

float quotient(float x, float y) {
    return x / y;
}

int remainder(int x, int y) {
    return x % y;
}

void showMenu() {
    printf("\n--- Calculator Menu ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%) [Integers only]\n");
    printf("0. Exit\n");
}

int main() {
    int option;

    while (1) {
        showMenu();
        printf("Choose an option: ");
        scanf("%d", &option);

        if (option == 0) {
            printf("Program terminated.\n");
            break;
        }

        if (option == 5) {
            int a, b;
            printf("Enter first integer: ");
            scanf("%d", &a);
            printf("Enter second integer: ");
            scanf("%d", &b);

            if (b == 0) {
                printf("Error: Cannot perform modulus with zero.\n");
            } else {
                printf("Result: %d %% %d = %d\n", a, b, remainder(a, b));
            }
            continue;
        }

        float a, b;
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter second number: ");
        scanf("%f", &b);

        switch (option) {
            case 1:
                printf("Result: %.2f\n", sum(a, b));
                break;

            case 2:
                printf("Result: %.2f\n", difference(a, b));
                break;

            case 3:
                printf("Result: %.2f\n", product(a, b));
                break;

            case 4:
                if (b == 0)
                    printf("Error: Division by zero is not allowed.\n");
                else
                    printf("Result: %.2f\n", quotient(a, b));
                break;

            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}
