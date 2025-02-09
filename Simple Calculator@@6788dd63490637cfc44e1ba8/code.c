#include <stdio.h>
int main(){
    int a,b,sum,diff,multiply,div;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if(ch=='+'){
        sum=a+b;
        printf("%d",sum);
    }
    else if(ch=='-'){
        diff=a-b;
        printf("%d",diff);
    }
    else if(ch=='*'){
        multiply=a*b;
        printf("%d",multiply);
    }
    else if(ch=='/'){
        div=a/b;
        printf("%d",div);
    }
    return 0;
}


