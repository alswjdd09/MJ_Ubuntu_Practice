#include <stdio.h>

//함수 선언
void auto_func();
void static_func();

//static 변수의 활용
int main(void){

    int i;

    printf("일반 지역 변수 사용한 함수\n");
    for(i=0; i<3; i++){
        auto_func();
    }

    printf("정적 지역 변수 사용한 함수\n");
    for(i=0; i<3; i++){
        static_func();
    }

    return 0;
}

//일반 지역 변수 사용 함수
void auto_func(){
    int a = 0;
    a++;
    printf("%d\n", a);
}

//정적 지역 변수 사용 함수
//static -> 저장 공간 유지
//프로그램의 시작부터 종료까지 저장 공간이 유지된다.
void static_func(){
    static int a; //자동으로 0으로 초기화 
    a++;
    printf("%d\n", a);
}