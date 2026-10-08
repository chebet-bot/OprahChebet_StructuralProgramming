// Task 1: Simple Calculator
#include <stdio.h>

int main() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("Sum: %.2f\n", a + b);
    printf("Difference: %.2f\n", a - b);
    printf("Product: %.2f\n", a * b);
    if (b != 0) {
        printf("Quotient: %.2f\n", a / b);
        printf("Modulus: %d\n", (int)a % (int)b);
    } else {
        printf("Division/modulus by zero not allowed.\n");
    }
    return 0;
}
