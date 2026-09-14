//로봇 배터리 상태 분석 시스템
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct robot{
    double battery[10];
    char status[30];
}Robot;

double calc_average(Robot *rb, int size);
void check_battery_status(Robot *rb, int size);

int main(void){
    Robot rb;
    int size = 5;

    printf("%d개의 배터리 전압 값 입력(10.0V ~ 13.0V): ", size);
    for(int i=0; i<size; i++){
        scanf("%lf", &rb.battery[i]);

        //입력 범위는 10.0~13.0으로 가정한다.
        if((rb.battery[i] < 10)||(rb.battery[i] > 13)){
            printf("-----[경고] 입력 범위는 10.0V 부터 13.0V입니다.\n");
            exit(1);
        }
    }

    //배터리 체크
    check_battery_status(&rb, size);

    return 0;
}

double calc_average(Robot *rb, int size){
    double sum =0;
    double avg;

    for(int i=0; i<size; i++){
        sum += rb->battery[i];
    }

    avg = sum/(double)size;

    return avg;
}

void check_battery_status(Robot *rb, int size){
    int lowBtrCnt = 0;
    char printMsg;
    double avg = calc_average(rb, size);

    for(int i=0; i<size; i++){
        if(rb->battery[i] < 11){
            lowBtrCnt++;
        }

        if(lowBtrCnt >= 3){
            strcmp(rb[i].status, "배터리 위험 - 충전 필요");
        }

        //평균 전압이 11.5 미만
        if(avg < 11.5){
            strcmp(rb[i].status, "배터리 저하 - 전력 절약 모드 권장");
        }
    }
}