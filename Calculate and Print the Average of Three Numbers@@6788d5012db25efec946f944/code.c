#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    float x;
    x = (a+b+c)/3;
    if(x==0) {
        printf("Average: 0");
    } else {
        printf("Average: %.2f",x);
    }
    return 0;
}