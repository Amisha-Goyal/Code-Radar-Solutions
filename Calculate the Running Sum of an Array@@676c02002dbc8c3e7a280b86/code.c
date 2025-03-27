#include<stdio.h>
void fun(int arr[],int n,int result[]);
int main(){
    int n,arr[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fun(arr,n,result);
    for(int i=0;i<n;i++){
        printf("%d ",result[i]);
    }

}
void fun(int arr,int n,int result[]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        result[i]=sum;
    }
    
}