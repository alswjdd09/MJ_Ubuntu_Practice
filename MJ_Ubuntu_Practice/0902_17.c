#include <stdio.h>

int main(void){

    int a=10, b=20, c=30;
    int res = 0;

    res = (a<=b);
    printf("a<=b: %d\n", res); //참이면 1

    res = (a>=b);
    printf("a<=b: %d\n", res); //거짓이면 0

    return 0;
}