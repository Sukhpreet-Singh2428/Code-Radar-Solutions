void printPrimeInRange(int a,int b){
    while(a<=b){
        int isprime = 1;
        for(int i=2;i<a/2;i++){
            if(a%i==0){
                isprime = 0;
            }
        }
        if(isprime) printf("%d ",isprime);
        a++;
    }
}