//코드 깔끔하게 다시 정리하고
//main함수 간결하게 만들기
//
//       [전체적인 구조]
//          파일 열기
//          fgets()로 한 줄씩 읽기
//            pring이면
//            pring++
//            count_hour()
//            count_ip()
//          파일 닫기
//          find_max_hour()
//          sort_ip()
//          결과 출력
//
#include <stdio.h>
#include <string.h>

typedef struct ipInfo{
    char ip[50];
    int count;
} IpInfo;

// 함수 선언
void count_hour(const char *line, int hourCnt[]);
void count_ip(const char *line, IpInfo ips[], int *ipCnt);
void sort_ip(IpInfo ips[], int ipCnt);
int find_max_hour(int hourCnt[], int *maxCnt);

int main(void){
    FILE *rfp;
    char line[1000];
    IpInfo ips[100];
    int pingCnt = 0;
    int ipCnt = 0;
    int hourCnt[24] = {0};
    int maxHour;
    int maxCnt = 0;


    // 파일 열기
    rfp = fopen("/home/mj/Documents/fast.log", "r");

    if(rfp == NULL){
        printf("입력 파일을 열지 못 했습니다.\n");
        return 1;
    }


    // 파일을 한 줄씩 읽기
    while(fgets(line, sizeof(line), rfp) != NULL){
        // Ping 로그인지 확인
        if(strstr(line, "Ping") != NULL){
            pingCnt++;
            // 시간 카운트
            count_hour(line, hourCnt);
            // IP 카운트
            count_ip(line, ips, &ipCnt);
        }
    }

    fclose(rfp);

    // 가장 많이 요청된 시간 찾기
    maxHour = find_max_hour(hourCnt, &maxCnt);

    // IP를 요청 횟수 기준으로 내림차순 정렬
    sort_ip(ips, ipCnt);

    // 결과 출력
    printf("\n============= 결과 =============\n");
    printf("ping 횟수: %d\n", pingCnt);
    printf("가장 많이 요청된 시간대: %02d시 (%d회)\n", maxHour, maxCnt);

    // TOP 3 출력
    printf("========== Ping TOP 3 ==========\n");
    int top = ipCnt < 3 ? ipCnt : 3;
    for(int i = 0; i < top; i++){
        printf("%d위 : %s (%d회)\n",
            i + 1,
            ips[i].ip,
            ips[i].count);
    }

    return 0;
}


// 시간별 Ping 횟수 계산
void count_hour(const char *line, int hourCnt[]){
    char time[30];
    int hour;

    // 날짜 + 시간 가져오기
    sscanf(line, "%29s", time);

    // 시간(hour)만 가져오기
    sscanf(time, "%*[^-]-%d", &hour);

    // 해당 시간의 카운트 증가
    hourCnt[hour]++;
}


// IP별 Ping 횟수 계산
void count_ip(const char *line, IpInfo ips[], int *ipCnt){
    char ip[50];
    char *p;

    // {IPv6-ICMP} 찾기
    p = strstr(line, "{IPv6-ICMP}");

    if(p == NULL){
        return;
    }

    // {IPv6-ICMP} 뒤로 이동
    p += strlen("{IPv6-ICMP}");

    // IP 가져오기
    sscanf(p, "%49s", ip);

    // 기존 IP인지 확인
    for(int i = 0; i < *ipCnt; i++){
        if(strcmp(ips[i].ip, ip) == 0){
            ips[i].count++;
            return;
        }
    }

    // 새로운 IP라면 저장
    strcpy(ips[*ipCnt].ip, ip);
    ips[*ipCnt].count = 1;

    (*ipCnt)++;
}


// 가장 많이 요청된 시간 찾기
int find_max_hour(int hourCnt[], int *maxCnt){
    int maxHour = 0;

    for(int i = 0; i < 24; i++){
        if(hourCnt[i] > *maxCnt){
            *maxCnt = hourCnt[i];
            maxHour = i;
        }
    }

    return maxHour;
}


// IP를 요청 횟수 기준으로 내림차순 정렬
void sort_ip(IpInfo ips[], int ipCnt){
    IpInfo temp;

    for(int i = 0; i < ipCnt - 1; i++){
        for(int j = i + 1; j < ipCnt; j++){
            if(ips[i].count < ips[j].count){
                temp = ips[i];
                ips[i] = ips[j];
                ips[j] = temp;
            }
        }
    }
}