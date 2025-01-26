#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(char i=1;i<=n;i++) {
        char letter='A';
        for(char j=1; j<=i;j++) {
            printf("%c ",letter);
            letter++;
        }
        printf("\n");
    }
    return 0;
}