#include <stdio.h>
int setNthBit(int num, int n) {
    return num | (1 << n);  // Set the Nth bit
}
int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    int result = setNthBit(num, n);
    printf("%d\n", result);  // Print the new number after setting the bit
    return 0;
}