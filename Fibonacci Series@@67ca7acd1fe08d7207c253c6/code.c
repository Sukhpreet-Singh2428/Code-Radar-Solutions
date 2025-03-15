void fibonacciSeries(int n){
    int a=0;
    if(n<=2) a=1;
    printf("%d ",fibonacciSeries(n-1)+fibonacciSeries(n-2));
    return;
}