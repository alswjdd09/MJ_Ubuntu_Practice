//typedef를 사용한 자료형 재정의
#include <stdio.h>

typedef struct student{
    int num;
    double grade;
} Student;

void print_data(Student *ps);

int main(void){
    Student s = {513, 4.2};
    print_data(&s);
    return 0;
}

void print_data(Student *ps){
    printf("학변: %d\n", ps -> num);
    printf("학점: %.1lf\n", ps -> grade);
}