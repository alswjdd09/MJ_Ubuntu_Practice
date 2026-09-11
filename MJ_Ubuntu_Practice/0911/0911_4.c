#include <stdio.h>
//구조체의 멤버로 다른 구조체 사용하기
struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;
    int id;
    double grade;
    
};

int main(void){

    struct student st;

    st.pf.age = 17;
    st.pf.height = 164.5;
    st.id = 315;
    st.grade = 3.4;

    printf("나이: %d\n", st.pf.age);
    printf("키: %.1lf\n", st.pf.height);
    printf("학번: %d\n", st.id);
    printf("학점: %.1lf\n", st.grade);

    return 0;
}

