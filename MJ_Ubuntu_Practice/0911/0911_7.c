//구조체 배열, 구조체 함수
#include <stdio.h>

struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct address *lp, int size);

int main(void){

    struct address list[3] = {
        {"김", 23, "111-11", "울릉도 독도"},
        {"이", 43, "222-22", "서울 강서구"},
        {"박", 82, "333-33", "충남 천안"}
    };

    int size = sizeof(list)/sizeof(list[0]);
    print_list(list, size); //리스트 배열의 주소값으로 함수에 전달

    return 0;
}

void print_list(struct address *lp, int size){
    for(int i=0; i<size; i++){
        printf("%10s%5d%15s%20s\n", (lp+i) -> name, (lp+i)->age, (lp+i)->tel, (lp+i)->addr);
    }
}