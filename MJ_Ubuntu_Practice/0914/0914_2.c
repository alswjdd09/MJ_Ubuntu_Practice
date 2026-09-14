//파일 개방과 입출력
#include <stdio.h>

int main(void){
    FILE *fp;
    int ch;

    fp = fopen("a.txt", "r");

    if(fp == NULL){
        printf("파일이 열리지 않습니다.\n");
        return 1;
    }

    while(1){
        ch = fgetc(fp);

        if(ch == EOF){
            break;
        }

        putchar(ch);
    }

    //짧게 표현 가능
    // while((ch = fgetc(fp)) != EOF){
    //     putchar(ch);
    // }

    //열었으면 닫아
    fclose(fp);

    return 0;
}