//로봇 좌표 이동 함수
//PPR값 : 1024로 정의하여 계산(애매, 보류)
#include <stdio.h>

typedef struct robot_position{
    int x;
    int y;
}Position;

void move(Position *ps, int dx, int dy);

int main(void){

    //초깃값 위치 설정
    Position ps = {0,0};
    int x_move;
    int y_move;

    printf("x 이동값:");
    scanf("%d", &x_move);
    printf("y 이동값:");
    scanf("%d", &y_move);

    //이동
    move(&ps, x_move, y_move);

    printf("로봇 최종 위치: (%d, %d)\n", ps.x, ps.y);
    return 0;
}

void move(Position *ps, int dx, int dy){
    ps->x += dx;
    ps->y += dy;
}