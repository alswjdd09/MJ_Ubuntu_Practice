#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//로그에서 급가속/급제동 이벤트 카운트 프로그램

//배열을 이용하여 주행 데이터 저장하고
//반복문으로 이웃한 값의 차이 계산
//조건문으로 급가속과 급제동 이벤트를 카운트 한다.

//* 응용해보기
// -> 처음엔 위처럼 예제 그대로 적용하고 
//    그 다음에 rand() 적용해서 풀어보고 
//    그 다음에 2~4까지 적용해서 풀어보기
// 1 속도 입력 rand()
// 2 속도 방향성 10개 이상 유지
// 3 다음수는 +- 10 이내
// 4 급가속, 급제동 7km까지
int main(void){

    srand(time(NULL)); //랜덤 초기화

    double speedData[200]; //배열 데이터
    // int N = 0; //입력 받을 주행 로그 개수 
    int N = rand() % 10;  //-> 0부터 10 중 난수
    int delta = 0; //속도 변화량  v = v[i] - v[i-1]
    int accel = 0, brake = 0; //급제동 급가속 카운트 변수
    
    printf("*********%d번 주행합니다.*********\n", N);
    // printf("주행 로그 개수 입력: ");
    // scanf("%d", &N);
    
    //반복문
    //0~
    for(int i=0; i<N; i++){
        printf("%d번 속도: ", i+1);
        scanf("%lf", &speedData[i]);
    }

    //1~
    for(int i=1; i<N; i++){
        delta = speedData[i] - speedData[i-1];

        if(delta >= 10){
            printf(">>>>>>>>>%d번째 순서에서 accel\n", i);
            accel ++;
        }else if(delta <= -10){
            printf(">>%d번째 순서에서 brake\n", i);
            brake ++;
        }
    }

    //최종 출력
    printf("급가속 횟수: %d\n급제동 횟수: %d\n", accel, brake);

    return 0;
}