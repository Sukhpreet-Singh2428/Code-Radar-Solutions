int printPrimesInRange(int a,int b){
    int A = a;
    int foundprime = 0;
    if(b<2) printf("No prime numbers");
    else if(a<2) A=2;
    else{
        while(A<=b){
        int isprime = 1;
        for(int i=2;i<=A/2;i++){
            if(A%i==0){
                isprime = 0;
                break;
            }
        }
        if(isprime){
            printf("%d ",A);
            foundprime = 1;
        }
        A++;
        }
        if(!foundprime) printf("No prime numbers");
    }
}