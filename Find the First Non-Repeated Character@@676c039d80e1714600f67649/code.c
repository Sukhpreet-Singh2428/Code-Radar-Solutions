#include<stdio.h>
#include<string.h>
int firstNonRepeated(char* str, int len){
    for(int i=0;i<len;i++){
        int count = 1;
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]) count++;
        }
        if(count==1){
            return printf("%c",str[i]);
        }
    }
    return printf("%c",'-');
}
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    firstNonRepeated(str,len);
    return 0;
}