#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//난수 생성 및 초기화
int main(void){
    srand(time(NULL)); //난수 초기화

    //난수 생성
    // int num = rand();
    // printf("num >> %d\n", num);

    //제한된 범위 안에서 난수 생성
    int r1 = rand() % 10; //0~9
    int r2 = rand() % 100+1; //1~100
    int r3 = rand() % 21-10; //-10 ~ 10

    printf("0~9 랜덤: %d\n", r1);
    printf("1~100 랜덤: %d\n", r2);
    printf("-10~10 랜덤: %d\n", r3);

    return 0;
}