int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}
void fibonacciSeries(int n){
    for(int i=1;i<=n;i++){
        printf("%d ",fibo(i));
    }
    return;
}