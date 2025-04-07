#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    for(int i=0;i<len;i++){
        char ch = str[i];
        if(ch>='a' && ch<='z'){
            ch = ch - 32;
        }
        str[i] = ch;
    }
    puts(str);
    return 0;
}