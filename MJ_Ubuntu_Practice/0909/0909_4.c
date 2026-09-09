#include <stdio.h>

//포인터로 문자열을 사용하는 방법
int main(void){

    char *dessert = "apple";

    printf("apple 주소: %p\n", dessert);
    printf("오늘 후식은 %s입니다.\n", dessert);
    printf("\n\n");
    
    dessert = "banana";
    
    printf("banana 주소: %p\n", dessert);
    printf("내일 후식은 %s입니다.\n", dessert);



    return 0;
}