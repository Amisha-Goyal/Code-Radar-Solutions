#include<stdio.h>
int main(){
    int n,arr[20],count=0,no;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i]==arr[j]){
                count++;
                no=arr[j];
                

        }
       
    }
    }
    if(count>n/2){
        printf("%d",no);
    }
    if(count==0){
         printf("-1");}
}
   
    

