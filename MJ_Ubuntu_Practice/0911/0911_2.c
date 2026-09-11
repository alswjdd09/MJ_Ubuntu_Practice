#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//3개의 문자열을 저장하기 위한 동적 할당
int main(void){

    char temp[80];
    char *str[3];
    int i;

    for(i=0; i<3; i++){
        printf("문자열 입력: ");
        fgets(temp, sizeof(temp), stdin);
        str[i] = (char *)malloc(strlen(temp) +1); //+1 널문자까지 계산
        // str[i] = calloc(strlen(temp) +1, sizeof(char));
        // str[i] = realloc

        //메모리 자리 확인 
        if(str[i] == NULL){
            printf("메모리 부족!\n");
            exit(1);
        }

        strcpy(str[i], temp);
    }

    for(i=0; i<3; i++){
        printf("%s\n", str[i]);
    }

    for(i=0; i<3; i++){
        free(str[i]);
    }

    return 0;
}