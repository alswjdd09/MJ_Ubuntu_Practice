#include <stdio.h>

//if의 활용
int main(void){

    int a = 10;

    //a가 0보다 크거나 같으면 1대입
    if(a >= 0){
        a = 1;
    }else{//0보다 작으면 -1대입
        a = -1;
    }

    printf("a: %d\n", a);


    return 0;
}