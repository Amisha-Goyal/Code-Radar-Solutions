#include<stdio.h>
int main(){
    int a,b,sum,multi,div,sub;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if(ch=='+'){
        sum=a+b;
        printf("%d",sum);

    }
    else if(ch=='-'){
        sub=a-b;
        printf("%d",sub);
    }
    else if(ch=='*'){
        multi=a*b;
        printf("%d",multi);
    }
    else if(ch=='/'){
        div=a/b;
        printf("%d",div);
    }
}