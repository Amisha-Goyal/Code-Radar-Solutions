#include<stdio.h>
int main(){
    int n,arr[20],target;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    printf("%d",arr[target]);
    return 0;
}