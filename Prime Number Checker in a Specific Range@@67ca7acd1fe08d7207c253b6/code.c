int printPrimesInRange(int a,int b){
    int foundprime = 0;
    if(a<2){
        printf("No prime numbers");
        a = 2;
    }
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