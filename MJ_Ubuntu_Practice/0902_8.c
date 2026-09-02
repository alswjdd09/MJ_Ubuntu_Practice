#include <stdio.h>

//unsigned 를 잘못 사용한 경우
int main(void){

    unsigned int a; //부호가 없는 정수 
                    //0~4,294,967,295까지의 정수를 표현할 수 있음
                    //%u로 표현

    a = 4294967295;
    printf("%d\n", a); //signed int
    a = -1;
    printf("%u\n", a); //unsigned int

    
    return 0;
}