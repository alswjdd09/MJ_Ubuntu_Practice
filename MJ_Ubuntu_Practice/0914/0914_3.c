//문자 출력 함수 fputc
//문자열을 한 문자씩 파일로 출력하기
#include <stdio.h>

int main(void){
    FILE *fp;
    char str[] = "min jeong file test";
    int i;

    //w : 파일 쓰기(기존 내용 삭제 후 생성)
    // fp = fopen("b.txt", "w");
    //a : 파일 내용 이어쓰기(기존 내용 유지 + 새로운 내용 추가)
    fp = fopen("b.txt", "a");

    if(fp == NULL){
        printf("파일이 열리지 않습니다.\n");
        return 1;
    }

    i = 0;
    while(str[i] != '\0'){
        fputc(str[i], fp);
        i++;
    }

    fputc('\n',fp);

    //열었으면 닫아
    fclose(fp);

    return 0;
}