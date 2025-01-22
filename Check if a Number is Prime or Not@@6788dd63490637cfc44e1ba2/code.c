#include <stdio.h>
int main() {
    int n;
    int check;
    scanf("%d", &n);
    if(n==1){
        printf("Not Prime");
    } else if(n==2) {
        printf("Prime");
    } else {
        for(int i=2;i<n;i++){
            if(n%i==0){
                check = 1;
                break;
            }
        }
        if(check==1) {
            printf("Prime");
        } else {
            printf("Not Prime");
        }
    }
    return 0;
}