#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n==1 || n==3 || n==5 || n==7){
        printf("31");
    } else if(n==2) {
        printf("28");
    } else if(n==4 || n==6) {
        printf("30");
    } else if (n==8 || n==10 || n==12) {
        printf("31");
    } else if(n==9 || n==11) {
        printf("30");
    } else {
        printf("Invalid month");
    }
    return 0;
}
