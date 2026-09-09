#include <stdio.h>
#include <string.h>

//strcat 함수 직접 구현해보기
void my_strcat(char *str, char *dest);
//문자열 받아와서 정렬해주는 함수 구현해보기
void sorting_str(char *str1, char *str2);

//문자열 연산 함수
int main(void){
    //문자열을 붙이는 strcat(), strncat()
    // char str[80] = "straw";

    // strcat(str, "berry");
    // printf("%s\n", str);
    // strncat(str, "piece", 3);
    // printf("%s\n", str);

    //-------------------------------------------
    //strcat()함수 직접 구현해보기
    //초기화를 해야 하는 이유에 대해 직접 구현
    char str[80] = "straw";

    my_strcat(str, "berry");
    printf("%s\n", str);

    //-------------------------------------------
    //문자열 길이를 계산하는 strlen()함수 
    //해보기

    //-------------------------------------------
    //문자열 비교하는 strcmp(), strncmp() 함수
    // char str1[80] = "pear";
    // char str2[80] = "peach";

    // printf("사전에 나중에 나오는 단어: ");
    // if(strcmp(str1, str2) > 0){
    //     printf(">>>strcmp(str1, str2) > 0 %d\n", strcmp(str1, str2));
    //     printf("%s\n", str1);
    // }else{
    //     printf(">>>else %d\n", strcmp(str1, str2));
    //     printf("%s\n", str2);
    // }


    //-------------------------------------------
    //문자열 직접 입력 받아와서 소팅해보는 함수 직접 만들어보기
    // char str1[];
    //for문 작성
    // printf("입력 받을 문자열을 입력하세요: ");
    // scanf("%s", str[i]);


    return 0;
}

//문자열 받아와서 소팅하는 함수 구현해보기
void sorting_str(char *str1, char *str2){
    while (*str1 != '\0'){
        if(strcmp(*str1, *str2) > 0){
            printf(">>>strcmp(str1, str2) > 0 %d\n", strcmp(*str1, *str2));
            printf("%s\n", *str1);
        }else{
            printf(">>>else %d\n", strcmp(*str1, *str2));
            printf("%s\n", *str2);
        }
    }
}


//strcat 함수 구현해보기
void my_strcat(char *dest, char *str){

    // for(int i=0; i<sizeof(str); i++){
    //     if(str[i] == '\0'){
    //         printf(">>>>null ");
    //         str++; //카운트 증가해줘야 함
            
    //     }else{
    //         printf("%c", str[i]);
    //     }
    // }

    while(*dest != '\0'){
        printf(">>>dest: %d %c\n", *dest, dest);
        dest ++; //널 문자이면 증가해줘야 함
    }

    //str의 문자를 dest에 하나씩 복사한다.
    while(*str != '\0'){
        *dest = *str;

        dest++;
        str++;
    }

    *dest = '\0'; //마지막에 공백 넣어줘야 함
}