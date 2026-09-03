#include <stdio.h>

int main(void){

    double I_load, vel, R, V, C, eta;
    
    //소비전력(W)
    const double P = (V * I_load) / eta;
    //사용 가능 에너지(Wh)
    const double E_usable = V * C * eta * (1.0 - R); 
    //런타임 계산 (h)
    const double t_h = E_usable / P;
    const double t_min = t_h * 60.0;
    //주행거리 계산 (km)
    const double d_km = vel * t_h;

    //배터리 사양 및 환경정보 입력
    printf("평균전류 I_load [A] (부하측): ");  
    if (scanf("%lf", &I_load)!=1) 
        return 1;

    printf("평균속도 vel [km/h] : ");        
    if (scanf("%lf", &vel)!=1) 
        return 1;
    printf("예비율 R : ");      
    if (scanf("%lf", &R)!=1) 
        return 1;
    printf("공칭전압 V [V] : "); 
    if (scanf("%lf", &V)!=1) 
        return 1;
    printf("용량 C [Ah] : ");   
    if (scanf("%lf", &C)!=1) 
        return 1;
    printf("시스템효율 eta : ");  
    if (scanf("%lf", &eta)!=1) 
        return 1;

    //입력범위 검증
    // if (V<=0 || C<=0 || I_load<=0 || vel<0 || R<0 || R>=0 || eta<=0 || eta>1) {
    //     printf("%f\n %f\n %f\n %f\n %f\n %f\n", V, C, I_load, vel, R, eta);
    //     printf("입력값 범위를 확인하세요\n");
    //     return 1;
    // }
    
    //출력결과
    printf("****************출력 결과****************\n");
    printf("사용 가능 에너지 E_usable : %.2f Wh\n", E_usable);
    printf("런타임 t     %.2f h (%.1f min)\n", t_h, t_min);
    printf("주행거리 d     %.2f km\n", d_km);
    
    
    return 0;
}


