//문자 출력 함수 fputc
//문자열을 한 문자씩 파일로 출력하기
#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char str[20];

    //a+ : 읽기 + 뒤에 추가
    fp = fopen("a.txt", "a+");

    if(fp == NULL){
        printf("파일이 열리지 않습니다.\n");
        return 1;
    }

    while(1){
        printf("텍스트 입력: ");
        scanf("%s", str);
        if(strcmp(str, "end")==0){
            break;
        }else if(strcmp(str, "list") == 0){
            //rewind(fp)
            fseek(fp, 0, SEEK_SET); //SEEK_SET: 처음, CUR: 현재, END: 끝으로 커서 이동

            while (1)
            {
                fgets(str, sizeof(str), fp);
                //feof 함수는 파일의 끝이면 참(0이 아닌 값)을 반환한다.
                if(feof(fp)){
                    break;
                }
                printf("%s", str);
            }    
        }else{
            fprintf(fp, "%s\n", str);
        }
    }

    //열었으면 닫아
    fclose(fp);

    return 0;
}