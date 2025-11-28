#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d is the largest.\n", a);
    } else if (b > a) {
        printf("%d is the largest.\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
