#include<stdio.h>
int main(){
    int arr[20],n,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                

            }
        }
        
    }
    printf("%d\n",count)
    
    
}