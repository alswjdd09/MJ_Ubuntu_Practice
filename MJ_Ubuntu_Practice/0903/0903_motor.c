#include <stdio.h>
#include <string.h>

int main(void){

    int kg, wheel, red; //총 하중, 바퀴 수, 감속비
    float Nm, m; //모터 정격 토크, 바퀴 반지름
    float fMin, fMotor; //최소 견인력, 모터가 낼 수 있는 견인력

    char result[500] = ""; //판정값
    // char * result = "";

    //사용자 입력 값 받기
    printf("총 하중(kg): ");
    scanf("%d", &kg);
    printf("구동 바퀴 수: ");
    scanf("%d", &wheel);
    printf("모터 정격 토크(Nm): ");
    scanf("%f",&Nm);
    printf("감속비: ");
    scanf("%d", &red);
    printf("바퀴 반지름(m): ");
    scanf("%f", &m);
    printf("필요한 최소 견인력: ");
    scanf("%f", &fMin);
    printf("모터가 낼 수 있는 견인력: ");
    scanf("%f", &fMotor);

    printf("****************************\n");

    if (fMin <= fMotor) {
        strcpy(result, "만족합니다.");
        // result = "만족합니다.";
    } else {
        strcpy(result, "불만족 (더 큰 모터나 감속비가 필요합니다!)");
        // result = "불만족 (더 큰 모터나 감속비가 필요합니다!)";
    }

    //print
    printf("총 하중: %d\n", kg);
    printf("구동 바퀴 수: %d\n", wheel);
    printf("모터 정격 토크: %.2lf\n", Nm);
    printf("감속비: %d\n", red);
    printf("바퀴 반지름: %.4lf\n", m);

    printf("\n");

    printf("필요한 최소 견인력: %.2f\n", fMin);
    printf("모터가 낼 수 있는 견인력: %.2f\n", fMotor);
    printf("판정: %s\n", result);


    return 0;
}