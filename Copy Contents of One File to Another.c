#include <stdio.h>
int main() {
    FILE *source, *dest;
    char ch;
    source = fopen("file1.txt", "r");
    if (source == NULL) {
        printf("Source file not found.\n");
        return 1;
    }
    dest = fopen("file2.txt", "w");
    if (dest == NULL) {
        printf("Error creating destination file.\n");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    fclose(source);
    fclose(dest);
    printf("File copied successfully.\n");
    return 0;
}
