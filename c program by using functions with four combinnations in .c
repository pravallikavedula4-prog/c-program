#include <stdio.h>
void add1() {
    int a = 10, b = 20;
    printf("1) Sum (no args, no return): %d\n", a + b);
}
void add2(int a, int b) {
    printf("2) Sum (args, no return): %d\n", a + b);
}
int add3() {
    int a = 30, b = 40;
    return a + b;
}
int add4(int a, int b) {
    return a + b;
}
int main() {
    int result;
    add1();                
    add2(5, 15);           
    result = add3();        
    printf("3) Sum (no args, return): %d\n", result);
    result = add4(25, 35);   
    printf("4) Sum (args, return): %d\n", result);
    return 0;
}
