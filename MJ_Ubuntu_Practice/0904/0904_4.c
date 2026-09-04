#include <stdio.h>

//배열
int main(void){
    int score[5];
    int i;
    int total = 0;
    double avg;

    for(i=0; i<5; i++){ //사용자에게 입력 받은 값을 score에 대입한다.
        scanf("%d",&score[i]);
    }

    for(i=0; i<5; i++){
        total += score[i];
    }

    //평균 값 구하기
    avg = total / 5.0;

    for(i=0; i<5; i++){
        printf("%5d\n", score[i]); //5개의 자리를 만든 후 숫자를 오른쪽부터 집어넣음.
    }

    printf("\n");
    printf("평균: %.1lf\n", avg);


    return 0;
}