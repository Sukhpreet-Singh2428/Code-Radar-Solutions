#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int maxfeq = 0;
    char maxchar;
    for(int i=0;i<strlen(str);i++){
        int count = 1;
        char ch = str[i];
        for(int j=i+1;j<strlen(str);j++){
            if(ch==str[j]) count++;
        }
        if(count>maxfeq){
            maxfeq = count;
            maxchar = str[i];
        }else if(count==maxfeq){
            if(maxchar>str[i]) maxchar = str[i];
        }
    }
    printf("%c",maxchar);
    return 0;
}