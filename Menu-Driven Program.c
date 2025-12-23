#include <stdio.h>
int main() {
    int choice;
    double num1, num2, result;
    while(1) {
printf("\nMenu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nChoose an option: ");
        scanf("%d", &choice);
        if(choice == 5) {
            printf("Exiting program.\n");
            break;
        }
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        switch(choice) {
            case 1: result = num1 + num2; break;
            case 2: result = num1 - num2; break;
            case 3: result = num1 * num2; break;
            case 4: 
                if(num2 != 0) result = num1 / num2;
                else { printf("Cannot divide by zero.\n"); continue; }
                break;
            default: printf("Invalid option.\n"); continue;
        }
        printf("Result: %.2lf\n", result);
    }
    return 0;
}
