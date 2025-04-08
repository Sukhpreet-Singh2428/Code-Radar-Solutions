#include<stdio.h>
#include<string.h>
int isBinary(char* str) {
    for(int i = 0; str[i]; i++) {
        if(str[i] != '0' && str[i] != '1') return 0;
    }
    return 1;
}
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    // for(int i=0;i<len;i++){
    //     if(str[i]!='0' && str[i]!='1'){
    //         puts("No");
    //         return 0;
    //     }
    // }
    if(isBinary(str)) puts("Yes");
    else puts("No");
    return 0;
}