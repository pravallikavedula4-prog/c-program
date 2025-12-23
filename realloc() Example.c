#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, new_n;
    int *ptr;
    printf("Enter initial number of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("Enter new size of array: ");
    scanf("%d", &new_n);
    ptr = (int*) realloc(ptr, new_n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }
    for(i = n; i < new_n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("Elements after realloc: ");
    for(i = 0; i < new_n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr); 
    return 0;
}
