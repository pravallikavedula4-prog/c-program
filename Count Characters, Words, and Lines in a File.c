#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            words++;
        }
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words + 1, lines + 1);
    return 0;
}
