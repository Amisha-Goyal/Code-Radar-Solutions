#include<stdio.h>
int main(){
    int arr[10],n,median;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2==0){
            median=(arr[n/2]+arr[n/2+1])/2;
            
    }
    else{
            median=arr[n/2];
    }
    printf("%d",median);
    
    return 0;
}