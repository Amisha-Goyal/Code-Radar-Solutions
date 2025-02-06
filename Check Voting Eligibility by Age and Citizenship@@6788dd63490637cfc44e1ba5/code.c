#include <stdio.h>


int main() {
    int age,no;
    scanf("%d",&age);
    scanf("%d",&no);
    if(age>18 && no==1){
        printf("Eligible");
    }
    else if(age<=18 && no==0 ||age<18 && no==1){
        printf("Not Eligible");
    }
    return 0;
}