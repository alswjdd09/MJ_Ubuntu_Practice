#include <stdio.h>

//sizeof 연산자를 사용하나 배열
int main(void){

    int score[5];
    int i;
    int total =0;
    double avg;
    int count;

    //배열의 크기를 파악하기 위한 변수 count
    count = sizeof(score) / sizeof(score[0]);

    for(i=0; i<count; i++){
        scanf("%d",&score[i] );
    }

    for(i=0; i<count; i++){
        total += score[i];
    }

    //평균 값 구하기
    avg = total / (double)count;

    for(i=0; i<count; i++){
        printf("%5d", score[i]);
    }

    printf("\n");
    printf("평균: %.1lf\n", avg);

    return 0;
}