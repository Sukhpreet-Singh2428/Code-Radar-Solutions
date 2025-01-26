#include <stdio.h>
int main() {
    int n;
    char letter='A';
    scanf("%d", &n);
    for(char i=1;i>=n;i++) {
        for(char j=1; j>=i;j++) {
            printf("%c ",letter);
            letter++;
        }
        printf("\n");
    }
    return 0;
}