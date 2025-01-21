#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a&1==1) {                    //if number is odd: 1(set) or if number is even: 0(Not set). so we can do it also by checking odd even numbers
        printf("Set");
    } else{
        printf("Not Set");
    }
    return 0;
}