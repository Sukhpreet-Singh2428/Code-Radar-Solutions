#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]!='0' && str[i]!='1' && str[i]!=' '){
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}