int printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(isPrime(i))
        printf("%d ",i);
       }
    
    return 0;
}

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}