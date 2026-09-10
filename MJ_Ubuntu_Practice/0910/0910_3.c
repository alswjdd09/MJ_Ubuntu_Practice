//함수 포인터를 사용한 함수 호출
//
// #include <stdio.h>
// int sum(int, int);

// int main(void){

//     int (*fp)(int, int);
//     int res;

//     fp = sum;
//     res = fp(10, 20);
//     printf("result: %d\n", res);

//     return 0;
// }

// int sum(int a, int b){
//     return (a+b);
// }


//함수 포인터로 원하는 함수를 호출하는 프로그램
//
#include <stdio.h>

void func(int (*fp)(int, int));

int sum(int, int);
int mul(int, int);
int max(int, int);


int main(void){

    int select;

    printf("어떤 연산을 선택하시겠어요?\n1. 덧셈\n2. 곱셈\n3. 최댓값");
    scanf("%d", &select);

    switch(select){
        case 1: func(sum); break;
        case 2: func(mul); break;
        case 3: func(max); break;
    }

    return 0;
}

void func(int (*fp)(int, int)){
    int a, b;
    int result;

    printf("두 값 입력:");
    scanf("%d%d", &a, &b);

    result = fp(a,b);
    printf("결과값: %d\n", result);
}

int sum(int a, int b){
    return a+b;
}

int mul(int a, int b){
    return a*b;
}

int max(int a, int b){
    if(a>b) return a;
    else return b;
}