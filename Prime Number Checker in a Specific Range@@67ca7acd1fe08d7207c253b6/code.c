void printPrimesInRange(int a,int b){
    int isprime = 1;
    while(a<=b){
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                isprime = 0;
                break;
            }
        }
        if(isprime) printf("%d ",a);
        a++;
    }
    if(!isprime) printf("No prime numbers");
}