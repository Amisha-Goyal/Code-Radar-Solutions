#include<stdio.h>
#include<limits.h>
int main(){
    int n,small=INT_MAX,second=INT_MAX,arr[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            second=small;
            small=arr[i];
        }
        else if(arr[i]<second && arr[i]!=small){
            if(second==INT_MAX){
                printf("-1");
            }
            else{
                printf("%d",second);
            }
            
        }
    }
}