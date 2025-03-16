#include <stdio.h>
void checkMSB(int num) {
    if (num & (1 << 31))
        printf("Set");
    else
        printf("Not Set");
}
int main() {
    int num;
    scanf("%d", &num);
    checkMSB(num);
    return 0;
}
