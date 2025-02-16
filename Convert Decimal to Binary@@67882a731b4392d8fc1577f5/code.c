#include <stdio.h>
#include<math.h>

int main() {
    int remainder,n,digit=0;
    int i=0;
    scanf("%d",&n);
    while(n!=0){
        remainder=n%2;
        digit=digit+remainder*pow(10,i);
        n=n/2;
        i++;
    }
    printf("%d",digit);
    return 0;
}