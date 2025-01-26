#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=n;i>=1;i--) {
        char letter='A';
        for(int j=i;j>=1;j--) {
            printf("%c ",letter);
            letter++;
        }
        printf("\n");
    }
    return 0;
}