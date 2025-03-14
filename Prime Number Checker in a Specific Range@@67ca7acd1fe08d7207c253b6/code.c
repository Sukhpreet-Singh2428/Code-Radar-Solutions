int printPrimesInRange(int a,int b){
    int foundprime = 0;
    if(b<2) printf("No prime numbers");
    else if(a<2) a=2;
    else{
        while(a<=b){
        int isprime = 1;
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                isprime = 0;
                break;
            }
        }
        if(isprime){
            printf("%d ",a);
            foundprime = 1;
        }
        a++;
        }
        if(!foundprime) printf("No prime numbers");
    }
}