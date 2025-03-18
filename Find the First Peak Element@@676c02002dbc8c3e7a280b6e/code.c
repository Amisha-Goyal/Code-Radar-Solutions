#include<stdio.h>
int main(){
    int arr[20],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
        }

    }
    return 0;
    
}