#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    char charac;
    for(int i=0;i<len;i++){
        char ch = str[i];
        int count = 1;
        for(int j=i+1;j<len;j++){
            if(ch==str[j]) count++;
        }
        if(count==1){
            charac = str[i];
            break;
        }
    }
    printf("%c",charac);
    return 0;
}