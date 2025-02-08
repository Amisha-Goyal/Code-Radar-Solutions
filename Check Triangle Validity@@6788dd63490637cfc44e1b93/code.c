#include<stdio.h>
int main(){
    int a,b,c,m,n,o;
    scanf("%d %d %d",&a,&b,&c);
    m=a*a+b*b;
    n=b*b+c*c;
    o=a*a+c*c;
    if(m==c*c||n==a*a||o==b*b){
        printf("Valid");
    }
    else if(m!=c*c||n!=a*a||o!=b*b){
        printf("Invalid");
    }
    return 0;
}