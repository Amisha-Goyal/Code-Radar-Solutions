#include <stdio.h>
int main() {
    int m,n,result;
    scanf("%d %d ",&m,&n);
    result=m>>n;
    printf("%d",result);
    return 0;
}