int fibonacciSeries(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
    // for(int i=0;i<=n;i++){
    //     printf("%d",fibonacciSeries(i));
    // }
    printf("%d",fibonacciSeries(n));
    return 0;
}