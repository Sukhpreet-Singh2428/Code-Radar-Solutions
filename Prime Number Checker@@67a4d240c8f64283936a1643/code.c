#include<stdio.h>
int isPrime(int num);
int isPrime(int num){
    int prime = 1;
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime = 0;
        }
    if(prime==1){
        printf(1);
    }else{
        printf(0);
    }
    }
}