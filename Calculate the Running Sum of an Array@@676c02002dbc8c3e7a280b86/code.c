#include<stdio.h>
int main(){
    int n,arr[20],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        printf("%d ",sum);
    }
    return 0;
}