#include <stdio.h>
#define MAX_N 16

// ----함수선언부---
void classify_by_threshold(const int value[], int label[], int n, int threshold);
int count_black(const int label[], int n);
double average_index_of_black(const int label[], int n);

int main(void) {
    int N, threshold;
    int value[MAX_N];
    int label[MAX_N];

    // 센서개수입력
    printf("센서개수입력(1~%d): ", MAX_N);
    scanf("%d", &N);

    // 센서값입력
    printf("센서값%d개입력: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &value[i]);
    }
    
    // 임계값입력
    printf("임계값입력: ");
    scanf("%d", &threshold);

    // 함수 호출
    classify_by_threshold(value, label, N, threshold); // 라인판별처리
    
    int black_count = count_black(label, N); // 검정감지개수
    
    // 라인중심위치계산
    double center = average_index_of_black(label, N);

    // 결과출력
    printf("\nlabel = ");

    for (int i = 0; i < N; i++) {
        printf("%d ", label[i]);
    }

    printf("\nblack_count = %d\n", black_count);

    if (black_count == 0)
        printf("라인없음\n");
    else
        printf("index_avg = %.2f\n", center);


    return 0;
}


// 임계값으로분류
void classify_by_threshold(const int value[], int label[], int n, int threshold) {
    for (int i = 0; i < n; i++) {
        if (value[i] < threshold)
            label[i] = 1;
        else
            label[i] = 0;
    }
}

// 검정감지개수계산
int count_black(const int label[], int n) {
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        cnt += label[i];
    }
    
    return cnt;
}

// 라인중심계산
double average_index_of_black(const int label[], int n) {
    int sum = 0;
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        sum += i * label[i];
        cnt += label[i];
    }

    if (cnt == 0) {
        return -1.0;
    }

    return (double)sum / cnt;
}
