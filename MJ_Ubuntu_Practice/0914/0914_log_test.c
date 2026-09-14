//log파일에서 에러, 경고 몇번 있었는지 출력하기
#include <stdio.h>
#include <string.h>

int main(void){

    FILE *rfp, *afp;
    int ch;
    int errorCnt = 0;
    int warningCnt = 0;

    //파일 읽어오기
    rfp = fopen("log.txt","r");
    if(rfp == NULL){
        printf("입력 파일을 열지 못 했습니다.\n");
        return 1;
    }

    //텍스트 추가하기
    afp = fopen("log.txt", "a");
    if(afp == NULL){
        printf("입력 파일을 열지 못 했습니다.\n");
        return 1;
    }

    while(1){
        ch = fgetc(rfp);
        if(ch == EOF){
            break;
        }
        if(strcmp(ch,"[ERROR]")==0){
            errorCnt++;
        }
        if(strcmp(ch,"[WARNING]")==0){
            warningCnt++;
        }
    }

    //strcat은 문자열과 문자열 비교하는 함수
    // strcat(ch,"[WARNING] 개수: ");
    // strcat(ch, errorCnt);
    // strcat(ch,"[WARNING] 개수: ");
    // strcat(ch, warnCnt);
    
    putchar(ch);
    fclose(rfp);

    return 0;
}