#include<stdio.h>
int main(){
    int n,arr[20],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",sum+i);

    }
    return 0;
}