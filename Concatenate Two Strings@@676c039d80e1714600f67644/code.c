#include<stdio.h>
#include<string.h>
int main(){
    char str1[40], str2[40];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    printf("%s",str1);
    printf("%s",str2);
    return 0;
}