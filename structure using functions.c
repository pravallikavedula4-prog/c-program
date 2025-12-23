#include <stdio.h>
struct Student {
    int roll;
    char name[20];
};
void display(struct Student s) {
    printf("\nRoll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
}
int main() {
    struct Student s;
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    display(s);
    return 0;
}
