#include <stdio.h>

//편리하지만 위험함,,,,,
//gets, puts
int main(void){

    char str[10];

    printf("문자열 입력: ");

    //gets, fgets -> fgets가 더 안전함.
    //개행 문자도 받아들임(띄어쓰기)
    //gets(str); //빈칸을 포함한 문자열 입력할 수 있다.
    //gets를 실행했을 때 다양한 에러를 일으킬 수 있기 때문에
    //보다 안전하게 사용하게 위해 fgets 함수를 사용한다.
    fgets(str, sizeof(str), stdin);

    //puts
    puts("입력된 문자열: "); //문자열 상수 출력
    puts(str); //배열에 저장된 문자열 출력


    return 0;
}