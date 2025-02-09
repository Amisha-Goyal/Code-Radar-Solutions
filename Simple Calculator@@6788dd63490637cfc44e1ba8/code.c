#include<stdio.h>
int main(){
    int a,b,sum,multi,div,sub;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if(ch=='+'){
        sum=a+b;
        printf("%d\n",sum);

    }
    else if(ch=='-'){
        sub=a-b;
        printf("%d\n",sub);
    }
    else if(ch=='*'){
        multi=a*b;
        printf("%d\n",multi);
    }
    else if(ch=='/'){
        div=a/b;
        printf("%d\n",div);
    }
    return 0;
}