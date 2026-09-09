#include <stdio.h>

int main(void){
//다중 반복문을 사용하여 별 표시하기
// *   *
//  * *
//   * 
//  * *
// *   *

    int i, j, k;
    int num = 0;
    
    printf("몇줄로 표시? : ");
    scanf("%d", &num);

    // for(i=0; i<num; i++){
        // //i + j = (num-1)  *
        // for(j=0; (i+j)==(num-1); j++){
        //     printf("*");
        // }

        // //공백
        // for(j=0; j < num-1-i; j++){
        //     printf(" ");
        // }
        
        // //i==j  *
        // for(j=0; i==j; j++){
        //     printf("*");
        // }

        // printf("\n");        
    // }

    for(int i=0; i<num; i++){
        //i와 j가 동일할 때와 i+j=num일 때 출력
        for(int j=0; j<num; j++){
            if(i==j || (i+j==(num-1))){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}