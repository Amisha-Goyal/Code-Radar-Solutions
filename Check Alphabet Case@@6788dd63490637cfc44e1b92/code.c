#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c=='A' && c<='Z'){
    printf("Uppercase");
    }
    else if(c==0 && c<=9){
    printf("Not an alphabet");}
    else{
    printf("Lowercase");
    }
    return 0;
}