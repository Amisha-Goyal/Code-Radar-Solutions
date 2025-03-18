#include<stdio.h>
int main(){
    int n,arr[20],small;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
            
        }
        if(arr[i]>large){
            large=arr[i];
        }
    }
    printf("%d %d",large,small);
    return 0;

}