#include<stdio.h>
int main(){
    int n,bits;
    scanf("%d",&n);
    bits=n>>31;
    bits=n&1;
    if(bits==1)
        printf("Set");
    else
        printf("Not Set");
    
    return 0;


}