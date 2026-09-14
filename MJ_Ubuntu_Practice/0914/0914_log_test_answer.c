//log파일에서 에러, 경고 몇번 있었는지 출력하기
//+ [에러] 다음에 어떤 문구가 떴는지 가지고 오는 로직 짜보기(중복 없이 출력)
#include <stdio.h>
#include <string.h>

int main(void){

    FILE *rfp;
    char line[1024];
    int errorCnt = 0;
    int warningCnt = 0;

    //파일 읽어오기
    rfp = fopen("/home/mj/Documents/log.txt","r");
    if(rfp == NULL){
        printf("입력 파일을 열지 못 했습니다.\n");
        return 1;
    }

    while(fgets(line, sizeof(line), rfp) != NULL){
        if(strstr(line, "[ERROR]") != NULL){
            errorCnt++;
        }
        if(strstr(line, "[WARNING]") != NULL){
            warningCnt++;
        }
    }

    fclose(rfp);

    printf("============= 결과 =============\n");
    printf("[ERROR] 개수: %d\n", errorCnt);
    printf("[WARNING] 개수: %d\n", warningCnt);

    return 0;
}