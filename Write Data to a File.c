#include <stdio.h>
int main() {
    FILE *fp;
    char str[100];
    fp = fopen("file1.txt", "w"); 
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter text to write to file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(fp, "%s", str);
    fclose(fp);
    printf("Data written to file successfully.\n");
    return 0;
}
