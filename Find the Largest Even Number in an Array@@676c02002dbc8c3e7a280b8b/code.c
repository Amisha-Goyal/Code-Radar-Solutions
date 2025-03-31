#include<stdio.h>
#include<limits.h>
itn main(){
    int n,arr[20],large=INT_MIN;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>large && arr[i]%2==0){
            large=arr[i];

        }
    }
    if(large==INT_MAX){
        printf("-1");
    }
    else{
        printf("%d",large);
    }
}
