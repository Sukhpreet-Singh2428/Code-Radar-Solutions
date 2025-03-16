#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num == 0) printf("%d",32); // Special case: All bits are 0
    else{
        int count = 0;
        while ((num & 1) == 0) {  // Check the rightmost bit
        count++;
        num >>= 1;  // Shift right to check the next bit
        }
        print("%d",count);
    }
    return 0;
}