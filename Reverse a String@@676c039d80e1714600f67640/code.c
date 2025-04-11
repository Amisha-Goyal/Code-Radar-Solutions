#include<stdio.h>
int main(){
    char str[50];
    int i=0;
    gets(str);
    for(str[i]!='\0';i>=0;i--){
        printf("%c",str[i]);

    }
    return 0;
}