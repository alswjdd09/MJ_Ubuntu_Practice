#include <stdio.h>

//버퍼와 scanf
int main(void){

    char ch;

    for(int i=0; i<3; i++){ //3번 반복
        scanf("%c", &ch); //tiger 입력 -> 버퍼에 t i g e r 쌓임(자리 없음)
        printf("%c\n",ch);//c 자료형 즉, 버퍼에 남아 있는 문자를 하나씩 읽어오기 때문에 추가 입력 없이 계속 출력
    }

    printf("\n");

    return 0;
}