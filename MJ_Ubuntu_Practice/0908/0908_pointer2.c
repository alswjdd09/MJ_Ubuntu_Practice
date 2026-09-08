#include <stdio.h>
#include <string.h>

//함수 선언
int my_text(char *str);

//포인터 다양하게 활용해보기
int main(void){

    //--------예제 4
    //strlen() 함수를 직접 구현해보기
    //'\0'이 나올 때까지 문자를 세는 함수
    char sentence[100]; //입력 받을 문자열 -> 문자열 최대 크기 지정
    int cnt = 0; //문자열의 개수를 입력할 변수
    char *str;

    printf("문자열을 입력하세요: ");
    scanf("%s", sentence); //scanf로 받아오는 값은 주소값을 가지고 들어감

    //포인터 변수에 대입
    str = sentence;

    //함수 사용해서 정답 확인하기
    printf("strlen() 문자열의 길이: %lu\n", strlen(sentence));

    //함수 호출
    cnt = my_text(str);
    printf("포인터 사용한 문자열의 길이: %d\n", cnt);

    return 0;
}

//함수 정의
int my_text(char *str){
    int cnt = 0;
    //for문 사용해서도 작성하는 방법 찾아보기
    while(*str != '\0'){
        //카운트 증가
        cnt++;
        //문자열 주소 이동
        str++;
    }
    return cnt;
}