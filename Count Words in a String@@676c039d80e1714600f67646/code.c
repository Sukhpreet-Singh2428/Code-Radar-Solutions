#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for(int i=0; i<=strlen(str); i++){
        if(str[i]==' ' || str[i]=='\0'){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}