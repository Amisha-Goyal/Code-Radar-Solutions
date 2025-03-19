#include<stdio.h>
int main(){
    int n,arr[20],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(n%i==0){
            count++;
            
        }
    }
    printf("%d",count);
    
}