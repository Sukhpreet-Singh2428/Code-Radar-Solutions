#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    if(str[0]=='\n'){
        puts("Yes");
        return 0;
    }
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]!='0' && str[i]!='1'){
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}