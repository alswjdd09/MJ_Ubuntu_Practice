#include <stdio.h>
#include <string.h> //문자열 다룰 수 있는 헤어 파일 포함

int main(void){

    char fruit[20] = "strawberry"; //값 초기화


    printf("딸기: %s\n",fruit); //배열 변수
    printf("딸기잼: %s %s\n", fruit, "jam"); //배열 변수과 상수

    printf("%s\n", fruit);
    strcpy(fruit, "banana"); //string copy (문자열 복사)
    printf("%s\n", fruit);


    return 0;
}