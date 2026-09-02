#include <stdio.h>

//유효 숫자 확인하기
int main(void){

    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;

    printf("float형 변수 값: %.20f\n", ft);
    printf("double형 변수 값: %.20lf\n", db);


    return 0;
}