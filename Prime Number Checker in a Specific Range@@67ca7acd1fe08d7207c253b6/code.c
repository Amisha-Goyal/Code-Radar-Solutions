int printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
       
        printf("%d ",isPrime(i));
       }
    
    return 0;
}

int isPrime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
            
    }
    if(count==2){
        return n;
    }
    else{
        return -1;
    }
    }
