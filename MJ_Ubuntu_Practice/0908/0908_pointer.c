#include <stdio.h>

//예제 2 - swap 험수 선언
void swap(int *pa, int *pb);

//포인터를 이용한 변수 값 변경
int main(void){

    //pointer basic
    //------------------예제 1
    //정수 변수 a = 10; 후 포인터를 이용하여 a를 20으로 변경하는 프로그램
    // int a = 10;
    // int *pa; 

    // pa = &a; //pa에 a의 주소값 저장
    // *pa = 20; //값 변경

    // printf("포인터를 사용하기 전: %d\n", a);
    // printf("a의 주소: %d\n", &a);
    // printf("포인터를 사용하기 후: %d\n", *pa);
    

    //------------------예제 2
    //Call by Reference(주소를 전달)와 Call by Value(값만 전달)
    //정수 2개 입력 받아서 swap()함수 이용하여 두 변수 값 교환
    // int a = 0;
    // int b = 0;
    // int *pa;
    // int *pb;

    // //값 입력 받기
    // printf("a의 값: ");
    // scanf("%d", &a);
    // printf("b의 값: ");
    // scanf("%d", &b);

    // //입력 받은 값의 자리수를 포인터 변수에 할당
    // pa = &a;
    // pb = &b;

    // //값을 swap 하기 전 값
    // printf("before >> a: %d, b: %d \n", a, b);
    // //swap함수 실행
    // swap(pa, pb);
    // //값을 swap 한 후 
    // printf("after >> a: %d, b: %d \n", a, b);
    

    //------------------예제 3
    //포인터로 배열 요소 순회
    int ary[5] = {0};
    int *pary;

    for(int i=0; i<5; i++){
        printf("정수 5개를 입력하세요: ");
        scanf("%d", ary[i]);
    }

    //포인터 변수에 배열의 첫번쨰 주소값 대입
    pary = ary;

    for(int i=0; i<5; i++){
        printf("i번째 숫자: %d\n", i, pary[i] ); //같은 표현 연습하기
        printf("i번째 숫자: %d\n", i, *(pary + i) );
    }


    return 0;
}

//예제 2 - swap함수 정의
// void swap(int *pa, int *pb){
//     //변수 초기화
//     int temp = 0;

//     //값 교환
//         // printf("org  *pa: %d\n", *pa);
//         // printf("org  *pb: %d\n", *pb);
//         // printf("org  temp: %d\n", temp);
//     temp = *pa;
//         // printf("1    *pa: %d\n", *pa);
//         // printf("1    *pb: %d\n", *pb);
//         // printf("1    temp: %d\n", temp);
//     *pa = *pb;
//         // printf("2    *pa: %d\n", *pa);
//         // printf("2    *pb: %d\n", *pb);
//         // printf("2    temp: %d\n", temp);
//     *pb = temp;
//         // printf("3    *pa: %d\n", *pa);
//         // printf("3    *pb: %d\n", *pb);
//         // printf("3    temp: %d\n", temp);
// }