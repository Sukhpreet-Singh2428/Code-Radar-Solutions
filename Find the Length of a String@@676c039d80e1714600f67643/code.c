#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]",str);
    int k = 0;
    int size = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("%d",size);
    return 0;
}