#include<stdio.h>
int main(){
    char str[50];
    int i=0,count++;
    scanf("%s",str);
    while(str[i]!='\0'){
        count++;
        i++;

    }
    printf("%d",count);
}