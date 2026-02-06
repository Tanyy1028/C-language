//Implement a C program to simulate a simple calculator that performs addition, subtraction, multiplication, and division based on user input--

#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c is important

    switch(op) {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Error! Division by zero is not allowed.");
            break;

        default:
            printf("Invalid operator!");
    }

}

