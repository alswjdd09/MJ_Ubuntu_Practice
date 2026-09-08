#include <stdio.h>

int main(void){

    int ch;

    printf("문자열을 한 번 입력해볼까요:");

    ch = getchar(); //사용자에게 문자 입력 받기
                    //문자열 하나의 값씩 저장하고 있다.

    //저장되어 있는 문자열 하나씩 출력해보기
    while(ch != '\n'){
        putchar(ch);
        putchar('\n');

        ch = getchar(); //이유 이해하기,,,,,,,,,,,,,,,,
    }

    return 0;
}