printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%i==0 && i%1==0){
            printf("%d ",i);
        }
    }
}