#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    for(int i=0,j=strlen(str)-1; i<=j; i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);
    return 0;
}