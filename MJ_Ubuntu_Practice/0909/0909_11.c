#include <stdio.h>

//다차원 배열 - 2차원 배열
//학생 3명의 네과목 총점과 평균을 구하는 프로그램
// int main(void){

//     int score[3][4];
//     int total;
//     double avg;
//     int i, j;

//     for(i=0; i<3; i++){ //학생 수만큼
//         printf("4과목의 점수 입력: ");
//         for(j=0; j<4; j++){ //과목 수만큼
//             scanf("%d", &score[i][j]);
//         }
//     }

//     for(i=0; i<3; i++){
//         total = 0;
//         for(j=0; j<4; j++){
//             total = total + score[i][j];
//         }

//         avg = total / 4.0;
//         printf("총점: %d, 평균: %.2lf\n", total, avg);
//     }

//     return 0;
// }

//다른 방법으로 구현해보기
int main(void){

    int a, b = 0;
    int total;
    double avg;
    int i, j;

    printf("학생 수: ");
    scanf("%d", &a);

    printf("과목 수: ");
    scanf("%d", &b);

    int score[a][b]; //사용자에게 입력 받은 값이 정해지고 나서 배열을 받아야 한다.


    //다중 for문
    for(i=0; i<a; i++){ //학생 수만큼
        printf("%d 과목의 점수 입력: ", b);
        for(j=0; j<b; j++){ //과목 수만큼
            scanf("%d", &score[i][j]);
        }
    }

    for(i=0; i<a; i++){
        total = 0;
        for(j=0; j<b; j++){
            total = total + score[i][j];
        }

        avg = total / 4.0;
        printf("총점: %d, 평균: %.2lf\n", total, avg);
    }

    return 0;
}