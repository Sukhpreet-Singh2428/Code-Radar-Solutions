#include <stdio.h>
int main() {
    int n;
    int isprime=1;
    scanf("%d", &n);
    for(int i=2;i<n;i++) {
        if(n%i==0) {
            isprime = 0;
            break;    
        }
    if(n<=1) {
        isprime = 0;
    }
    if(isprime){
        printf("Prime");
    } else{
        printf("Not Prime");
    }
    }
    return 0;
}