#include <stdio.h>

//scanf, gets, fgets함수의 활용과 차이점 이해하기
int main(void){
    //scanf()
    // char str[80];

    // printf("문자열 입력: ");
    // scanf("%s", str);
    // printf("첫 번째 단어: %s\n", str);
    // scanf("%s", str);
    // printf("버퍼에 남아 있는 두번째 단어: %s\n", str);
    
    

    //gets() -> 실무에서는 사용하지 않음
    // char str[80];

    // printf("공백이 포한된 문자열 입력: ");
    // gets(str);
    // printf("입력한 문자열: %s", str);



    //fgets() -> 문자열 입력 받을 때에는 fgets() 사용하자
    //마지막에 \0이 포함되어 있기 때문에 실무에서는 \0을 지우는 작업도 자주 사용한다.
    char str[80];

    printf("공백이 포한된 문자열 입력: ");
    fgets(str, sizeof(str), stdin);

    printf("입력된 문자열은 %s입니다. \n", str);


    return 0;
}