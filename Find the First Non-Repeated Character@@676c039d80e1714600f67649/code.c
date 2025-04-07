#include<stdio.h>
#include<string.h>
char firstNonRepeated(char* str, int len){
    for(int i=0;i<len;i++){
        int flag = 1;
        for(int j=0;j<len;j++){
            if(i!=j && str[i]==str[j]){
                flag = 0;
                break;
            }
        }
        if(flag){
            return str[i];
        }
    }
    return '-';
}
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    char result = firstNonRepeated(str,len);
    puts(result);
    return 0;
}