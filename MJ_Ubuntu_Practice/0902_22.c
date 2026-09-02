#include <stdio.h>

//조건 연산자
int main(void){

    int a = 10, b = 20, res;

    res = (a>b)?a:b; //(조건)?조건의 참:조건의 거짓 값을 반환하라는 의미
    printf("큰 값: %d\n", res);


    return 0;
}