int fibonacciSeries(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
       for(int i=0;i<=n;i++){
        printf("%d", fibonacciSeries(n-1)+fibonacciSeries(n-2))
       }
    }
}