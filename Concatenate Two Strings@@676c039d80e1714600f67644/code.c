#include<stdio.h>
int main(){
    char str[100],char2[50],char3[200];
    int i=0,j=0;
    gets(str);
    gets(char2);
    while(str[i]!='\0'){
        char3[j]=str[i];
        i++;
        j++;
    }
    i=0;
    while(char[i]!='\0'){
        char3[j]=char2[i];
        i++;
        j++;
    }
    char3[j]='\0';
    puts(char3);
    return 0;
}