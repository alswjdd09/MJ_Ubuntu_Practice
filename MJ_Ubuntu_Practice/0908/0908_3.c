#include <stdio.h>

//아스키 코드값과 문자 입출력 함수
int main(void){

    //대문자를 소문자로 변경하는 코드
    char small, capital;
    char cap = 'G';

    //유효한 값만 계산되도록 제한
    if((cap>='A') && (cap<='Z')){
        small = cap + ('a'-'A'); //(a 97) - (A 65) = 32의 값을 더해줘서 소문자 아스키 코드 값으로 변환.
    }

    printf("대문자: %c %c", cap, '\n');
    printf("소문자: %c", samll);

    return 0;
}