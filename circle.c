#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
    } else {
        area = PI * radius * radius;
        printf("Area of the circle = %.2f\n", area);
    }

    return 0;
}
