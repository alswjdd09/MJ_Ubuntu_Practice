#include <stdio.h>

int main(void){

    int a = 10;
    int b = 12;

    printf("a & b: %d\n", a & b); // and
    printf("a ^ b: %d\n", a ^ b); // xor
    printf("a || b: %d\n", a||b); //or
    printf("~a: %d\n", ~a); //not
    printf("a << 1: %d\n", a<<1); //shift 왼쪽으로  이동
    printf("a >> 2: %d\n", a<<2); //shift 오른쪽으로  이동

    return 0;
}