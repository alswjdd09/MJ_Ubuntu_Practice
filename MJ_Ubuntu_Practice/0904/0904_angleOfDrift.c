#include <stdio.h>
#include <math.h>

//이동로봇의 최대 견인력과 등판 가능 경사각
//편류각과 편류거리
int main(void){

    double r; //바퀴 반지름
    double W; //트랙폭
    double epsL_pct, epsR_pct; //좌우 바퀴 오차율
    double L; //목표 주행 거리

    printf("바퀴 반지름 r(m): "); 
    if (scanf("%lf", &r) != 1) return 1; //scanf로 입력 받은 값이 이상 없이 잘 들어왔다면 1
                                         //0이면 잘못된 형으로 입력 받음(에러)
                                         //return 1; 오류 코드를 반환하여 중단.
    
    printf("트랙폭 W(m): "); if (scanf("%lf", &W) != 1) return 1;
    printf("좌측 바퀴 오차율 εL(%%): "); if (scanf("%lf", &epsL_pct) != 1) return 1;
    printf("우측 바퀴 오차율 εR(%%): "); if (scanf("%lf", &epsR_pct) != 1) return 1;
    printf("주행 거리 L(m): "); if (scanf("%lf", &L) != 1) return 1;

    // 단위 검증
    if (r <= 0 || W <= 0 || L <= 0) {
        printf("입력값을 확인하세요.\n");
        return 1;
    }

    // 퍼센트 → 비율
    double epsL = epsL_pct / 100.0;
    double epsR = epsR_pct / 100.0;
    
    // 좌우 바퀴 반경
    double eL = r * (1.0 + epsL);
    double eR = r * (1.0 + epsR);
    
    // 곡률반경 Rc
    double Rc = (W / 2.0) * (eL + eR) / (eR - eL);
    
    // 편류각 δ = L / Rc (라디안)
    double delta_rad = L / Rc;
    double delta_deg = delta_rad * 180.0 / M_PI;
    
    // 편류거리
    double drift = Rc * (1.0 - cos(delta_rad));

    printf("\n[결과]\n");
    printf("좌/우 바퀴 반경: %.4f m / %.4f m\n", eL, eR);
    printf("곡률반경 Rc = %.2f m\n", Rc);
    printf("편류각 δ = %.2f deg\n", delta_deg);
    printf("편류거리 d_drift = %.3f m\n", drift);
    printf("(가정: 동일 각속도, 슬립 없음, 미세 곡선 근사)\n");

    return 0;
}