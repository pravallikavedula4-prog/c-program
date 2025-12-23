#include <stdio.h>
int main() {
    FILE *fp;
    char str[100];
    fp = fopen("file1.txt", "a"); 
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter text to append: ");
    fgets(str, sizeof(str), stdin);
    fprintf(fp, "%s", str);
    fclose(fp);
    printf("Data appended successfully.\n");
    return 0;
}
