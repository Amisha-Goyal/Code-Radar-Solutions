#include<stdio.h>
int main(){
    int n,arr[20],large,pos,secondno,sort;
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
    if(n==2){
        printf("-1");
       
    }
    for(int i=0;i<n;i++){
        if(i!=pos){
            if(arr[i]>secondno){
                secondno=arr[i];
                sort=1;
                break;
            }
            if(arr[i]==secondno){
                printf("-1");
                break;
            }
        }
        

    }
    if(sort){
        printf("%d",secondno);
    }
    // printf("%d",secondno);
    return 0;

}