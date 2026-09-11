// 교재 연습문제
#include <stdio.h>
#include <stdlib.h>

// 성적 처리 프로그램
// 학생 수와 과목 수를 입력받아서
// 학생들의 점수를 입력받고
// 총점, 평균, 학점을 구한 후 총점 순으로 정렬

typedef struct student
{
    double avg;
    int total;
    char name[10];
    int *score;        // 과목별 점수를 저장할 공간
    char grade;
} Stu;


// 함수 선언
void input_score(Stu s[], int stuSize, int subNum);
void calc(Stu s[], int stuSize, int subNum);
void sort(Stu s[], int stuSize);
void print_score(Stu s[], int stuSize, int subNum, char subjects[][30]);


// main
int main(void)
{
    // 학생 수 입력
    int stuNum = 0;

    printf("몇 명의 학생? ");
    scanf("%d", &stuNum);

    Stu s[stuNum];

    // 과목 수 입력
    int subNum = 0;

    printf("몇 개의 과목? ");
    scanf("%d", &subNum);


    // 과목 이름 저장
    char subjects[subNum][30];

    for(int i = 0; i < subNum; i++){
        printf("%d번째 과목 이름? ", i + 1);
        scanf("%29s", subjects[i]);
    }


    // 학생마다 과목 수만큼 점수 저장 공간 만들기
    for(int i = 0; i < stuNum; i++){
        s[i].score = malloc(sizeof(int) * subNum);
    }


    // 입력 → 계산 → 정렬 → 출력
    input_score(s, stuNum, subNum);
    calc(s, stuNum, subNum);
    sort(s, stuNum);
    print_score(s, stuNum, subNum, subjects);


    // malloc으로 만든 공간 반납
    for(int i = 0; i < stuNum; i++){
        free(s[i].score);
    }


    return 0;
}


// 학생 정보 및 점수 입력
void input_score(Stu s[], int stuSize, int subNum){
    for(int i = 0; i < stuSize; i++){
        printf("\n%d번 학생의 이름: ", i + 1);
        scanf("%9s", s[i].name);

        for(int j = 0; j < subNum; j++){
            printf("%s 점수: ", ""); 
            scanf("%d", &s[i].score[j]);
        }
    }
}


// 총점, 평균, 학점 계산
void calc(Stu s[], int stuSize, int subNum){
    for(int i = 0; i < stuSize; i++){
        s[i].total = 0;

        // 과목별 점수를 모두 더함
        for(int j = 0; j < subNum; j++){
            s[i].total += s[i].score[j];
        }

        // 평균
        s[i].avg = (double)s[i].total / subNum;


        // 학점
        if(s[i].avg >= 90){
            s[i].grade = 'A';
        }else if(s[i].avg >= 80){
            s[i].grade = 'B';
        }else if(s[i].avg >= 70){
            s[i].grade = 'C';
        }else{
            s[i].grade = 'F';
        }
    }
}


// 총점 기준 내림차순 정렬
void sort(Stu s[], int stuSize)
{
    Stu temp;

    for(int i = 0; i < stuSize - 1; i++){
        for(int j = i + 1; j < stuSize; j++){
            if(s[i].total < s[j].total){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}


// 결과 출력
void print_score(Stu s[], int stuSize, int subNum, char subjects[][30])
{
    printf("\n========================================================\n");
    printf("이름\t");

    for(int j = 0; j < subNum; j++){
        printf("%s\t", subjects[j]);
    }

    printf("총점\t평균\t학점\n");
    printf("========================================================\n");

    for(int i = 0; i < stuSize; i++){
        printf("%s\t", s[i].name);

        for(int j = 0; j < subNum; j++){
            printf("%d\t", s[i].score[j]);
        }

        printf("%d\t%.1f\t%c\n", s[i].total, s[i].avg, s[i].grade);
    }
}