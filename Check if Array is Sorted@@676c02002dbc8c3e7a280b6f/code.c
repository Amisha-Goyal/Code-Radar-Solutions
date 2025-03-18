#include<stdio.h>
int main(){
    int arr[20],n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            printf("Not Sorted");
        }
        if(arr[i]>arr[i-1]){
            printf("Sorted");
        }
    }
    return 0;

}