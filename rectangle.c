#include <stdio.h>
int main() {
    float length, width, area;
   printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
   printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
   if (length < 0 || width < 0) {
        printf("Length and width cannot be negative.\n");
    } else {
        area = length * width;
        printf("Area of the rectangle = %.2f\n"
