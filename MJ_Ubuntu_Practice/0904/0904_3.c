#include <stdio.h>

//함수 선언
void fruit(int count);

//main 함수
//재귀호출 함수(본인 함수를 본인이 호출)
int main(void){
    fruit(1);
    return 0;
}

//fruit함수
void fruit(int count){
    printf("apple\n");

    if(count == 3){
        return;
    }

    fruit(count + 1); //fruit함수 재호출
    printf("jam\n");
}