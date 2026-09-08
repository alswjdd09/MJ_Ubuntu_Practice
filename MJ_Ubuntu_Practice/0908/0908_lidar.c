#include <stdio.h>

//라이다 센서 예제
//데이터 시트 확인하면서 개발하는 연습
int main(void){

    //알고리즘
    //dist[0]부터 dist[359]까지 반복
    //dist[i] < min 이면 min = dist[i] , min_index = i
    //반복 종료 후에 min은 최소 거리, min_index 는 최소 거리 방향

    double dist[360] = {}; //각도별 거리값 배열
    int min = 0;
    int min_index = 0;

    //거리 값 입력
    for(int i=0; i<10; i++){ //for(int i=0; i<360; i++){
        printf("%3d° 거리 값 입력(cm): ", i);
        scanf("%lf", &dist[i]);
    }

    //비교값 세팅
    min = dist[0]; //--> 비교할 값은 하나가 들어가있어야 함. 
                   // 사용자가 입력된 값들의 첫 번째 값으로 세팅

    for(int i=0; i<10; i++){ //for(int i=0; i<360; i++){
        if(dist[i] < min){
            min = dist[i];
            min_index = i;
        }
    }

    printf("---------라이다 최소 거리 탐색 결과------------");
    printf("가장 가까운 거리: %.1lf cm\n", min);
    printf("장애물 방향: %d\n", min_index);


    return 0;
}