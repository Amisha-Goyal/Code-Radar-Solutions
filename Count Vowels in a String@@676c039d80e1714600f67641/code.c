#include<stdio.h>
int main(){
    char str[50];
    int count=0,i=0;
    scanf("%s",str);
    while(str[i]!='\0'){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
           
        }
         i++;
    }
    printf("%d",count);
}