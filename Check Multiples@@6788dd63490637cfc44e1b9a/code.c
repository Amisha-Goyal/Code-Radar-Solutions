#include <stdio.h>


int main() {
   int m,n;
   scanf("%d %d",&m,&n);
   if(m%n==0 ||n%m==0){
    printf("Yes");
   }
   else{
    printf("No");
   }
    return 0;
}