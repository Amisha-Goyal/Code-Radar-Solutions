#include<stdio.h>
int main(){
    int n,arr[20],small,pos=0,second;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<=small){
            small=arr[i];
            pos=i;
        }
    }
    second=arr[n-pos-1];
    for(int i=0;i<n;i++){
        if(arr[i]<second){
            second=arr[i];
        }

    }
    printf("%d",second);
    return 0;

}