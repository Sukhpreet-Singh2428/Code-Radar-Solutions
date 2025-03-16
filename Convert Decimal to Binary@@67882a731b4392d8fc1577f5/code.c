#include <stdio.h>
void decimalToBinary(int num) {
    int binary[32];  // Array to store binary digits
    int count = 0;   // Counter for binary digits
    if (num == 0) {
        printf("0\n");
        return;
    }
    while (num > 0) {
        binary[count] = num % 2;  // Store remainder (binary digit)
        num /= 2;
        count++;
    }
    // Print binary in reverse order
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num); // Convert and print binary
    return 0;
}