#include<stdio.h>
int main(){
    int arr[20],n,sort=1;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n-1;i++){
        
        if(arr[i]>arr[i+1]){
           sort=0;
           
        }
    }
    if(sort){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");

    }
    return 0;

}