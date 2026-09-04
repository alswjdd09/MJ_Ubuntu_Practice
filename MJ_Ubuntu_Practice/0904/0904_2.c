#include <stdio.h>
#include <string.h>

//이중 for문, break, continue
int main(void){

    /*
    // \다양한 * 피라미드 만들어보기
    int num = 6; //피라미드 층수+1 

    for(int i =1; i<num; i++){
        for(int j=0; j<num-i; j++){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    */

    /*
    //구구단 만들기
    for(int i=2; i<10; i++){
        for(int j=1; j<10; j++){
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }
    */

    /*
    //break
    int i = 0;
    int sum = 0;

    for(i=1; i<11; i++){
        
        sum += i; //누적의 합을 반복해서 구한다.

        if(sum>30){//sum이 30보다 크면 반복문을 종료한다.
            break;
        }
    }

    printf("누적한 값: %d\n",sum);
    printf("마지막으로 더한 값: %d\n",i);
    */

    /*
    //continue 반복문의 일부를 건너뛸 수 있다.
    int sum = 0;
    for(int i=0; i<101; i++){
        if((i%3)==0){ //3의 배수를 만나면 건너뛴다.
            continue;
        }
        sum += i;
    }
    */
    
    /*
    //무한 루프와 탈출
    int count = 0;
    while(1){
        printf("무한루프를 탈출해보자-!\n");

        count++;

        if(count == 5){
            break;
        }
    }
    */

    //while break continue 다양하게 활용해보기
    //사용자에게 임의의 값을 입력 받고, 0부터 입력 받은 수까지 3의 배수가 아닌 수를 더한다.
    //총 합이 100보다 크면 종료
    //음수 값을 입력 받았을 때에는 오류 문자를 반환한 후 종료한다.
    int num = 0;
    int sum = 0;
    // char *result = "";
    char result[50] = "";

    printf("num: ");
    scanf("%d",&num);

    while(num>0){
        for(int i=0; i<=num; i++){
            if((i%3) == 0){//3의 배수는 더하지 않는다.
                // printf(">>> %d는 3의 배수입니다.\n", i);
                continue;
            }          
            //sum
            sum += i;
            //i값이 100보다 커지면 중단한다.
            if(sum>100){
                printf("sum: %d  --> break\n", sum);
                break;
            }
            //입력 받은 수까지 다 더했다면 총합을 구한다.
            if(num == i){
                printf(">>>>>>>>sum: %d\n", sum);
            }
        }
        break;
    }

    //입력 받는 수가 음수라면 오류 메세지를 반환한다.
    if(num <= 0){
        strcpy(result,"잘못된 값을 입력했습니다.");
        // result = "잘못된 값을 입력했습니다."; //*포인터 활용해서 문자열 변수 변경
        printf("%s\n", result);
    }

    return 0;
}