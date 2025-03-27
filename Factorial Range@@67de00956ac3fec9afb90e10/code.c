void factorial(int start){
    int fact = 1;
    for(int i=1;i<=start;i++){
        fact *= i;
    }
    printf("%d\n", fact);
}
void factorialRange(int start, int end){
    if(start>end || (start < 0 || end < 0)){
        printf("Invalid range");
        return;
    }
    while(start<=end){
        factorial(start);
        start++;
    }
}