#include <stdio.h>

int main(void){

    int a = 30;
    int res;

    res = (a>10) && (a<20); //좌항과 우항이 모두 참이면 참
    printf("(a>10)&&(a<20): %d\n", res);

    res = (a<10) || (a>20);
    printf("(a<10)||(a<20): %d\n", res);

    res = !(a>=30); //!은 결과를 반대로 만듦
    printf("!(a>=30):%d\n", res);

    return 0;
}