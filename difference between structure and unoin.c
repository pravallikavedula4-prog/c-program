#include <stdio.h>
struct SampleStruct {
    int a;
    float b;
};
union SampleUnion {
    int a;
    float b;
};
int main() {
    struct SampleStruct s;
    union SampleUnion u;
    printf("Size of structure: %lu\n", sizeof(s));
    printf("Size of union: %lu\n", sizeof(u));
    return 0;
}
