#include<stdio.h>
#include<limits.h>
int main(){
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
    if(large==INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",large);
    }
}
