//센서값 정규화 실습 예제
#include <stdio.h>

double map(double val, double inMin, double inMax, double outMin, double outMax);
double normalize(double sensor[], double norm[], int count, double inMin, double inMax, double outMin, double outMax);

int main(void){

    double sensor[5] = {0};
    double norm[5] = {0};

    double inMin, inMax;
    double outMin, outMax;

    double *input;
    double *output;

    double result;
    int i;

    printf("센서 입력값 5개: ");
    for(i=0; i<5; i++){
        scanf("%lf",&sensor[i]);
    }
    printf("입력 범위: ");
    scanf("%lf%lf", &inMin, &inMax);
    printf("출력 범위: ");
    scanf("%lf%lf", &outMin, &outMax);
    
    //전체 정규화 함수
    normalize(sensor, norm, 5, inMin, inMax, outMin, outMax);

    printf("---------정규화 결과---------\n");
    for(i=0; i<5; i++){
        printf("%d번째 센서값 %.1f -> 정규화 %.1lf\n", i+1, sensor[i], norm[i]);
    }

    return 0;
}

//배열 전체를 정규화 하는 함수
double normalize(double sensor[], double norm[], int count, double inMin, double inMax, double outMin, double outMax){
    for(int i=0; i<count; i++){
        norm[i] = map(sensor[i], inMin, inMax, outMin, outMax);
    }
}

//512 -> 50.0 으로 변환하는 함수
double map(double val, double inMin, double inMax, double outMin, double outMax){
    double ratio = (val - inMin) / (inMax - inMin);
    double result = outMin + ratio * (outMax-outMin);

    return result;
} 