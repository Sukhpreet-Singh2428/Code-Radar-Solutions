int printPrimesInRange(int a,int b){
    int foundprime = 0;
    if(a<2){
        a = 2;
    }
    else{
        while(a<=b){
        int isprime = 1;
        for(int i=2;i*i<a;i++){
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