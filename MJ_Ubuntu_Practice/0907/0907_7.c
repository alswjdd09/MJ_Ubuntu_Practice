#include <stdio.h>
//허용되지 않는 포인터의 대입
int main(void){

    int a = 10;
    int *p = &a;
    double *pd;

    //pd = p;
    //p는 원래 int 이지만 에러 발생 없이 계산하기 위해 형변환 사용
    pd = (double *)p;
    printf("%lf\n", *pd);


    return 0;
}