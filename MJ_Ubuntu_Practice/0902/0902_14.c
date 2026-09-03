#include <stdio.h>

//산술 연산자와 대입 연산자
int main(void){

    int a, b;
    int sum, sub,mul,inv;

    a = 10;
    b = 20;
    sum = a+b;
    sub = a-b;
    mul = a*b;
    inv = -a;

    printf("a: %d, b: %d\n", a, b);
    printf("sum: %d\n", sum);
    printf("sub: %d\n", sub);
    printf("mul: %d\n", mul);
    printf("inv: %d\n", inv);
    

    return 0;
}