#include <stdio.h>

//반복문 while for
int main(void){

    //while
    int a = 1;

    while(a < 1000){
        a = a * 2;
    }

    printf("a : %d\n", a);

    
    //for 
    int b = 0;

    for(int i=0; i<11; i++){
        b += i; //b = b + i
        printf("b : %d, i: %d\n", b, i);
    }

    printf(">>>>>>>b : %d\n", b);


    return 0;
}