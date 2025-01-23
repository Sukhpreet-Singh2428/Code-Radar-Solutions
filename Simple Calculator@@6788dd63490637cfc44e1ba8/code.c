#include <stdio.h>
int main() {
    float x,y;
    char z;
    scanf("%f %f %c", &x,&y,&z);
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