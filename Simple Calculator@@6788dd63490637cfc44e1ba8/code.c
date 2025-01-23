#include <stdio.h>
int main() {
    float x,y;
    char z;
    scanf("%f %f %c", &x,&y,&z);
    if(z=='+') {
        printf("%.0f", x+y);
    } else if(z=='-') {
        printf("%.0f", x-y);
    } else if(z=='*') {
        printf("%.0f", x*y);
    } else if(z=='/'){
        printf("%.0f", x/y);
    } else if(z=='/' && y==0){
        printf("Error");
    }
    return 0;
}