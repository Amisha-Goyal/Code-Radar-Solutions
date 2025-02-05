#include <stdio.h>
int main(){
    int m ,n q;
    scanf("%d %d %d",&m,&n,&q);
    if(m>n && m>q){
    printf("%d",m);}
    if(n>m && n>q){
    printf("%d",n);}
    else
    printf("%d",q);
    return 0;
}