#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d", &num,&n);
    int pos = 0;
    while ((num & 1) == 0) { 
        num >>= 1;
        pos++;
    }
    printf("%d", pos); 
    return 0;
}