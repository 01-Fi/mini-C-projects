#include <stdio.h>
int factorial(int n);
int fibonacci(int n);
int sumOfDigits(int n);
int power(int base, int exp);

int main() {
    int choice, n, base, exp;
    do {
        printf("\n\t Recursion Toolkit\n");
        printf("\t-------------------\n");
        printf("1. Factorial\n");
        printf("2. Fibonacci\n");
        printf("3. Sum of Digits\n");
        printf("4. Power (base then exp)\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Factorial = %d\n", factorial(n));
                break;
            case 2:
                printf("Enter term number: ");
                scanf("%d", &n);
                printf("Fibonacci term = %d\n", fibonacci(n));
                break;
            case 3:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Sum of digits = %d\n", sumOfDigits(n));
                break;
            case 4:
                printf("Enter base and exponent: ");
                scanf("%d %d", &base, &exp);
                printf("Result = %d\n", power(base, exp));
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);
}

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

