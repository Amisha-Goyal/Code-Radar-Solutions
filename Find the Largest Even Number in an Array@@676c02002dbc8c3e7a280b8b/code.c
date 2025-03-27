#include<stdio.h>
int main(){
    int n,arr[20],large;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large=arr[0]%2;
    for(int i=0;i<n;i++){
    while(arr[i]>large){
        large=arr[i];
    }
    }
    printf("%d",large);
    return 0;
}