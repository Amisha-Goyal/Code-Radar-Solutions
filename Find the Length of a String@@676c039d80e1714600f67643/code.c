#include<stdio.h>
int main(){
    char str[50];
    int i=0;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
       
        i++;

    }
    if(str[i-1]=='\n'){
        i--;
    }
    printf("%d",i);
}