#include<stdio.h>
int isPrime(int num);

// int main(){
//     int t;
//     scanf("%d", &t);
//     while(t--){
//         int num;
//         scanf("%d", &num);
//         printf("%d\n", isPrime(num));
//     }
//     return 0;
// }
int isPrime(int num){
    int prime = 1;
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime = 0;
        }
    if(prime){
        return 1;
    }else{
        return 0;
    }
    }
}