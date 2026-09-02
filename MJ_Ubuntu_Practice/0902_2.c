#include <stdio.h>

//제어 문자 출력
int main(void){
    printf("Be happy\n");
    printf("1234567890\n");
    printf("My\tfriend\n");
    printf("Goot\bd\tchance\n"); // \b: 문자열 덮어쓰기 (t를 d로)
    printf("Cow\rW\a\n"); // \r: 맨 앞으로 이동 후 문자열 덮어쓰기 (C를 W로)



    return 0;
}