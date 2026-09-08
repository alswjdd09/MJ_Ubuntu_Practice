#include <stdio.h>

//포인터 뺄셈과 관계 연산 
int main(void){
    int ary[5] = {10, 20, 30, 40, 50};
    int *pa = ary; //첫번째 값의 주소값
    int *pb = pa + 3; //pa에는 첫번째 주소값이 있으니 그 주소값에 + 3

    printf("pa: %p %u\n", pa, pa);
    printf("pb: %p %u\n", pb, pb);

    pa++; //pa 증감 -> 주소값 이동
    printf("pb-pa: %u\n", pb-pa); //(값의 차)/sizeof(int) -> 8/4 -> 2

    printf("앞에 있는 배열 요소의 값 출력: ");
    if(pa < pb){
        printf("%d\n", *pa);
    }else{
        printf("%d\n", *pb);
    }


    //확인문제 2번에 나온 6가지의 활용 출력해보기
    // printf(">>>>확인문제 2-1: ary[5] \n", ary[5]);
    // printf(">>>>확인문제 2-2: ary++ \n", ary++);
    // printf(">>>>확인문제 2-3: ++(*ary) \n", ++(*ary));
    // printf(">>>>확인문제 2-4: pb[-2] \n", pb[-2]);
    // printf(">>>>확인문제 2-5: *(pb+3) \n", *(pb+3));
    // printf(">>>>확인문제 2-6: *(++pa) \n", *(++pa));

    return 0;
}