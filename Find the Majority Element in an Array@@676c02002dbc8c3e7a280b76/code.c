#include<stdio.h>
int main(){
    int n,arr[20],count=0,no;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                

        }
        if(count>n/2){
        no=arr[i];
        printf("%d",no);
    }
    }
    else{
        printf("-1");
    }
   
    
}
}