//malloc() , free 함수
//동적 할단 함수
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int)); //malloc

    if(pi ==NULL){
        printf("메모리 부족\n");
        exit(1);
    }

    pd = (double *) malloc(sizeof(double));

    *pi = 10; //포인터로 동적 할당 영역 사용
    *pd = 3.4;

    printf("정수형: %d\n", *pi); //동적 할당 영역에 저장된 값을 출력
    printf("실수형: %.1lf\n", *pd);

    
    free(pi);//동적 할당 영역 반환
    free(pd);

    return 0;
}
