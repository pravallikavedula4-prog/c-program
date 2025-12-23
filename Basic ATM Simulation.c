#include <stdio.h>
int main() {
    int pin = 1234, enteredPin, option;
    double balance = 5000.0, amount;
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);
    if(enteredPin != pin) {
        printf("Incorrect PIN.\n");
        return 1;
    }
    printf("ATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\nChoose option: ");
    scanf("%d", &option);
    switch(option) {
        case 1:
            printf("Your balance: %.2lf\n", balance);
            break;
        case 2:
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);
            balance += amount;
            printf("Updated balance: %.2lf\n", balance);
            break;
        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);
            if(amount > balance) {
                printf("Insufficient balance.\n");
            } else {
                balance -= amount;
                printf("Updated balance: %.2lf\n", balance);
            }
            break;
        default:
            printf("Invalid option.\n");
    }
    return 0;
}
