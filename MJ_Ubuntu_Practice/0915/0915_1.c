//지피티 예제 문제
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    FILE *fp; //파일 포인터 변수 선언
    char line[1000]; //줄 단위로 읽어들일 변수
    int infoCnt = 0, errorCnt = 0, warningCnt = 0; //카운트
    char date[20], currentTime[20];
    char **time = NULL;

    fp = fopen("/home/mj/Documents/robot_log_01.log","r"); //읽기 모드로 파일 불러오기
    if(fp == NULL){//파일 위치 찾지 못 하면 종료
        printf("파일을 읽지 못 했습니다.");
        return 1;
    }

    while(fgets(line, sizeof(line), fp) != NULL){//줄 단위로 잘라서 받아오기
        if(strstr(line,"[INFO]")!=NULL){
            infoCnt++;
        }else if(strstr(line,"[WARNING]")!=NULL){
            warningCnt++;
        }else if(strstr(line,"[ERROR]")!= NULL){
            //2차원 배열로 에러 발생 시간 저장
            sscanf(line, "%19s %19s",date, currentTime);
            time = realloc(time, (errorCnt+1) * sizeof(char *)); //이 부분은 다시 이해하기
            time[errorCnt] = malloc(strlen(currentTime)+1);
            if(time == NULL){
                printf("메모리 할당 실패\n");
                return 1;
            }
            strcpy(time[errorCnt], currentTime);
            errorCnt++;
        }
    }


    fclose(fp);

    //출력
    printf("INFO: %d\nWARNING: %d\nERROR: %d\n", infoCnt, warningCnt, errorCnt);
    printf(" -> 발생시간\n");
    for(int i=0; i<errorCnt; i++){
        printf("%10s\n", time[i]);
        free(time[i]);
    }
    free(time);

    return 0;
}