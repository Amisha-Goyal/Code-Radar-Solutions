#include<stdio.h>
int main(){
    int a,b,sum,multi,div,sub;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if(ch=='+'){
        sum=a+b;
        printf("%d",sum);

    }
    if(ch=='-'){
        sub=a-b;
        printf("%d",sub);
    }
    if(ch=='*'){
        multi=a*b;
        printf("%d",multi);
    }
    if(ch=='/'){
        div=a/b;
        printf("%d",div);
    }
    return 0;
}