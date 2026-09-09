#include <stdio.h>
#include <string.h>

//문자열을 대입하는 strcpy(), strncpy() 함수
int main(void){
    //strcpy(복사 받을 곳, 복사할 내용)
    //포인터와 변수를 활용
    // char str1[80] = "strawberry";
    // char str2[80] = "apple";
    // char *ps1 = "banana";
    // char *ps2 = str2;

    // printf("최초 문자열: %s\n", str1);
    // printf("strawberry 주소값: %p\n", str1);
    // printf("apple 주소값: %p\n", str2);

    // strcpy(str1, str2);
    // printf("바뀐 문자열: %s\n", str1);

    // strcpy(str1, ps1); //ps1 주소
    // printf("바뀐 문자열: %s\n", str1);

    // strcpy(str1, ps2);
    // printf("바뀐 문자열: %s\n", str1);

    // strcpy(str1, "banana"); //"banana" 주소
    // printf("바뀐 문자열: %s\n", str1);


    //strncpy(복사 받을 배열명, 복사할 문자열, 복사할 문자 수)
    char str[20] = "mango tree";
    
    strncpy(str, "apple-pie", 5); //apple-pie에서 앞에서 5개만 가지고 와서 기존 배열에 복사하기
    printf("%s\n", str);


    return 0;
}