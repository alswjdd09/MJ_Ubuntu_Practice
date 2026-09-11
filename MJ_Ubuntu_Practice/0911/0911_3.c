//구조체
#include <stdio.h>

//구조체 선언
struct student
{
    //구조체 멤버
    int num;
    double grade;

    //패딩 바이트 때문에 자료형을 어떤 순서로 선언하냐에 따라 사이즈가 달라진다
    // char ch1;
    // char ch2;
    // char ch3;
    // short num;
    // int score ;
    // double grade;
};


int main(void){

    struct student s;

    // printf(">>%d\n", sizeof(s));
    s.num = 2;
    s.grade = 2.7;

    printf("학번: %d\n", s.num);
    printf("학점: %.1lf\n", s.grade);

    return 0;
}