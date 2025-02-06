#include<stdio.h>
int main(){
    int n,multiply;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        multiply=n*i;
        printf("%d x %d = %d",n,i,multiply);
    }
    return 0;
}