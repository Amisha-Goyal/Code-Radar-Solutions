#include<stdio.h>
int main(){
    int n,arr[20],large=arr[0],secondarr,pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        while(arr[i]>large){
            large=arr[i];
        }
    }
    secondarr=[n-pos-1];
    for(int i=0;i<n;i++){
        while(pos!=0){
            if(arr[i]>secondlarge){
                secondlarge=arr[i];
            }
        }
    }
    printf("%d",secondlarge);
    return 0;

    
}