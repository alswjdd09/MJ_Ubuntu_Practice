//교재 연습문제
#include <stdio.h>

//성적 처리 프로그램
//학생 5명의 국, 영, 수 점수 입력 받아서
//총점, 평균, 학점 구하고 총점 순으로 정렬
//학점은 평균 90이상이면 A, 80이상이면 B, 70이상이면 C, 나머지는 F
typedef struct student
{
    char name[10];
    int kr;
    int en;
    int mt;
    int total;
    double avg;
    char grade;
}Stu;

//함수 선언
void input_score(Stu s[], int stuSize);
void calc(Stu s[], int stuSize);
void sort(Stu s[], int stuSize);
void print_score(Stu s[], int stuSize);

//main
int main(void){
    Stu s[5];
    int stuSize = sizeof(s)/sizeof(s[0]);

    input_score(s, stuSize);    
    calc(s, stuSize);    
    sort(s, stuSize);    
    print_score(s, stuSize);   

    return 0;
}

void input_score(Stu s[], int stuSize){
    for(int i=0; i<stuSize; i++){
        printf("학생의 이름을 입력하세요.");
        scanf("%9s", s[i].name);

        printf("국어 영어 수학: ");
        scanf(" %d%d%d", &s[i].kr, &s[i].en, &s[i].mt);
    }
}

void calc(Stu s[], int stuSize){
    for(int i=0; i<stuSize; i++){
        s[i].total = s[i].kr + s[i].en + s[i].mt;
        s[i].avg = s[i].total/3.0;

        // printf(">>>s[%d].avg %.2lf\n",i, s[i].avg);

        if(s[i].avg >= 90){
            s[i].grade = 'A';
        }else if(s[i].avg >= 80 && s[i].avg < 90){
            s[i].grade = 'B';
        }else if(s[i].avg >= 70 && s[i].avg < 80){
            s[i].grade = 'C';
        }else{
            s[i].grade = 'F';
        }
    }
}

void sort(Stu s[], int stuSize){
    int max = s[0].total;
    for(int i=0; i<stuSize; i++){
        if(max<s[i].total){
            max = s[i].total;
        }
    }
}

void print_score(Stu s[], int stuSize){
    for(int i=0; i<stuSize; i++){
        printf("%10s %5d %5d %5d %5d %.1lf %5c\n", s[i].name, s[i].kr, s[i].en, s[i].mt, s[i].total, s[i].avg, s[i].grade);
    }
}