#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c=='A' && c<='Z' &&c=='M'){
    printf("Uppercase");
    }
    if(c==0 && c<=9){
    printf("Not an alphabet");}
    else
    printf("Lowercase");
    return 0;
}