#include<stdio.h>
int main(){
    int n,arr[20],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i]=arr[j]){
                count++;

            }
        }
        if(count>1){
            printf("%d",arr[i]);
        }
    }
}