#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    for(int i=1;i<=ch;i++){
        for(int j=1;j>=ch;j--){
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}