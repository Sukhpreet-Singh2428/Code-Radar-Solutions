#include <stdio.h>
int main() {
    int n;
    int check=0;
    scanf("%d", &n);
    if(n==1){
        printf("Not prime");
    } else if(n==2) {
        printf("Prime");
    } else {
        for(i==1;i<=n;i++){
            if(n%i==0){
                check = 1;
            }
            else{
                check = 0;
            }
        }
        if(check==1) {
            printf("Prime");
        } else {
            printf("Not prime";)
        }
    }
    return 0;
}