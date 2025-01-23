#include <stdio.h>
int main() {
    int x,y;
    char z;
    scanf("%d %d %d", &x,&y,&z);
    if(z=='+') {
        printf("%d", x+y);
    } else if(z=='-') {
        printf("%d", x-y);
    } else if(z=='*') {
        printf("%d", x*y);
    } else {
        printf("%d", x/y);
    }
    return 0;
}