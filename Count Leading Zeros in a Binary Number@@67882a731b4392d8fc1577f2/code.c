#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num == 0) printf("%d",32);  // Special case: all bits are 0
    else{
        int count = 0;
        for (int i = 31; i >= 0; i--) {  // Loop from MSB to LSB
        if (num & (1 << i)) break;  // Stop when we hit first '1'
        count++;
        }
        printf("%d",count);
    }
    return 0;
}