#include <stdio.h>
#include <string.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[5];
    int n, i;
    printf("Enter number of students (max 5): ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}
