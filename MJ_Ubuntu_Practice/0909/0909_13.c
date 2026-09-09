#include <stdio.h>

//3차원 배열 [면][행][열]
int main(void){

    int a, b, c = 0;
    int i, j, k;

    printf("몇개의 반?: ");
    scanf("%d", &a);
    printf("학생 수?: ");
    scanf("%d", &b);
    printf("과목 수?: ");
    scanf("%d", &c);

    int score[a][b][c];
    
    for(i=0; i<a; i++){ //반 수만큼
        printf("%d 반 ", i+1);
        for(j=0; j<b; j++){ //학생 수만큼
            printf("%d번째 학생 ", j+1);
            printf("%d 과목의 점수를 각각 입력: ", c);
            
            for(k=0;k<c; k++){//과목 수만큼
                scanf("%d", &score[i][j][k]);
            }
        }
    }

    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            for(k=0; k<c; k++){
                printf("%5d", score[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}