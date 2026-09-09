#include <stdio.h>

//변수 사용 영역
int main(void){

    int a = 10; 
    int b = 20;

    // printf("a1 add: %p\n", a);
    printf("교환 전 a와 b의 값: %d, %d\n", a, b);

    {
        int temp;
        // int a;
        // printf("a2 add: %p\n", a); //위에서 선언된 a의 주소값과 다르게 나옴
        
        temp = a;
        a = b;
        b = temp;
    }

    printf("교환 후 a와 b의 값: %d, %d\n", a, b);

    return 0;
}