#include <stdio.h>

//배터리 잔량 히스테리시스 경보 시스템

//경고 시작 임계값: 30%이하
//경고 해제 임계값: 35%이상
//경고가 한 번 켜지면 35% 이상으로 회복될 때까지 유지되도록 한다.
int main(void){

    //입력 조건
    double battery[100]; //배터리 잔량 로그 %
    int N = 10; //데이터 개수
    char warning[4] = "OFF"; //경고 메세지

    //배터리 입력 받기 
    for(int i=0; i<N; i++){
        printf("%d번째 잔량:  ", i+1);
        scanf("%lf",&battery[i]);
    }

    for(int i=0; i<N; i++){
        //배터리가 33이면 어떻게 될지 생각해보기
        //경고 표시
        if((warning=="OFF")&&(level<=30)){
            strcpy(warning, "ON"); 
            printf(">>on %s\n", warning);
        }else if(warning=="ON")&&(level>=35)){
            strcpy(warning, "OFF"); 
            printf(">>>>off %s\n", warning);
        }
    }

    printf("%2d번째→ 잔량: %5.1f%%  |  경고상태: %s\n", i + 1, battery[i], warning);

    return 0;
}