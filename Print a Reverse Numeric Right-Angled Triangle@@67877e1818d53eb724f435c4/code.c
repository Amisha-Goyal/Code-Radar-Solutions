#include<stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}