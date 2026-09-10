#include <stdio.h>

int main(void){

    //주소로 쓰이는 배열명과 배열의 주소 비교
    int ary[5];


    printf("%u\t \n", ary);
    printf("%u\t \n", &ary);
    printf("\n\n");
    printf("%u\t \n", ary +1); //배열 하나의 값 만큼 증가 +4
    printf("%u\t \n", &ary +1); //배열의 총 크기만큼 증가 +20


    return 0;
}