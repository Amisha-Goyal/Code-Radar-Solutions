#include<stdio.h>
#include<string.h>
int main(){
    char str[50],char2[100];
    int index=0,i;
    scanf("%s",str);
    int len=strlen(str);
    for(i=len-1;i>=0;i--){
        char2[index]=str[i];
        index++;
        
    }
    char2[index]='\0';
    if(strcmp(str,char2)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;

}