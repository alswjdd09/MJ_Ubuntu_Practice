//fast 파일에서 ping을 몇번을 보냈는지 판단하고
//가장 많이 보낸 IP주소 - top3 고르기
//가장 많이 요청을 보낸 시간대 찾기
#include <stdio.h>
#include <string.h>

typedef struct ipInfo{
    char ip[50];
    int count;
}IpInfo;

void sort_ip(IpInfo ips[], int ipCnt);

int main(void){

    FILE *rfp;
    IpInfo ips[100];

    char line[1000];
    char time[30];

    char ip[50];
    char *p;
    
    int pingCnt = 0;
    int ipCnt =0;

    int hour;
    int hourCnt[24] = {0};
    int maxHour, maxCnt = 0;

    
    //파일 읽어오기
    rfp = fopen("/home/mj/Documents/fast.log","r");
    if(rfp == NULL){
        printf("입력 파일을 열지 못 했습니다.\n");
        return 1;
    }

    while(fgets(line, sizeof(line), rfp) != NULL){
        if(strstr(line, "Ping") != NULL){
            pingCnt++;

            //날짜 + 시간 가지고 오기
            sscanf(line, "%39s", time);
            //시간만 가져오기
            sscanf(time, "%*[^-]-%d", &hour);
            //해당 시간 카운트 증가
            hourCnt[hour]++;
        }

        p = strstr(line, "{IPv6-ICMP}");

        if(p != NULL){
            // {IPv6-ICMP} 뒤로 이동
                p += strlen("{IPv6-ICMP}");

                // IP 가져오기
                sscanf(p, "%49s", ip);

                // 기존 IP인지 확인
                int found = 0;

                for(int i = 0; i < ipCnt; i++)
                {
                    if(strcmp(ips[i].ip, ip) == 0)
                    {
                        ips[i].count++;
                        found = 1;
                        break;
                    }
                }

                // 새로운 IP라면 저장
                if(found == 0)
                {
                    strcpy(ips[ipCnt].ip, ip);
                    ips[ipCnt].count = 1;
                    ipCnt++;
                }
        }
    }

    for(int i=0; i<24; i++){
        if(hourCnt[i]>maxCnt){
            maxCnt = hourCnt[i];
            maxHour = i;
        }
    }


    fclose(rfp);

    sort_ip(ips, ipCnt);

    printf("============= 결과 =============\n");
    printf("ping 횟수: %d\n", pingCnt);
    // printf("가장 많이 보낸 주소: %s\n", ipInfo.ip);
    printf("가장 많이 요청된 시간대: %02d시 (%d회)\n", maxHour, maxCnt);
     // TOP 3 출력
    printf("======= Ping TOP 3 ========\n");
    int top = ipCnt < 3 ? ipCnt : 3;
    for(int i = 0; i < top; i++){
        printf("%d위 : %s (%d회)\n",
               i + 1,
               ips[i].ip,
               ips[i].count);
    }
    
    return 0;
}

void sort_ip(IpInfo ips[], int ipCnt)
{
    IpInfo temp;

    for(int i = 0; i < ipCnt - 1; i++)
    {
        for(int j = i + 1; j < ipCnt; j++)
        {
            if(ips[i].count < ips[j].count)
            {
                temp = ips[i];
                ips[i] = ips[j];
                ips[j] = temp;
            }
        }
    }
}