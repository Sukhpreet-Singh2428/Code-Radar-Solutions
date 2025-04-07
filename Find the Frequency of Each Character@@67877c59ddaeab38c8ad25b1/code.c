#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    for(int i=0;i<len;i++){
        char ch = str[i];
        int count = 1;
        int alreadycount = 0;
        for(int k=0;k<i;k++){
            if(str[k]==str[i]) alreadycount = 1;
        }
        if(alreadycount) continue;
        for(int j=i+1;j<len;j++){
            if(ch==str[j]) count++;
        }
        printf("%c: %d",ch,count);
        printf("\n");
    }
    return 0;
}