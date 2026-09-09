#include <stdio.h>

//함수의 데이터 공유 방법

/* 값을 복사해서 전달하는 방법
void add_ten(int a);

int main(void){

    int a = 10;

    add_ten(a);
    printf("a: %d\n", a);

    return 0;
}

void add_ten(int a){
    a = a+10;
    return a;
}
*/

/*주소를 전달하는 방법
void add_ten(int *pa);

int main(void){
    int a = 10;

    add_ten(&a);
    printf("a: %d\n", a);

    return 0;
}

void add_ten(int *pa){
    *pa = *pa + 10;
}
*/

/*주소를 반환하는 함수*/
int *sum(int a, int b);

int main(void){
    int *resp;
    resp = sum(10,20);
    printf("두 정수의 합: %d\n", *resp);

    return 0;
}

int *sum(int a, int b){
    static int res;

    res = a+b;
    printf("res: %d\n", res);

    return &res;
}