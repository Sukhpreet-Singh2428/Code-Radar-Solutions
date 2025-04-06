#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    // scanf("%[^\n]s",str);
    fgets(str, sizeof(str), stdin);
    int size = 0;
    while(str[size]!='\0' && str[size]!='\n'){
        // if(str[size]=='\n') break;
        size++;
    }
    printf("%d",size);
    return 0;
}