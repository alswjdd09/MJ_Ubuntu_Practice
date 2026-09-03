#include <stdio.h>
#include <math.h>

//이동 로봇의 최대 견인력과 등판 가능 경사각 구하기
int main(void){

    double m, Tm, G, eta, r, c, SF;
    int Nm;
    
    const double g = 9.81;


    printf("총 질량 m(kg): "); 
    if (scanf("%lf", &m) != 1) return 1;

    printf("모터 정격토크 Tm(N·m): "); 
    if (scanf("%lf", &Tm) != 1) return 1;

    printf("구동 모터 수 Nm: "); 
    if (scanf("%d", &Nm) != 1) return 1;

    printf("감속비 G: "); 
    if (scanf("%lf", &G) != 1) return 1;
    
    printf("구동 효율 eta(0~1): ");  
    if (scanf("%lf", &eta) != 1) return 1;

    printf("바퀴 반지름 r(m): ");   
    if (scanf("%lf", &r) != 1) return 1;

    printf("구름계수 c(예:0.1~0.2): "); 
    if (scanf("%lf", &c) != 1) return 1;

    printf("안전계수 SF(>=1): ");  
    if (scanf("%lf", &SF) != 1) return 1;

    //값 유효성 검사
    if (m<=0 || Tm<=0 || Nm<=0 || G<=0 || eta<=0 || eta>1 || r<=0 || c<0 || SF<1) {
        printf("입력값 범위를 확인하세요.\n");
        return 1;
    }

    // 계산
    double Ttot = Nm * Tm * G * eta;     
    double Favail = Ttot / r;              
    double mg = m * g;

    // 총 구동 토크 [N·m]
    // 가용 견인력 [N]
    // 등판 최대각 (안전계수 적용)
    double sin_theta = (Favail / SF - c * mg) / mg;
    
    //sin_theta 값을 0~1로 제한한다
    if (sin_theta < 0.0) {
        sin_theta = 0.0;
    }else if (sin_theta > 1.0) {
        sin_theta = 1.0;
    }
    
    double theta_rad = asin(sin_theta);
    double theta_deg = theta_rad * 180.0 / M_PI;
    double grade_pct = tan(theta_rad) * 100.0;
    
    // 결과 출력
    printf("\n[결과]\n");
    printf("총 구동 토크 T_tot   : %.2f N·m\n", Ttot);
    printf("가용 견인력 F_avail  : %.2f N\n", Favail);
    printf("등판 가능 최대각    : %.2f deg\n", theta_deg);
    printf("등판율(grade)       : %.1f %%\n", grade_pct);
    printf("(가정: 마찰한계 무시, 구름저항 c 포함, 안전계수 SF 적용)\n");


    return 0;
}