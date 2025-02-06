#include <stdio.h>


int main() {
    int age,no;
    scanf("%d",&age);
    if(age>=18 && no==1){
        printf("Eligible");
    }
    else if(age<18 && no==0){
        printf("Not Eligible");
    }
    return 0;
}