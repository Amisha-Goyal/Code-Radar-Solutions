#include<stdio.h>
int main(){
    int n1,n2,arr[20],count=0;
    scanf("%d %d",&n1,&n2);
    for(int i=0;i<n1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n1;i++){
        if(arr[i]==n2){
            count++
        }
        else{
            count=1;
        }
    }
    printf("%d",count);
    return 0;
    
}