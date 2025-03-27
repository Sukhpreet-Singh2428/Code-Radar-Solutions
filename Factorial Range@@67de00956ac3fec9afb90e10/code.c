void factorial(int start){
    int flag = 1;
    for(int i=0;i<=start/2;i++){
        if(start%i==0) flag = 0;
    }
    if(flag) printf("%d\n",start);
}
void factorialRange(int start, int end){
    if(start>end || (start < 0 || end < 0)) printf("Invalid range");
    while(start<=end){
        factorial(start);
        start++;
    }
}