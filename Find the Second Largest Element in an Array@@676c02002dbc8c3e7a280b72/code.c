#include<stdio.h>
#include<limits.h>
int main(){
    int n,arr[20],large=INT_MIN,second=INT_MIN;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            second=large;
            large=arr[i];
        }
        else if(arr[i]>second && arr[i]!=large){
            second=arr[i];
        }
    }
    if(large==INT_MIN){
        printf("-1");
    }
    else{
        printf("%d ",second);
    }
    return 0;
}