#include<stdio.h>
int main(){
    int arr[20],n,sort=1;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        
        if(if(arr[i]>arr[i+1])){
           sort=0;
           
        }
    }
    if(sort){
        printf("Sorted");
    }
    if(sort==0){
        printf("Not Sorted");

    }
    return 0;

}