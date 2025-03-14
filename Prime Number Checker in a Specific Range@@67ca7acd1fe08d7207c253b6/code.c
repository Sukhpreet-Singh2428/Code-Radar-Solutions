int printPrimesInRange(int a,int b){
    if(a==0 || a==1) return 0;
    while(a<=b){
        int isprime = 1;
        int idx = a
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                isprime = 0;
                break;
            }
        }
        if(isprime) return a;
        a++;
    }
    return 0;
}