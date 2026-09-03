#include <stdio.h>

//변수의 선언과 사용
int main(void){

    //선언
    int a;
    int b,c;
    double da;
    char ch;

    //값 대입
    a = 10;
    b = a;
    c = a+20;
    da = 3.5;
    ch = 'A';

    printf("변수 a의 값: %d\n", a);
    printf("변수 ch의 값: %c\n", ch);
    
    return 0;
}