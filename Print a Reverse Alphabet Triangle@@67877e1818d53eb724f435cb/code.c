#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    for(char i='A';i<=ch;i++){
        for(char j='A';j>=ch;j--){
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}