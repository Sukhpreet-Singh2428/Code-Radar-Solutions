#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    int i,j=0;
    for(i=0; i<strlen(str); i++){
        if(str[i]!=' '){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    pust(str);
    return 0;
}