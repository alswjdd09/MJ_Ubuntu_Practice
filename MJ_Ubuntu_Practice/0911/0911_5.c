#include <stdio.h>

struct vision{
    double left;
    double right;
};

//리턴하는 값과 매개변수로 받는 형이 구조체인 경우
struct vision exchange (struct vision robot);

int main(void){
    struct vision robot;

    printf("시력 입력: ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    
    //함수 호출
    robot = exchange(robot);
    
    printf("바뀐 시력: %.1lf %.1lf\n", robot.left, robot.right);
    
    return 0;
}

struct vision exchange(struct vision robot){
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}
