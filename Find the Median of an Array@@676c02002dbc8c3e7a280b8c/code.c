#include<stdio.h>
int main(){
    int arr[10],n,median;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(n%2==0){
            median=(arr[n/2]+arr[n/2+1])/2;
            printf("%d",median);
        }
        else{
            median=arr[n/2];
        }
    }
    
    return 0;
}