#include <stdio.h>
#include <stdlib.h>

//malloc, calloc, realloc
int main(void){

    //malloc
    // int *pi;
    // int i, sum =0;

    // //앞에 있는 (int*)가 영향 줌.
    // //뒤에 있는 sizeof(int))는 영향 없음.
    // pi = (int *)malloc(5*sizeof(int));

    // if(pi==NULL){
    //     printf("메모리가 부족합니다.\n");
    //     exit(1);
    // }

    // printf("다섯명의 나이를 입력하세요: ");
    // for(i=0; i<5; i++){
    //     scanf("%d", &pi[i]);
    //     sum += pi[i];
    // }

    // printf("다섯명의 평균 나이: %.1lf \n" , (sum/5.0));
    // free(pi);

    // return 0;


    //calloc realloc
    int *pi;
    int size = 5;
    int count = 0;
    int num ;
    int i;

    pi = (int *)calloc(size, sizeof(int)); //할당한 공간을 0으로 초기화
    
    while(1)
    {
        printf("양수만 입력하세요 ->");
        scanf("%d", &num);
        if(num<=0) break;

        if(count == size){
            size += 5;
            pi = (int *)realloc(pi, size*sizeof(int)); //자리를 늘리거나 줄이거나
        }
        pi[count++] = num;
    }

    for(i=0; i<count; i++){
        printf("%d", pi[i]);
    }

    free(pi);

    return 0;
}