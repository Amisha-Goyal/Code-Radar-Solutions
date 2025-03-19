#include<stdio.h>
int main(){
    int n,arr[20],large,pos,secondno;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
            pos=i;
        }
    }
    secondno=arr[n-pos-1];
    for(int i=0;i<n;i++){
        if(i!=pos){
            if(arr[i]>secondno){
                secondno=arr[i];
            }
            
        }
    }
    if(n==2 || arr[i]==secondno){
        printf("-1");
    }
    printf("%d",secondno);
    return 0;

}