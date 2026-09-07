#include <stdio.h>

//IR센서 반사값 임계치 분류기
//함수 만들어서 사용해보기
//(진행중)
int main(void){
    
    double threshold; //기준점
    double black_count; //라인을 감지한 센서 개수
    double sum_index;
    double index_avg;
    double value[];
    double label[];
    int N = 0; //센서 개수

    printf("센서의 개수를 입력하세요: ");
    scanf("%d",&N);

    for(int i=0; i<(N-1); i++){

        //센서 감지 판별
        if(value[i]<threshold){
            label[i] = 1;
        }else(value[i]>=threshold){
            label[i] = 0;
        }

        //라인을 감지한 센서 개수
        black_count += label[i];
        printf("> black_count: %lf\n", black_count);

        //black_count가 0이면 나눗셈 불가능 -> 라인 없음 출력
        if(black_count != 0){
            //라인 중심 위치 계산
            sum_index = sum_index + (i*label[i]);
            index_avg = sum_index / black_count;

            printf(">>> sum_index: %lf\n", sum_index);
            printf(">>> index_avg: %lf\n", index_avg);
        }else{
            printf("*********라인 없음*********\n");
            label[i] = 0;
        }
    }

    return 0;
}