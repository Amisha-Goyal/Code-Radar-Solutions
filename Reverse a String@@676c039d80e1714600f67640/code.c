#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i;
    scanf("%s",str);
    int len=strlen(str);
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);

    }
    return 0;
}