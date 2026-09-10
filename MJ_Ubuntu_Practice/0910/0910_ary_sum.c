/*#include <stdio.h>

//가로 세로의 합 구하기
int main(void){
    //5행 6열 2차원 배열 선언 후 
    //4행 5열 부분은 1부터 20까지 초기화 한다.
    //초기화된 배열에서 마지막 열 요소는 각 행의 합을 저장
    //마지막 행의 요소에는 각 열의 합을 저장한 후 전체 배열의 값 출력

    //+ 포인터 배열 사용해서도 해보기


    int i, j;
    int cnt = 1;
    int total;
    int ary[5][6];


    //1부터 20까지 초기화
    for(i=0; i<4; i++){
        total = 0; //행의 합을 구하고 총 합을 초기화

        for(j=0; j<5; j++){
            ary[i][j] = cnt;
            // printf(">>> ary: %d\n",ary[i][j]);
            total += ary[i][j];
            cnt++;
        }
        ary[i][5] = total;
        // printf(">>> %d 행의 합: %d\n", i, ary[i][5]);       
    }

    //각 열의 total
    //*******여기부터 다시 한 번 더 해보기
    //잘못된 값 원인> i랑 j 순서가 바뀌어서 계산이 안 되고 있었던 것,,,,,,,,,,
    for(j=0; j<5; j++){
        total = 0; //열의 합도 매 열마다 초기화
        for(i=0; i<4; i++){
            total += ary[i][j];
        }
        ary[4][j] = total;
        // printf(">>>>%d \n", ary[4][j]);
    }
    
    total =0;

    //전체 합
    for(i=0; i<4; i++){
        total += ary[i][5];
        // printf(">>>>%d \n", ary[i][5]);
    }

    ary[4][5] = total;
    // printf(">>>>%d \n", total);

    //총 합 출력
    for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            printf("%5d", ary[i][j]);
        }
        printf("\n");
    }



    return 0;
}*/


//코드 줄이기 작업
#include <stdio.h>

int main(void){

    int i, j;
    int cnt = 1;
    int total;
    int ary[5][6]  = {0}; //쓰레기 값이 출력되지 않게 하기 위해 초기화


    //1부터 20까지 초기화
    for(i=0; i<4; i++){
        total = 0; //행의 합을 구하고 총 합을 초기화

        for(j=0; j<5; j++){
            ary[i][j] = cnt;
            total += ary[i][j];
            cnt++;
        }
        ary[i][5] = total;
    }

    //각 열의 total
    for(j=0; j<5; j++){
        total = 0; //열의 합도 매 열마다 초기화
        for(i=0; i<4; i++){
            total += ary[i][j];
        }
        ary[4][j] = total;
        ary[4][5] += total;
    }
    
    //총 합 출력
    for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            printf("%5d", ary[i][j]);
        }
        printf("\n");
    }



    return 0;
}