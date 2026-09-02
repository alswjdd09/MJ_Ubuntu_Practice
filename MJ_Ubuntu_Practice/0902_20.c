#include <stdio.h>

int main(void){

    int a = 10;
    double b = 3.4;

    printf("int size: %d\n", sizeof(a));
    printf("double size: %d\n", sizeof(b));
    printf("정수형 상수의 크기: %d\n",sizeof(10));
    printf("수식의 결과값의 크기: %d\n",sizeof(1/5+3.2));
    printf("char 자료형 상수의 크기: %d\n",sizeof(char));

    return 0;
}