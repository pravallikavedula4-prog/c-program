#include <stdio.h>
int main() {
    char str[50];
    char *ptr;
    printf("Enter a string: ");
    gets(str);  
    ptr = str;   
    printf("String using pointer: ");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
