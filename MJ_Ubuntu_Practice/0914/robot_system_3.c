//차동 구동 로봇 속도 계산
#include <stdio.h>

typedef struct WheelSpeed
{
    double left;
    double right;
}Wheel;

typedef struct RobotSpeed
{
    double linear;
    double angular;
}Robot;

struct RobotSpeed computeSpeed(Wheel w, double wheel_rad, double wheel_dis){
    Robot rs;

    rs.linear = (wheel_rad * (w.right + w.left)) / 2.0;
    rs.angular = (wheel_rad * (w.right - w.left)) / wheel_dis;

    return rs;
}

int main(void){
    Wheel ws;
    Robot rs;
    double radius, distance;

    printf("왼쪽 바퀴 속도: ");
    scanf("%lf", &ws.left);
    printf("오른쪽 바퀴 속도: ");
    scanf("%lf", &ws.right);
    printf("바퀴 반지름: ");
    scanf("%lf", &radius);
    printf("바퀴 간 거리: ");
    scanf("%lf", &distance);

    //속도 계산 함수 호출
    rs = computeSpeed(ws, radius, distance);

    printf("\n");
    printf("선속도: %.2f m/s\n", rs.linear);
    printf("각속도: %.2f rad/s\n", rs.angular);

    return 0;
}