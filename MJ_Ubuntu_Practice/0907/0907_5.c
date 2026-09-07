#include <stdio.h>

//const를 사용한 포인터
int main(void){

    int a = 10;
    int b = 20;
    const int *pa = &a; //const

    printf("변수 a값: %d\n", *pa);

    pa = &b;
    printf("변수 b값: %d\n", *pa);

    pa = &a;
    a = 20;
    printf("변수 a값: %d\n", *pa);


    //const 변수로 선언했기 때문에 이렇게 값을 간접 참조해서 변환할 수 없다.
    // *pa = 20;  --> 에러 발생


    return 0;
}