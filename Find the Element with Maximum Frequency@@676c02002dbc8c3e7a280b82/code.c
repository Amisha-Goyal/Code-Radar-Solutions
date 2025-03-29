#include<stdio.h>
int main(){
    int n,arr[20],count=0,no;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i]==arr[j]){
                count=1;
                no=arr[i];
            }
        }

    }
    if(count){
        printf("%d",no);

    }
    else{
        printf("-1");
    }
    return 0;
}