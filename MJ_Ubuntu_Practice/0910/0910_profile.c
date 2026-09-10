#include <stdio.h>
#include <string.h>

//void 포인터 활용
void swap(char *type, void *a, void *b);

//프로필 교환 프로그램
int main(void){

    //2명의 나이와 키를 입력한 후 바꾸어 출력
    //나이와 키를 바꾸는 함수는 int 형과 double 형을 모두 교환할 수 있도록 하나의 함수로 구현
    //swap("int", &a, &b);
    //swap("double", &a, &b);

    int age_a, age_b;
    double height_a, height_b;
    
    printf("a 의 나이와 키를 입력하세요: ");
    scanf("%d %lf", &age_a, &height_a);

    printf("b 의 나이와 키를 입력하세요: ");
    scanf("%d %lf", &age_b, &height_b);
    
    //swap 함수 호출
    swap("int", &age_a, &age_b);
    swap("double", &height_a, &height_b);

    // 결과 출력
    printf("\n교환 후\n");
    printf("a의 정보 나이: %d, 키: %.1f\n", age_a, height_a);
    printf("b의 정보 나이: %d, 키: %.1f\n", age_b, height_b);


    return 0;
}


void swap(char *type, void *a, void *b){
    if(strcmp(type, "int")==0){
        int temp;

        temp = *(int *)a;
        *(int *)a = *(int *)b;
        *(int *)b = temp;
    }else if(strcmp(type, "double")==0){
        double temp;

        temp = *(double *) a;
        *(double *)a = *(double *)b;
        *(double *) b = temp;
    }
}