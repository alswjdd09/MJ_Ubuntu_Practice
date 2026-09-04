#include <stdio.h>

//문자열을 저장하는 char형 배열
int main(void){

    char str[10] = "applejam";

    printf("최초 문자열: %s\n", str);

    //배열 안에 어떤 문자가 들어가있는지 확인하는 반복문
    for(int i=0; i<sizeof(str); i++){
        printf(">>%c<<", str[i]);
        printf("           1\n");
    }

    //str변수에 사용자가 입력한 문자열로 다시 대입
    printf("문자열 입력: ");
    scanf("%s", str);

    for(int i=0; i<sizeof(str); i++){
        printf(">>%c<<", str[i]);
        printf("           2\n");
    }
    
    printf("입력 후 문자열: %s\n", str);

    return 0;
}