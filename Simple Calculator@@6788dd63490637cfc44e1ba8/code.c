#include <stdio.h>
int main() {
    float x,y;
    char z;
    scanf("%f %f %c", &x,&y,&z);
    if(z=='+') {
        printf("%f", x+y);
    } else if(z=='-') {
        printf("%f", x-y);
    } else if(z=='*') {
        printf("%f", x*y);
    } else if(z=='/'){
        printf("%f", x/y);
    }
    return 0;
}