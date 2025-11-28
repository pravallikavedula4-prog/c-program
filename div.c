#include <stdio.h>

int main() {
    float a, b, result;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    if (b != 0) {
        result = a / b;
        printf("Result = %.2f\n", result);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }

    return 0;
}
