#include <stdio.h>

//포인터 *
int main(void){

    //개념 1
    // int a;
    // int *pa; //포인터 변수를 선언

    // pa = &a; //포인터 변수의 주소값에는 a의 주소값이 들어간다.
    // *pa = 10; //포인터 변수의 값을 10으로 정의한다.

    // printf("포인터로 a 값 출력: %d\n", *pa); //값을 출력
    // printf("포인터로 a 값의 주소값 출력: %d\n", pa); //주소값 출력
    // printf("변수명으로 a 값 출력: %d\n", a);

    //개념 2
    //여러 가지 포인터 사용해보기
    //그림 그리면서 한 번 해보기
    int a = 10;
    int b = 15;
    int total = 0;
    double avg;

    //포인터 변수 선언
    //포인트 변수들은 자료형에 상관 없이 무조건 8바이트
    int *pa, *pb; 
    int *pt = &total;
    double *pg = &avg;

    //값 대입
    pa = &a; //a의 주소값을 pa에 대입
    pb = &b;

    *pt = *pa + *pb; //pt의 값은 pa와 pb의 값을 더한 값
    *pg = *pt / 2.0;

    printf("두 정수의 값: %d, %d\n", *pa, *pb);
    printf("두 정수의 합: %d\n", *pt);
    printf("두 정수의 값: %.1lf\n", *pg);


    return 0;
}