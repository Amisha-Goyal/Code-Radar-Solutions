#include<stdio.h>
void sort(int arr[],int n);
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    int mindiff=intmax;
    int pair1=-1, pair2=-1;
    for(int i=0;i<n-1;i++){
        int diff=arr[i]-arr[i+1];
        if(diff<mindiff){
            mindiff=diff;
            pair1=arr[i];
            pair2=arr[i+1];
        }
    }
    printf("%d %d",pair1,pair2);
}