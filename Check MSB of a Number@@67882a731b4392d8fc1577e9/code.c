#include<stdio.h>
int main(){
    int n,bits;
    scanf("%d",&n);
    bits=n>>31;
    int msb=n&1;
    if(msb==1){
        printf("Set");
    }
    else
        printf("Not Set");
    
    return 0;


}