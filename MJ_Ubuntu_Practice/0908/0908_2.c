#include <stdio.h>

//배열에 값을 입력하는 함수

//함수 선언
void input_ary(double *pa, int size);
double find_max(double *pa, int size);

//main
int main(void){

    double ary[5];
    double max;
    int size = sizeof(ary) / sizeof(ary[0]); 

    //배열 값 세팅 함수 호출
    input_ary(ary, size);
    //최댓값 찾는 함수 호출
    max = find_max(ary, size);

    printf("배열의 최댓값: %.1lf\n", max);

    return 0;
}

//배열 입력하는 함수
void input_ary(double *pa, int size){
    int i;

    printf("%d개의 실수값 입력: ", size);

    for(int i=0; i<size; i++){
        scanf("%lf", pa+i); //입력 받은 숫자를 pa+i 자리에 배치
    }
}

//최댓값 반환해주는 함수
double find_max(double *pa, int size){

    double max;
    
    //비교할 값을 세팅(초기화)
    //pa값의 0번째 값
    max = pa[0];

    //반복문 돌리면서 값 비교하여 큰 값을 max 변수에 넣는다.
    for(int i=0; i<size; i++){
        if(pa[i]>max){
            max = pa[i]; //대입되어 있는 max의 값과 pa의 i번째 값 비교하기
        }
    }

    return max; 
}