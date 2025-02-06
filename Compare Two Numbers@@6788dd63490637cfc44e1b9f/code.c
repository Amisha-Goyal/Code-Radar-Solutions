#include <stdio.h>


int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    if(m==n){
        printf("Equal");

    }
    else if(m>n){
        printf("First");
    }
    else if(n>m){
        printf("Second");
    }
    

    return 0;
}