#include<stdio.h>
int main(){
    int arr[20],n,sort,notsort;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        
        if((arr[i]<arr[i+1]) || (arr[i]==arr[i+1])){
           sort=1;
        }
    }
    if(sort|| n==1){
        printf("Sorted");
    }
    if(sort==0||n!=1){
        printf("Not Sorted");

    }
    return 0;

}