#include <stdio.h>
struct Student {
    int roll;
    char name[20];
};
int main() {
    struct Student s[3];
    int i;
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
    }
    printf("\nStudent List:\n");
    for(i = 0; i < 3; i++) {
        printf("Roll: %d, Name: %s\n", s[i].roll, s[i].name);
    }
    return 0;
}
