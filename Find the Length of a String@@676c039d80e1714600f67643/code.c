#include<stdio.h>
int main(){
    char str[50];
    int i=0,count=0;
    gets(str);
    while(str[i]!='\0'){
        count++;
        i++;

    }
    puts(count);
}