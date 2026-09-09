#include <stdio.h>

//getchar 함수를 사용한 문자열 입력

//함수 선언
void my_gets(char *str, int size);

int main(void){

    char str[7];

    my_gets(str, sizeof(str));
    printf("입력한 문자열: %s\n", str);

    return 0;
}

//함수 정의
void my_gets(char *str, int size){
    int ch; //getchar()함수는 입력 받은 문자의 아스키 코드 값을 int형으로 받아옴
            //-> EOF를 처리하기 위해서
    
    //첫번째 문자 입력
    ch = getchar(); 
    int i = 0;

    while((ch != '\n') && (i<size -1)){ //배열의 크기만큼 입력한다.
        str[i] = ch;//입력한 문자를 배열에 저장
        i++;
        ch = getchar(); //새로운 문자열 입력
    }
    
    str[i] = '\0'; //입력된 문자열의 끝에 널 문자를 직접 넣어준다.
                   //널 문자를 직접 넣어주지 않으면 랜덤하게 쓰레기 값이 나온다.
}
