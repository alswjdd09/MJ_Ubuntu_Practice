#include <stdio.h>

//입력 버퍼 지우기
int main(void){

    int num, grade;

    printf("학번 입력: ");
    scanf("%d", &num);

    //문자 제거해줘야 함
    getchar(); //버퍼에 남아 있는 개행 문자 제거

    printf("학점 입력: ");
    grade = getchar();

    printf("학번: %d, 학점: %c", num, grade);

    return 0;
}