#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int flipped = ~num;  // Apply bitwise NOT (~) operation
    printf("%d\n", flipped);  // Print the flipped number
    return 0;
}