#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    // scanf("%[^\n]s",str);
    fgets(str, sizeof(str), stdin);
    int k = 0;
    int size = 0;
    while(str[k]!='\0' && str[k]!='\n'){
        size++;
        k++;
    }
    printf("%d",size);
    return 0;
}