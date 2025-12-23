#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("file1.txt", "r"); // open file in read mode
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }
    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
