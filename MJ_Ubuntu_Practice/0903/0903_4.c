#include <stdio.h>
//switch case
int main(void){

    int rank = 0; //rank 
    int m = 0; //m

    printf("rank 입력: ");
    scanf("%d", &rank); //rank값 입력 후 변수에 대입

    printf("m 입력: "); 
    scanf("%d", &m); //m값 입력 후 변수에 대입

    printf("\n\n");

    if(rank >= 0 && m >= 0){
        // switch(rank){
        // case 1:
        //     m = 300;
        //     break;  //break가 없으면 모든 case 실행
        // case 2:
        //     m = 200;
        //     break;
        // case 3:
        //     m = 100;
        //     break;
        // default:
        //     m = 10;
        //     break;
        // }

        printf("rank 값: %d\n m 값: %d\n", rank, m);
    }else{
        printf("양수값을 입력해주세요.\n");
    }

    return 0;
}