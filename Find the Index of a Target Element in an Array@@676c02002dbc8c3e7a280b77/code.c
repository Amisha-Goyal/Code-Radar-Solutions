#include<stdio.h>
int main(){
    int n,arr[20],target;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<n-1;i++){
        if(arr[i]==target){
             printf("%d",i);
             break;

        }
    }
   
    return 0;
}