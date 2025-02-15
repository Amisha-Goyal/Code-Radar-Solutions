#include<stdio.h>
int main(){
    int n,bytes;
    scanf("%d",&n);
    bytes=n&1;
    if(bytes==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
    
}